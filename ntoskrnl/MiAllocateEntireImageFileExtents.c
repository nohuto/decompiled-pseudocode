/*
 * XREFs of MiAllocateEntireImageFileExtents @ 0x140A30264
 * Callers:
 *     MiEnableImageDirectMap @ 0x14063A850 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     MiInsertCopyExtents @ 0x14063BA1C (MiInsertCopyExtents.c)
 *     MiNewPfnsSuitable @ 0x140A29EF0 (MiNewPfnsSuitable.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEntireImageFileExtents(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned int **a4)
{
  struct _FILE_OBJECT *v7; // rbx
  int v8; // r15d
  unsigned int i; // edi
  _DWORD *Pool; // rax
  _DWORD *v11; // rsi
  int FileExtents; // ebx
  unsigned int v14; // ebp
  unsigned int *inserted; // rax

  *a4 = 0LL;
  v7 = a1;
  v8 = 1;
  for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v14 )
  {
    while ( 1 )
    {
      if ( !i )
        return 3221225626LL;
      Pool = MiAllocatePool(64, 16LL * (i - 1) + 24, 0x3546694Du);
      v11 = Pool;
      if ( Pool )
        break;
      if ( !v8 )
        return 3221225626LL;
      i >>= 1;
    }
    Pool[1] = 0;
    v8 = 0;
    *Pool = i;
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    FileExtents = FsRtlGetFileExtents(v7, 1, 0LL, a2, Pool);
    if ( FileExtents < 0 )
      break;
    v14 = v11[1];
    if ( v14 <= i )
    {
      if ( (unsigned int)MiNewPfnsSuitable((__int64)v11) )
      {
        if ( v14 )
        {
          inserted = MiInsertCopyExtents((__int64)v11, a3, 0);
          if ( inserted )
            *a4 = inserted;
          else
            FileExtents = -1073741670;
        }
        else
        {
          FileExtents = -1073741823;
        }
      }
      else
      {
        FileExtents = -1073740761;
      }
      break;
    }
    v11[1] = i;
    ExFreePoolWithTag(v11, 0);
    v7 = a1;
  }
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)FileExtents;
}
