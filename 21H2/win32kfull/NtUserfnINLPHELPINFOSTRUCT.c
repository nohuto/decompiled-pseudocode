/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1C0201A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rbx
  __m128i v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v13 = *(__m128i *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_QWORD *)(a4 + 32);
  if ( _mm_cvtsi128_si32(v13) == 40 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __m128i *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v13,
             a5);
  v11 = 0LL;
  UserSetLastError(87LL, v10);
  return v11;
}
