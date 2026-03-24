/*
 * XREFs of ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00BB38C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CheckContiguousSysMem(struct _MDL *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r9
  bool v6; // zf

  if ( a3 >= a1->ByteCount >> 12 )
    return 0;
  v4 = (unsigned int)((a1->ByteCount >> 12) - a3);
  if ( (unsigned int)v4 > a2 )
    v4 = a2;
  v5 = a3 + v4;
  while ( (unsigned int)a3 < v5 )
  {
    if ( (a3 & 0xF) != 0 )
      v6 = *((_QWORD *)&a1[1].Next + (unsigned int)a3) == *((_QWORD *)&a1[1].Next + (unsigned int)(a3 - 1)) + 1LL;
    else
      v6 = (*(_BYTE *)(&a1[1].Next + (unsigned int)a3) & 0xF) == 0;
    if ( !v6 )
      return 0;
    LODWORD(a3) = a3 + 1;
  }
  return 1;
}
