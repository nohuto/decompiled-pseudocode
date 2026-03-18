/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1402E8FBC
 * Callers:
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x140338DB0 (MiFreePageToSlabAllocator.c)
 *     MiFreeSlabEntry @ 0x1403B8070 (MiFreeSlabEntry.c)
 *     MiDemoteSlabEntry @ 0x1403CCD8C (MiDemoteSlabEntry.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     VslSetPlaceholderPages @ 0x14045F068 (VslSetPlaceholderPages.c)
 */

__int64 __fastcall MiUpdateSlabPagePlaceholderState(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ebx

  result = *(unsigned int *)(a1 + 80);
  if ( (unsigned int)result <= 3 && (_DWORD)result != 2 )
  {
    if ( a4 )
    {
      if ( a3 == 1 )
      {
        v8 = 48 * a2 - 0x220000000000LL;
        MiSetPfnIdentity(v8, 3);
        MiAbortCombineScan(v8);
      }
      result = *(unsigned int *)(a1 + 80);
      v9 = 0;
      if ( (unsigned int)result > 3 )
        result = (unsigned int)(result - 4);
      v10 = *((_DWORD *)MiSlabTypeToMmSlabType + result);
    }
    else
    {
      if ( a3 == 1 )
        MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0);
      result = *(unsigned int *)(a1 + 80);
      if ( (unsigned int)result > 3 )
        result = (unsigned int)(result - 4);
      v10 = 0;
      v9 = *((_DWORD *)MiSlabTypeToMmSlabType + result);
    }
    if ( (MiFlags & 0x4000) != 0 )
    {
      result = VslSetPlaceholderPages(a2, a3, v9, v10);
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v9, (int)v10);
    }
  }
  return result;
}
