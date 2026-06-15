/*
 * XREFs of ??$?9UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_N$$TAEBV?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@0@@Z @ 0x14001EE30
 * Callers:
 *     ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x1400573F0 (-GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@23.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>(
        __int64 a1,
        _QWORD *a2)
{
  return *a2 != 0LL;
}
