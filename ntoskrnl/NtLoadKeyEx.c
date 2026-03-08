/*
 * XREFs of NtLoadKeyEx @ 0x1406BD790
 * Callers:
 *     NtLoadKey @ 0x140861300 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKeyEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        __int64 a8)
{
  return CmLoadDifferencingKey(
           a1,
           a2,
           a3,
           a4,
           a5,
           DesiredAccess,
           a7,
           a8,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
