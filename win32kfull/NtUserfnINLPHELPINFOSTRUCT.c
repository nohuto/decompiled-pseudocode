/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1C01E2440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __m128i v12; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  PtiCurrentShared(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v12 = *(__m128i *)a4;
  v13 = *(_OWORD *)(a4 + 16);
  v14 = *(_QWORD *)(a4 + 32);
  if ( _mm_cvtsi128_si32(v12) == 40 )
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __m128i *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  v10 = 0LL;
  UserSetLastError(87);
  return v10;
}
