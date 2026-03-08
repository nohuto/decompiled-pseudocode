/*
 * XREFs of VerifierZwQueryDirectoryFileEx @ 0x140AE31A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierZwQueryDirectoryFileEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, int, int, int, __int64))pXdvZwQueryDirectoryFileEx)(
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
