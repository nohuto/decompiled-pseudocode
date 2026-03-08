/*
 * XREFs of CmpSplitLeaf @ 0x140A21D7C
 * Callers:
 *     CmpSelectLeaf @ 0x140872120 (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSplitLeaf(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3, unsigned int a4, int *a5)
{
  __int64 v5; // r13
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 CellFlat; // rax
  __int64 v10; // rdi
  int v11; // r15d
  unsigned int v12; // r15d
  _WORD *CellPaged; // rax
  _WORD *v14; // r12
  int v15; // eax
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // r15d
  _WORD *v20; // rdx
  __int64 v21; // rsi
  int v22; // ecx
  unsigned __int16 v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch] BYREF
  int v26; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-24h]
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  __int64 v31; // [rsp+68h] [rbp-8h] BYREF
  unsigned __int16 v32; // [rsp+B0h] [rbp+40h]
  unsigned int BugCheckParameter4; // [rsp+B8h] [rbp+48h]

  BugCheckParameter4 = a2;
  v5 = a3;
  v26 = 0;
  v7 = 0LL;
  v28 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v8 = -1;
  v30 = 0xFFFFFFFFLL;
  v25 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v28);
  v10 = CellFlat;
  if ( *(_WORD *)(CellFlat + 2) == 0xFFFF )
  {
    v11 = -1073741670;
    goto LABEL_32;
  }
  v12 = *(_DWORD *)(CellFlat + 4 * v5 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v12, &v29);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v12, (unsigned int *)&v29);
  v14 = CellPaged;
  v32 = CellPaged[1] >> 1;
  v24 = CellPaged[1] - v32;
  v27 = ((*CellPaged - 26220) & 0xFDFF) != 0 ? 4 : 8;
  v11 = HvpMarkCellDirty(BugCheckParameter3, v12, 0);
  if ( v11 >= 0 )
  {
    v27 *= v24;
    v15 = HvAllocateCell(BugCheckParameter3, v27 + 5, a4, &v25, (__int64)&v31, (__int64)&v30);
    v7 = v31;
    v11 = v15;
    if ( v15 >= 0 )
    {
      *(_WORD *)v31 = *v14;
      v16 = *(_DWORD *)(v10 - 4);
      if ( ((-8 - 4 * *(unsigned __int16 *)(v10 + 2) - v16) & 0xFFFFFFFC) >= 4 )
      {
        v19 = BugCheckParameter4;
        goto LABEL_18;
      }
      v17 = -v16;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
      v31 = 0LL;
      v18 = HvReallocateCell(BugCheckParameter3, BugCheckParameter4, v17, 1, &v26, &v31, (__int64)&v28);
      v10 = v31;
      v11 = v18;
      if ( v18 >= 0 )
      {
        v19 = v26;
LABEL_18:
        if ( ((*v14 - 26220) & 0xFDFF) != 0 )
          v20 = &v14[2 * v32 + 2];
        else
          v20 = &v14[4 * v32 + 2];
        memmove((void *)(v7 + 4), v20, v27);
        v14[1] = v32;
        v21 = (unsigned int)(v5 + 1);
        *(_WORD *)(v7 + 2) = v24;
        v22 = *(unsigned __int16 *)(v10 + 2);
        if ( (unsigned int)v5 < v22 - 1 )
          memmove(
            (void *)(v10 + 4 * ((unsigned int)(v5 + 2) + 1LL)),
            (const void *)(v10 + 4 * ((unsigned int)v21 + 1LL)),
            4LL * (unsigned int)(v22 - v5 - 1));
        ++*(_WORD *)(v10 + 2);
        *(_DWORD *)(v10 + 4 * v21 + 4) = v25;
        v8 = -1;
        *a5 = v19;
        v11 = 0;
        goto LABEL_25;
      }
    }
    v8 = v25;
  }
LABEL_25:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v30);
  }
LABEL_32:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
  }
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)v11;
}
