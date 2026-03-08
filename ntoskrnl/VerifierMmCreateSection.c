/*
 * XREFs of VerifierMmCreateSection @ 0x140ADFDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfCheckPageProtection @ 0x140AC0848 (VfCheckPageProtection.c)
 */

__int64 __fastcall VerifierMmCreateSection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, unsigned int, int, __int64, __int64))pXdvMmCreateSection)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
