/*
 * XREFs of VerifierMmProtectMdlSystemAddress @ 0x1409E6FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x1409C7CBC (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmProtectMdlSystemAddress(__int64 a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPageProtection(a2, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmProtectMdlSystemAddress)(a1, a2);
}
