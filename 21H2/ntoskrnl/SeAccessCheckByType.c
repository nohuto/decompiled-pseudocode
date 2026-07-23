/*
 * XREFs of SeAccessCheckByType @ 0x14026BF00
 * Callers:
 *     NtAccessCheckByType @ 0x140237560 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x14026C780 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x140595F50 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int16 *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        _DWORD *a8,
        unsigned int *a9,
        unsigned int *a10,
        int *a11,
        char a12)
{
  unsigned int v13; // edx
  unsigned int *v14; // rax

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = (unsigned int *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v14 = a9;
    v13 = *v14;
  }
  else
  {
    v13 = *a9;
  }
  return SeAccessCheckByTypeWithAdminlessChecks(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           v13,
           (unsigned __int64)a9,
           a10,
           a11,
           a12,
           0);
}
