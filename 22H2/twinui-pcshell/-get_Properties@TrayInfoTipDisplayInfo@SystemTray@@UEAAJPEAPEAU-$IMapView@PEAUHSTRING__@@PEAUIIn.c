/*
 * XREFs of ?get_Properties@TrayInfoTipDisplayInfo@SystemTray@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1803EC120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::get_Properties(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAE,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
                           a4);
  }
  return result;
}
