/*
 * XREFs of ?get_DisplayInfo@TrayInfoTipAppInfo@SystemTray@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x1803EAFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIAppDisplayInfo@ApplicationModel@Windows@@@?$com_ptr_t@VTrayInfoTipDisplayInfo@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@@Z @ 0x1803EAB48 (--$copy_to@UIAppDisplayInfo@ApplicationModel@Windows@@@-$com_ptr_t@VTrayInfoTipDisplayInfo@Syste.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfo::get_DisplayInfo(
        SystemTray::TrayInfoTipAppInfo *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2)
{
  __int64 *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 72);
  try
  {
    wil::com_ptr_t<SystemTray::TrayInfoTipDisplayInfo,wil::err_exception_policy>::copy_to<Windows::ApplicationModel::IAppDisplayInfo>(
      v2,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfo.cpp",
                           v3);
  }
  return result;
}
