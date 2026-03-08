/*
 * XREFs of SetMinMetrics @ 0x1C010CA78
 * Callers:
 *     UserOnGreTextReady @ 0x1C00B8554 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00C1348 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00F0EF0 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C010CE38 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(struct _UNICODE_STRING *a1, __int128 *a2)
{
  __int128 *v2; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v9 = 0;
  v2 = a2;
  v8 = 0LL;
  if ( !a2 )
  {
    DWORD1(v8) = GetTWIPSMetricById(a1, 0x92u, -2310);
    DWORD2(v8) = GetTWIPSMetricById(a1, 0x93u, 0);
    HIDWORD(v8) = GetTWIPSMetricById(a1, 0x94u, 0);
    FastGetProfileIntFromID(a1, 23LL, 150LL);
    v2 = &v8;
    v9 = 0;
  }
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  if ( v4 <= 0 )
    v4 = 0;
  *((_DWORD *)v2 + 1) = v4;
  if ( v5 <= 0 )
    v5 = 0;
  *((_DWORD *)v2 + 2) = v5;
  v6 = *((_DWORD *)v2 + 3);
  if ( v6 <= 0 )
    v6 = 0;
  *((_DWORD *)v2 + 4) &= 0xFu;
  *((_DWORD *)v2 + 3) = v6;
  *(_DWORD *)(gpsi + 2124LL) = v4 + 6;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  *(_DWORD *)(gpsi + 2084LL) = *((_DWORD *)v2 + 2) + *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(gpsi + 2088LL) = *((_DWORD *)v2 + 3) + *(_DWORD *)(gpsi + 2128LL);
  result = *((unsigned int *)v2 + 4);
  *(_DWORD *)(gpsi + 2120LL) = result;
  return result;
}
