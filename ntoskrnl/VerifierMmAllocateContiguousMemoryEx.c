/*
 * XREFs of VerifierMmAllocateContiguousMemoryEx @ 0x140ADF550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierMmAllocateContiguousMemoryEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int))pXdvMmAllocateContiguousMemoryEx)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
