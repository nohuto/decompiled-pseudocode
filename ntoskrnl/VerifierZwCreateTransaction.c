/*
 * XREFs of VerifierZwCreateTransaction @ 0x140AE2790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierZwCreateTransaction(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int, int, __int64, __int64))pXdvZwCreateTransaction)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
