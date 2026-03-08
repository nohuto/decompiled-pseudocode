/*
 * XREFs of ComputeFlushPeriod @ 0x1C00BE4C4
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C00BE1D4 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     FinishHash @ 0x1C0018978 (FinishHash.c)
 *     RunningHash @ 0x1C0019664 (RunningHash.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeFlushPeriod(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 344);
  v3 = 0;
  v4 = a1 >> 4;
  v5 = *(_OWORD *)(*(_QWORD *)(v1 + 8) - 16LL);
  RunningHash(&v3, (__int64)&v5, 0x10uLL);
  RunningHash(&v3, (__int64)&v4, 8uLL);
  FinishHash(&v3);
  return v3 % 0xEA60 + 60000;
}
