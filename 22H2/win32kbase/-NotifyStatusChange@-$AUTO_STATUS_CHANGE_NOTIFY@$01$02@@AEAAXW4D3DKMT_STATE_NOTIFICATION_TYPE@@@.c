/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00ADFE4
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0019E30 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C001A4C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v6[0] = a2;
  v6[1] = 0;
  v7 = *a1;
  result = ((__int64 (__fastcall *)(_DWORD *))qword_1C0250A30)(v6);
  if ( (int)result < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, v3);
    return WdLogEvent5_WdAssertion(v5);
  }
  return result;
}
