/*
 * XREFs of NtUserfnDWORDOPTINLPMSG @ 0x1C014D590
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnDWORDOPTINLPMSG(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
}
