/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00BFF14
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v3[0] = a2;
  v3[1] = 0;
  v4 = *a1;
  result = ((__int64 (__fastcall *)(_DWORD *))qword_1C0296800)(v3);
  if ( (int)result < 0 )
    return WdLogSingleEntry0(1LL);
  return result;
}
