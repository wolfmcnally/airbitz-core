BUILD_DIR ?= build

default: libbitcoin.ios-universal

$(BUILD_DIR)/%/tasks.mk: recipes/%
	@ ./run.sh $* write-tasks
-include $(patsubst recipes/%,$(BUILD_DIR)/%/tasks.mk,$(wildcard recipes/*))

clean:
	rm -rf $(BUILD_DIR)
