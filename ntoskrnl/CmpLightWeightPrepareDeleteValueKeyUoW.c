/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpMarkValueDataDirty @ 0x1406BB14C (CmpMarkValueDataDirty.c)
 *     CmpRemoveValueFromList @ 0x1406BB75C (CmpRemoveValueFromList.c)
 *     CmpInitializeValueNameString @ 0x1407845C0 (CmpInitializeValueNameString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInList @ 0x1407A74D8 (CmpFindNameInList.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A25E14 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A27348 (CmpLightWeightUpdateSharedSetValueData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(__int64 a1)
{
  int *v1; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  int SetValueData; // ebx
  _DWORD *Pool; // rax
  _DWORD *v7; // rsi
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v10; // r15
  __int64 Pool2; // rax
  void *v12; // r13
  unsigned int v13; // r15d
  __int64 CellPaged; // rax
  __int64 v15; // r12
  unsigned int *v17; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *(int **)(a1 + 104);
  v20 = 0;
  LODWORD(BugCheckParameter4) = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v22 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  v17 = (unsigned int *)v1;
  v4 = *(_QWORD *)(v3 + 32);
  v18[0] = 0LL;
  if ( !v1 )
  {
    SetValueData = CmpLightWeightCreateSetValueData(a1, (int **)&v17);
    if ( SetValueData < 0 )
      return (unsigned int)SetValueData;
    v1 = (int *)v17;
    CmpLightWeightUpdateSharedSetValueData(v17, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (_DWORD *)CmpAllocatePool(256LL, 16LL, 2002079043LL);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  v8 = *(unsigned int *)(a1 + 88);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v8, &v22);
  else
    CellFlat = HvpGetCellPaged(v4, v8, (unsigned int *)&v22);
  v10 = CellFlat;
  if ( !CellFlat )
  {
    SetValueData = -1073741670;
LABEL_31:
    CmpFreeTransientPoolWithTag(v7, 0x77554D43u);
    return (unsigned int)SetValueData;
  }
  Pool2 = ExAllocatePool2(256LL, 0x8000LL, 1649626435LL);
  v12 = (void *)Pool2;
  if ( Pool2
    && (CmpInitializeValueNameString(v10, (__int64)v18, Pool2),
        v17 = (unsigned int *)(v1 + 1),
        CmpFindNameInList(v4, (__int64)(v1 + 1), (__int64)v18, 0LL, (__int64)&v20, (__int64)&BugCheckParameter4)) )
  {
    v13 = BugCheckParameter4;
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, (unsigned int)BugCheckParameter4, &v21);
    else
      CellPaged = HvpGetCellPaged(v4, BugCheckParameter4, (unsigned int *)&v21);
    v15 = CellPaged;
    SetValueData = CmpMarkValueDataDirty(v4, CellPaged);
    if ( SetValueData >= 0 )
    {
      SetValueData = HvpMarkCellDirty(v4, v13, 0);
      if ( SetValueData >= 0 )
      {
        SetValueData = CmpRemoveValueFromList(v4, v20, v17);
        if ( SetValueData >= 0 )
        {
          v7[1] = v13;
          SetValueData = 0;
          *(_QWORD *)(a1 + 112) = v7;
          v7 = 0LL;
        }
      }
    }
    if ( v15 )
    {
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v4, &v21);
      else
        HvpReleaseCellPaged(v4, (unsigned int *)&v21);
    }
  }
  else
  {
    SetValueData = -1073741670;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, &v22);
  else
    HvpReleaseCellPaged(v4, (unsigned int *)&v22);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v7 )
    goto LABEL_31;
  return (unsigned int)SetValueData;
}
