/*
 * XREFs of CmpSetValueKeyExisting @ 0x1406BAE08
 * Callers:
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpFreeValueData @ 0x1406BAAE0 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1406BB14C (CmpMarkValueDataDirty.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpSetValueDataExisting @ 0x140796AA4 (CmpSetValueDataExisting.c)
 *     CmpSetValueDataNew @ 0x1407A4E40 (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int16 v12; // r12
  __int16 v13; // r15
  unsigned int v14; // esi
  __int64 CellFlat; // rax
  void *v16; // rcx
  int v17; // r15d
  _DWORD *v18; // rsi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v21 = 0xFFFFFFFFLL;
  v22[0] = 0LL;
  LODWORD(v20) = 0;
  result = HvpMarkCellDirty(BugCheckParameter3, a2);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    v11 = v10 + 0x80000000;
    if ( v10 >= 0x80000000 )
    {
      v12 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v10 - 16345 <= 0x7FFFC026 )
        v12 = 2;
      else
        v12 = 1;
    }
    if ( (unsigned int)Size <= 4 )
      v13 = 0;
    else
      v13 = *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 ? 2 : 1;
    result = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      if ( v13 )
      {
        v14 = *(_DWORD *)(a3 + 8);
        if ( v13 != 1 )
        {
          if ( v12 == 2 )
          {
            LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
            result = CmpSetValueDataExisting(BugCheckParameter3, Src, BugCheckParameter4);
            if ( (int)result < 0 )
              return result;
          }
          else
          {
            result = CmpSetValueDataNew(BugCheckParameter3, Src, (unsigned int)Size, (__int64)&v20);
            if ( (int)result < 0 )
              return result;
            if ( v12 && v11 )
              HvFreeCell(BugCheckParameter3, *(unsigned int *)(a3 + 8));
            v14 = v20;
          }
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 4) = Size;
          *(_DWORD *)(a3 + 8) = v14;
          return 0LL;
        }
        if ( v12 == 1 && v11 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v14);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3);
          v16 = (void *)CellFlat;
          if ( !CellFlat )
            return 3221225626LL;
          if ( (unsigned int)Size <= -4 - *(_DWORD *)(CellFlat - 4) )
          {
            v17 = v14;
LABEL_20:
            memmove(v16, Src, (unsigned int)Size);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v21);
            else
              HvpReleaseCellPaged(BugCheckParameter3, &v21);
            *(_DWORD *)(a3 + 12) = a4;
            *(_WORD *)(a3 + 16) &= ~2u;
            *(_DWORD *)(a3 + 8) = v17;
            *(_DWORD *)(a3 + 4) = Size;
            if ( v12 == 2 )
              CmpFreeValueData(BugCheckParameter3, v14, v11);
            return 0LL;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v21);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v21);
          v22[0] = 0LL;
          result = HvReallocateCell(BugCheckParameter3, v14, (__int64)&v20, (__int64)v22, (__int64)&v21);
          if ( (int)result >= 0 )
          {
            v17 = v20;
            *(_DWORD *)(a3 + 8) = v20;
LABEL_36:
            v16 = (void *)v22[0];
            goto LABEL_20;
          }
        }
        else
        {
          result = HvAllocateCell(BugCheckParameter3, Size, a7, (unsigned int)&v20, (__int64)v22, (__int64)&v21);
          if ( (int)result >= 0 )
          {
            v17 = v20;
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( v12 == 1 && v11 || v12 == 2 )
        {
          v18 = (_DWORD *)(a3 + 8);
          CmpFreeValueData(BugCheckParameter3, *(unsigned int *)(a3 + 8), v11);
        }
        else
        {
          v18 = (_DWORD *)(a3 + 8);
        }
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        *v18 = 0;
        memmove(v18, Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
    }
  }
  return result;
}
