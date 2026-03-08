/*
 * XREFs of CmpMarkValueDataDirty @ 0x1406BB14C
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpMarkKeyDirty @ 0x1406BAB64 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyValuesDirty @ 0x140A1F3D8 (CmpMarkKeyValuesDirty.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR v3; // rdx
  unsigned int v5; // eax
  int v6; // esi
  bool v8; // zf
  __int64 v9; // r12
  __int64 CellPaged; // rax
  ULONG_PTR v11; // rdx
  __int64 v12; // r15
  __int64 CellFlat; // rax
  unsigned __int16 v14; // r14
  ULONG_PTR v15; // rdx
  int v16; // [rsp+68h] [rbp+48h] BYREF
  int v17; // [rsp+6Ch] [rbp+4Ch]
  int v18; // [rsp+70h] [rbp+50h] BYREF
  int v19; // [rsp+74h] [rbp+54h]

  v3 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v3 == -1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v5 - 16345 <= 0x7FFFC026 )
  {
    v18 = -1;
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v19 = 0;
    v9 = 0LL;
    v16 = -1;
    v17 = 0;
    if ( v8 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v3);
    v11 = *(unsigned int *)(CellPaged + 4);
    v12 = CellPaged;
    if ( (_DWORD)v11 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v11);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v9 = CellFlat;
      v14 = 0;
      if ( *(_WORD *)(v12 + 2) )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v9 + 4LL * v14);
          if ( (_DWORD)v15 != -1 )
          {
            v6 = HvpMarkCellDirty(BugCheckParameter3, v15);
            if ( v6 < 0 )
              break;
          }
          if ( ++v14 >= *(_WORD *)(v12 + 2) )
            goto LABEL_17;
        }
LABEL_19:
        if ( v9 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v16);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v16);
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v18);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v18);
        if ( v6 < 0 )
          return (unsigned int)v6;
        goto LABEL_5;
      }
LABEL_17:
      v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 4));
      if ( v6 < 0 )
        goto LABEL_19;
    }
    v6 = 0;
    goto LABEL_19;
  }
LABEL_5:
  v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a2 + 8));
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
