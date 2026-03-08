/*
 * XREFs of DrvOcclusionStateChangeNotify @ 0x1C0020148
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvOcclusionStateChangeNotify(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4[1] = retaddr;
  v4[0] = 1LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  result = (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 416))(v4);
  if ( (int)result < 0 )
    return WdLogSingleEntry0(1LL);
  return result;
}
