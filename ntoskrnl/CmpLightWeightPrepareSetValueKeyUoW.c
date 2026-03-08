/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1402FCC08 (CmpSwapValueInList.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x1406BB14C (CmpMarkValueDataDirty.c)
 *     CmpInitializeValueNameString @ 0x1407845C0 (CmpInitializeValueNameString.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x1407A5F18 (CmpAddValueKeyNew.c)
 *     CmpFindNameInList @ 0x1407A74D8 (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A25E14 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A27348 (CmpLightWeightUpdateSharedSetValueData.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  int *v1; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  int v5; // ebx
  unsigned int *Pool; // rax
  unsigned int *v7; // r15
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r12d
  void *v13; // rax
  ULONG_PTR v14; // rdx
  __int64 CellPaged; // rax
  void *Pool2; // rax
  __int64 v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // esi
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // eax
  size_t v26; // [rsp+20h] [rbp-69h]
  unsigned int *v27; // [rsp+20h] [rbp-69h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-49h] BYREF
  int *v29; // [rsp+48h] [rbp-41h] BYREF
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31; // [rsp+58h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-29h] BYREF
  __int64 v33; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h] BYREF
  PVOID v35; // [rsp+78h] [rbp-11h]
  __int64 v36; // [rsp+80h] [rbp-9h] BYREF
  __int128 v37; // [rsp+88h] [rbp-1h] BYREF
  __int64 v38; // [rsp+98h] [rbp+Fh]
  char v39; // [rsp+F0h] [rbp+67h]
  __int64 v40; // [rsp+F8h] [rbp+6Fh] BYREF
  int v41; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v42; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(int **)(a1 + 104);
  v42 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v32 = 0xFFFFFFFFLL;
  v31 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v30 = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(v3 + 32);
  LODWORD(BugCheckParameter4) = 0;
  v35 = 0LL;
  v33 = 0LL;
  v39 = 0;
  v41 = -1;
  LOBYTE(v40) = 0;
  v38 = 0LL;
  v29 = v1;
  v37 = 0LL;
  if ( !v1 )
  {
    v5 = CmpLightWeightCreateSetValueData(a1, &v29);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v1 = v29;
    CmpLightWeightUpdateSharedSetValueData(v29, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (unsigned int *)CmpAllocatePool(256LL, 16LL, 2002079043LL);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  v8 = *(unsigned int *)(a1 + 92);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v8, &v32);
  else
    CellFlat = HvpGetCellPaged(v4, v8, (unsigned int *)&v32);
  v10 = CellFlat;
  if ( !CellFlat )
  {
    v5 = -1073741670;
LABEL_65:
    CmpFreeTransientPoolWithTag(v7, 0x77554D43u);
    return (unsigned int)v5;
  }
  v11 = *(_DWORD *)(CellFlat + 4);
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = v11;
  LODWORD(v29) = v12;
  LODWORD(P) = v12;
  if ( v12 )
  {
    if ( v11 < 0x80000000 )
    {
      if ( !CmpGetValueData(v4, *(unsigned int *)(a1 + 92), v10, (unsigned int *)&P, (__int64)&v33, (__int64)&v40) )
      {
        v5 = -1073741670;
        goto LABEL_61;
      }
      v12 = (unsigned int)P;
      v13 = (void *)v33;
      LODWORD(v29) = (_DWORD)P;
      v39 = 1;
    }
    else
    {
      v13 = (void *)(v10 + 8);
    }
    v35 = v13;
  }
  v5 = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0);
  if ( v5 >= 0 )
  {
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL);
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, v14, &v31);
    else
      CellPaged = HvpGetCellPaged(v4, v14, (unsigned int *)&v31);
    v33 = CellPaged;
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    Pool2 = (void *)ExAllocatePool2(256LL, 0x8000LL, 1649626435LL);
    P = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_40;
    }
    CmpInitializeValueNameString(v10, (__int64)&v37, (__int64)Pool2);
    v17 = (__int64)(v1 + 1);
    if ( !CmpFindNameInList(v4, v17, (__int64)&v37, 0LL, (__int64)&v42, (__int64)&BugCheckParameter4) )
    {
      v5 = -1073741670;
LABEL_39:
      ExFreePoolWithTag(P, 0);
LABEL_40:
      if ( v33 )
      {
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, &v31);
        else
          HvpReleaseCellPaged(v4, (unsigned int *)&v31);
      }
      goto LABEL_54;
    }
    LODWORD(v26) = v12;
    v5 = CmpAddValueKeyNew(v4, (unsigned __int16 *)&v37, *(_DWORD *)(v10 + 12), v35, v26, *(_DWORD *)(a1 + 72), &v41);
    if ( v5 < 0 )
      goto LABEL_36;
    v18 = BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 == -1 )
    {
      v27 = (unsigned int *)v17;
      v21 = v41;
      v23 = CmpAddValueToListEx(v4, v41, v42, *(_DWORD *)(a1 + 72), v27, 1);
      v20 = v38;
    }
    else
    {
      v5 = HvpMarkCellDirty(v4, (unsigned int)BugCheckParameter4, 0);
      if ( v5 < 0 )
      {
LABEL_36:
        v21 = v41;
        goto LABEL_37;
      }
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        v19 = HvpGetCellFlat(v4, v18, &v30);
      else
        v19 = HvpGetCellPaged(v4, v18, (unsigned int *)&v30);
      v20 = v19;
      if ( !v19 )
      {
        v5 = -1073741670;
        goto LABEL_36;
      }
      v5 = CmpMarkValueDataDirty(v4, v19);
      if ( v5 < 0 )
      {
        v21 = v41;
LABEL_50:
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, &v30);
        else
          HvpReleaseCellPaged(v4, (unsigned int *)&v30);
LABEL_37:
        if ( v21 != -1 )
          CmpFreeValue(v4, v21);
        goto LABEL_39;
      }
      v22 = v17;
      v21 = v41;
      v23 = CmpSwapValueInList(v4, v41, v42, v22);
    }
    v5 = v23;
    if ( v23 >= 0 )
    {
      v5 = 0;
      *((_WORD *)v7 + 4) = v37;
      v24 = (unsigned int)v29;
      *v7 = v21;
      v7[3] = v24;
      v7[1] = v18;
      *(_QWORD *)(a1 + 112) = v7;
      v7 = 0LL;
      v21 = -1;
    }
    if ( !v20 )
      goto LABEL_37;
    goto LABEL_50;
  }
LABEL_54:
  if ( v39 && v35 )
  {
    if ( (_BYTE)v40 )
    {
      ExFreePoolWithTag(v35, 0);
    }
    else if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v4, &v36);
    }
    else
    {
      HvpReleaseCellPaged(v4, (unsigned int *)&v36);
    }
  }
LABEL_61:
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, &v32);
  else
    HvpReleaseCellPaged(v4, (unsigned int *)&v32);
  if ( v7 )
    goto LABEL_65;
  return (unsigned int)v5;
}
