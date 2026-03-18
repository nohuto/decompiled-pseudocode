/*
 * XREFs of NtUserfnINSTRING @ 0x1C0202E80
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01F13B4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00E8A3C (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRING(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 == 325 || a2 == 397 )
    a3 &= ~0x2000uLL;
  if ( a7 )
  {
    RtlInitLargeAnsiString((__int64)&v12, a4);
  }
  else
  {
    if ( a4 && (a4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlInitLargeUnicodeString((__int64)&v12, a4);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v12,
           a5);
}
