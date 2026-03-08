/*
 * XREFs of GetMonitorCapability @ 0x1C0190204
 * Callers:
 *     PruneModesByDisplayDeviceCaps @ 0x1C0190E0C (PruneModesByDisplayDeviceCaps.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     GetMonitorCapability1 @ 0x1C018FD28 (GetMonitorCapability1.c)
 *     GetMonitorCapabilityFromInf @ 0x1C01902C4 (GetMonitorCapabilityFromInf.c)
 *     GetRegEDID @ 0x1C019065C (GetRegEDID.c)
 */

__int64 __fastcall GetMonitorCapability(__int64 a1, __int64 a2, int *a3, char a4)
{
  int *v5; // rbx
  __int64 result; // rax
  _BYTE *v9; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v10[512]; // [rsp+30h] [rbp-238h] BYREF

  v9 = 0LL;
  v5 = a3;
  a3[2] = 0;
  a3[4] = 0;
  a3[1] = -1;
  a3[3] = -1;
  *a3 = a4 == 0 ? 0x38 : 0;
  a3[5] = -1;
  LOBYTE(a3) = a4;
  result = GetMonitorCapabilityFromInf(a1, a2, a3);
  if ( (_DWORD)result )
  {
    *v5 = *(_DWORD *)(a2 + 12);
    v5[1] = *(_DWORD *)(a2 + 8);
  }
  else
  {
    result = GetRegEDID(a1, v10, &v9);
    if ( (_DWORD)result )
      return GetMonitorCapability1(v9, a2, v5, a4);
  }
  return result;
}
