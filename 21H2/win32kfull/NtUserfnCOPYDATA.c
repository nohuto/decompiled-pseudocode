/*
 * XREFs of NtUserfnCOPYDATA @ 0x1C010B3F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  ULONG64 v9; // r10
  __int64 v10; // r9
  SIZE_T Length[2]; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-10h]

  *(_OWORD *)Length = 0LL;
  Address = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9 = a4;
  v10 = 0LL;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)Length = *(_OWORD *)v9;
    Address = *(volatile void **)(v9 + 16);
    if ( Address )
      ProbeForRead(Address, LODWORD(Length[1]), 1u);
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, SIZE_T *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             Length,
             a5);
  }
  return v10;
}
