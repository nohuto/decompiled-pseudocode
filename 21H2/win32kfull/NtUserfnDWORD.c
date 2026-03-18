/*
 * XREFs of NtUserfnDWORD @ 0x1C00E6550
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C02037C0 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnDWORD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  PsGetThreadWin32Thread(KeGetCurrentThread());
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a4,
           a5);
}
