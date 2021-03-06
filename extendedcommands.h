extern int signature_check_enabled;
extern int script_assert_enabled;

int
backup_ss_files(const char *backup_script_path);

int
restore_ss_files(const char *restore_script_path);

int
open_pipe(const char *pathtoprog);

int
allow_flash_non_safe();

int
set_flash_non_safe(int set);

void
toggle_signature_check();

void
toggle_script_asserts();

void
show_choose_zip_menu();

int
do_nandroid_backup(const char* backup_name);

int
do_nandroid_restore();

void
show_nandroid_restore_menu(const char* path);

void
show_nandroid_advanced_restore_menu(const char* path);

void
show_nandroid_menu();

void
show_partition_menu();

int
show_reboot_menu();

void
show_wipe_menu();

void
show_choose_zip_menu();

int
install_zip(const char* packagefilepath);

int
__system(const char *command);

void
show_advanced_menu();

int format_unknown_device(const char *device, const char* path, const char *fs_type);

void
wipe_battery_stats();

void create_fstab();

int has_datadata();

void handle_failure(int ret);

void process_volumes();

int extendedcommand_file_exists();

void show_install_update_menu();

int confirm_selection(const char** title, char* confirm);

int run_and_remove_extendedcommand();
