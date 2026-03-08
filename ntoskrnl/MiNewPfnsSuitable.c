/*
 * XREFs of MiNewPfnsSuitable @ 0x140A29EF0
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x140A30264 (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNewPfnsSuitable(__int64 a1)
{
  unsigned int v1; // r9d
  int v2; // edx
  _QWORD *i; // rcx
  ULONG_PTR v4; // r8
  unsigned __int64 v5; // r10

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  for ( i = (_QWORD *)(a1 + 16); ; i += 2 )
  {
    v4 = *(i - 1);
    if ( v4 != 0x8000000000000000uLL )
    {
      v5 = v4 + *i;
      if ( v5 >= qword_140C67DE0 && v4 < qword_140C67DE0 + 2048 )
        break;
      if ( v5 > qword_140C65820 + 1 )
        break;
    }
    if ( ++v2 >= v1 )
      return 1LL;
  }
  return 0LL;
}
