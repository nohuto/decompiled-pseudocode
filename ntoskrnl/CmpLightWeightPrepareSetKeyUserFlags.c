/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x140A26AC4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0xFFFFFFFFLL;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_DWORD *)(v1 + 40);
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v2, v3, &v7);
  else
    CellFlat = HvpGetCellPaged(v2, v3, (unsigned int *)&v7);
  if ( CellFlat )
  {
    v5 = HvpMarkCellDirty(v2, v3, 0);
    if ( v5 >= 0 )
      v5 = 0;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, &v7);
    else
      HvpReleaseCellPaged(v2, (unsigned int *)&v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
