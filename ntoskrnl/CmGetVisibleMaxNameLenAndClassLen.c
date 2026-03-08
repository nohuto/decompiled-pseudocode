/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1407ABF48
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1407ABC40 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1407AD510 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmGetVisibleMaxNameLenAndClassLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v7; // rbx
  __int64 v9; // r14
  __int64 NextElement; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  ULONG_PTR v13; // rcx
  __int64 CellFlat; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v19) = -1;
  v20 = 0LL;
  v7 = a5;
  *a4 = 0;
  HIDWORD(v19) = 0;
  if ( v7 )
    *v7 = 0;
  if ( a2 )
  {
    *a4 = (unsigned __int16)*(_DWORD *)(a2 + 52);
    if ( v7 )
      *v7 = *(_DWORD *)(a2 + 56);
  }
  if ( a1 )
  {
    *a4 = *(unsigned __int16 *)(a1 + 176);
    if ( a3 )
    {
      v9 = a1 + 208;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v9, &v20, 32LL);
        v11 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
        {
          if ( *(_DWORD *)(v11 + 68) == 1 )
          {
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CmpIsKeyDeleted(v12) )
            {
              v13 = *(_QWORD *)(v12 + 32);
              if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v13, *(unsigned int *)(v12 + 40));
              else
                CellFlat = HvpGetCellPaged(v13);
              v15 = CellFlat;
              if ( !CellFlat )
                return 3221225626LL;
              v16 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
              if ( *a4 < v16 )
                *a4 = v16;
              if ( v7 )
              {
                v17 = *(_DWORD *)(v15 + 56);
                if ( *v7 < v17 )
                  *v7 = v17;
              }
              v18 = *(_QWORD *)(v12 + 32);
              if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v18, &v19);
              else
                HvpReleaseCellPaged(v18, &v19);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
