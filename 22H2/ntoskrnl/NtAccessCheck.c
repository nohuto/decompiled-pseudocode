/*
 * XREFs of NtAccessCheck @ 0x140346210
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 */

__int64 __fastcall NtAccessCheck(
        __int16 *a1,
        void *a2,
        unsigned int a3,
        _OWORD *a4,
        volatile void *a5,
        _DWORD *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  return SeAccessCheckByType(a1, 0LL, a2, a3, 0LL, 0, a4, a5, a6, a7, a8, 0);
}
