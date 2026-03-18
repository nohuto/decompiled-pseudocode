/*
 * XREFs of DrvCleanupRemoteGraphicsDevices @ 0x1C01737C4
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0090AB0 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvCleanupRemoteGraphicsDevices()
{
  __int64 result; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx

  result = UserIsUserCritSecIn();
  if ( !(_DWORD)result )
    result = WdLogSingleEntry0(1LL);
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 )
    {
      if ( *((_QWORD *)i + 38) )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02967F0)(*((_QWORD *)i + 35), 0LL, *((_QWORD *)i + 36));
        *((_QWORD *)i + 35) = 0LL;
        result = 0LL;
        *((_QWORD *)i + 37) = 0LL;
        *((_QWORD *)i + 38) = 0LL;
      }
    }
  }
  return result;
}
