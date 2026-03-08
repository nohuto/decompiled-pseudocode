/*
 * XREFs of NtCreateToken @ 0x1409CC260
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 */

__int64 __fastcall NtCreateToken(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        void *a7,
        int *a8,
        __int64 a9,
        __int64 a10,
        void **a11,
        char **a12,
        __int64 a13)
{
  return NtCreateTokenEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0LL, 0LL, a10, a11, a12, a13);
}
