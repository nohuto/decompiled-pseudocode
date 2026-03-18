/*
 * XREFs of CmGetVisibleMaxNameLenAndClassLen @ 0x1406D5368
 * Callers:
 *     CmpQueryKeyDataFromCache @ 0x1406D5060 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAB00 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x1407696D0 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x1407CB78C (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmListGetNextElement @ 0x140AF66A8 (CmListGetNextElement.c)
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
  __int64 v13; // rdi
  ULONG_PTR v14; // rcx
  __int64 CellFlat; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // [rsp+48h] [rbp+10h] BYREF
  int v21; // [rsp+4Ch] [rbp+14h]
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v20 = -1;
  v22 = 0LL;
  v7 = a5;
  *a4 = 0;
  v21 = 0;
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
        NextElement = CmListGetNextElement(v9, &v22, 32LL);
        v11 = NextElement;
        if ( !NextElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a3) )
        {
          if ( *(_DWORD *)(v11 + 68) == 1 )
          {
            v13 = *(_QWORD *)(v11 + 88);
            if ( !(unsigned __int8)CmpIsKeyDeleted(v13, 0LL) )
            {
              v14 = *(_QWORD *)(v13 + 32);
              if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v14, *(unsigned int *)(v13 + 40));
              else
                CellFlat = HvpGetCellPaged(v14);
              v16 = CellFlat;
              if ( !CellFlat )
                return 3221225626LL;
              v17 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
              if ( *a4 < v17 )
                *a4 = v17;
              if ( v7 )
              {
                v18 = *(_DWORD *)(v16 + 56);
                if ( *v7 < v18 )
                  *v7 = v18;
              }
              v19 = *(_QWORD *)(v13 + 32);
              if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v19, &v20);
              else
                HvpReleaseCellPaged(v19, &v20);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
