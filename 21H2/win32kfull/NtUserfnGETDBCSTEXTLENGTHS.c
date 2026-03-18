/*
 * XREFs of NtUserfnGETDBCSTEXTLENGTHS @ 0x1C010A7C0
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1C02031C0 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1C0203460 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a7,
           a5);
}
