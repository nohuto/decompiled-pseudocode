/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0190A40
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v4[0] = a2;
  v4[1] = 0;
  v5 = *a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  result = (*(__int64 (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 416))(v4);
  if ( (int)result < 0 )
    return WdLogSingleEntry0(1LL);
  return result;
}
