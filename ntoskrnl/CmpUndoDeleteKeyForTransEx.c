__int64 __fastcall CmpUndoDeleteKeyForTransEx(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  __int64 v4; // rcx
  __int64 *Pool2; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PrevElement; // r13
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r10d
  __int64 *v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // rdx
  __int64 CellFlat; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // rcx
  __int64 CellPaged; // rax
  __int64 v22; // r14
  int SecurityDescriptorNode; // ebx
  __int64 *v24; // r15
  _QWORD *UnitOfWork; // rax
  int *v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  ULONG_PTR *v31; // rdi
  __int64 v32; // r15
  __int64 v33; // rcx
  ULONG_PTR v34; // r15
  unsigned int v35; // r14d
  ULONG_PTR v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // edx
  ULONG_PTR v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rax
  ULONG_PTR v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  _DWORD v46[2]; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v47[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v49[2]; // [rsp+58h] [rbp-11h] BYREF
  int v50; // [rsp+60h] [rbp-9h]
  __int64 v51; // [rsp+68h] [rbp-1h]
  int *v52; // [rsp+70h] [rbp+7h]
  __int64 v53; // [rsp+78h] [rbp+Fh]
  __int64 v54; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+6Fh]
  void *Src; // [rsp+E0h] [rbp+77h]
  ULONG_PTR v57; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = a3;
  v55 = a2;
  v51 = 0LL;
  v48 = 0;
  v4 = *(_QWORD *)(BugCheckParameter3 + 72);
  v47[1] = 0;
  Pool2 = 0LL;
  v54 = 0LL;
  v49[1] = 0;
  v50 = -1;
  LODWORD(v57) = -1;
  v47[0] = -1;
  v49[0] = -1;
  PrevElement = CmListGetPrevElement(v4 + 208, &v54, a3, a2);
  if ( !PrevElement )
    return 3221225524LL;
  do
  {
    if ( *(_DWORD *)(PrevElement + 68) == 3 && *(_QWORD *)(PrevElement + 88) == BugCheckParameter3 )
      break;
    PrevElement = CmListGetPrevElement(v6, &v54, v7, v8);
  }
  while ( PrevElement );
  if ( !PrevElement )
    return 3221225524LL;
  v54 = 0LL;
  v10 = CmListGetPrevElement(BugCheckParameter3 + 208, &v54, v7, v8);
  v53 = v10;
  if ( !v10 || *(_DWORD *)(v10 + 68) != 2 )
    return 3221225524LL;
  v13 = (__int64 *)(BugCheckParameter3 + 32);
  if ( *(_QWORD *)(BugCheckParameter3 + 288) == v11 )
  {
    v14 = *(_DWORD *)(BugCheckParameter3 + 280);
    v15 = *(_DWORD *)(BugCheckParameter3 + 284);
    LODWORD(v54) = v14;
  }
  else
  {
    v16 = *v13;
    v17 = *(unsigned int *)(BugCheckParameter3 + 40);
    v46[0] = v12;
    v46[1] = 0;
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v16, v17);
    else
      CellFlat = HvpGetCellPaged(v16);
    if ( !CellFlat )
      return 3221225626LL;
    v19 = *v13;
    v14 = *(_DWORD *)(CellFlat + 36);
    v15 = *(_DWORD *)(CellFlat + 40);
    LODWORD(v54) = v14;
    if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v19, v46);
    else
      HvpReleaseCellPaged(v19, v46);
  }
  if ( !v14 )
    goto LABEL_45;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 8LL * v14, 926174531LL);
  if ( !Pool2 )
    return 3221225626LL;
  v20 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v20, v15);
  else
    CellPaged = HvpGetCellPaged(v20);
  v22 = CellPaged;
  if ( CellPaged )
  {
    v46[0] = 0;
    if ( (_DWORD)v54 )
    {
      v24 = Pool2;
      v52 = (int *)CellPaged;
      while ( 1 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        *v24 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
          break;
        CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
        SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)*v24, v55);
        if ( SecurityDescriptorNode < 0 )
          goto LABEL_34;
        if ( !(unsigned __int8)CmpLockIXLockIntent(BugCheckParameter3 + 248, *v24)
          || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, *v24, 1LL) )
        {
          SecurityDescriptorNode = -1072103423;
          goto LABEL_34;
        }
        v26 = v52;
        *(_DWORD *)(*v24 + 68) = 6;
        v27 = *v26;
        v28 = *v24++;
        v52 = v26 + 1;
        *(_DWORD *)(v28 + 88) = v27;
        if ( ++v46[0] >= (unsigned int)v54 )
          goto LABEL_31;
      }
      SecurityDescriptorNode = -1073741670;
LABEL_34:
      v30 = v54;
      goto LABEL_35;
    }
LABEL_31:
    v29 = *v13;
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v29, v47);
    else
      HvpReleaseCellPaged(v29, v47);
LABEL_45:
    v34 = CmpAllocateUnitOfWork();
    if ( !v34 )
    {
      SecurityDescriptorNode = -1073741670;
      v22 = 0LL;
      goto LABEL_71;
    }
    HvLockHiveFlusherShared(*v13);
    CmLockHiveSecurityExclusive(*v13);
    CmpTransEnlistUowInKcb((_QWORD *)v34, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v34, v55);
    if ( SecurityDescriptorNode < 0 )
    {
      v35 = v50;
    }
    else
    {
      if ( !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 248, v34, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(BugCheckParameter3 + 264, v34, 1LL) )
      {
        SecurityDescriptorNode = -1072103423;
LABEL_69:
        CmpRundownUnitOfWork(v34);
        ExFreePoolWithTag((PVOID)v34, 0x77554D43u);
        v22 = 0LL;
LABEL_70:
        CmUnlockHiveSecurity(*v13);
        HvUnlockHiveFlusherShared(*v13);
LABEL_71:
        if ( !Pool2 )
          goto LABEL_40;
        if ( SecurityDescriptorNode >= 0 )
          goto LABEL_39;
        goto LABEL_73;
      }
      *(_QWORD *)(v34 + 88) = 0LL;
      *(_DWORD *)(v34 + 68) = 9;
      v35 = -1;
      *(_DWORD *)(v34 + 96) = -1;
      *(_BYTE *)(v34 + 100) = 0;
      v36 = *v13;
      if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
        v37 = HvpGetCellFlat(v36, *(unsigned int *)(BugCheckParameter3 + 40));
      else
        v37 = HvpGetCellPaged(v36);
      v38 = *(_DWORD *)(BugCheckParameter3 + 40);
      v39 = *v13;
      v51 = v37;
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v39, v38, v37, 1u, Src, 1, (unsigned int *)&v57);
      if ( SecurityDescriptorNode < 0 )
      {
        v35 = v57;
      }
      else
      {
        if ( !CmpFindSecurityCellCacheIndex(*v13, v57, &v48) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v57);
        v40 = *(_DWORD **)(*(_QWORD *)(*v13 + 1888) + 16LL * v48 + 8);
        *(_QWORD *)(v34 + 88) = v40;
        *(_DWORD *)(v34 + 96) = *v40;
        v41 = v53;
        *(_BYTE *)(v34 + 100) = 1;
        v34 = 0LL;
        *(_DWORD *)(PrevElement + 68) = 13;
        *(_DWORD *)(v41 + 68) = 14;
        if ( *(_QWORD *)(BugCheckParameter3 + 288) )
        {
          v42 = *(unsigned int *)(BugCheckParameter3 + 284);
          if ( (_DWORD)v42 != -1 )
            HvFreeCell(*v13, v42);
        }
        v43 = v55;
        *(_DWORD *)(BugCheckParameter3 + 280) = 0;
        *(_DWORD *)(BugCheckParameter3 + 284) = -1;
        *(_QWORD *)(BugCheckParameter3 + 288) = v43;
      }
    }
    if ( v35 != -1 )
      CmpDereferenceSecurityNode(*v13, v35);
    if ( v51 )
    {
      v44 = *v13;
      if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v44, v49);
      else
        HvpReleaseCellPaged(v44, v49);
    }
    v22 = 0LL;
    if ( !v34 )
      goto LABEL_70;
    goto LABEL_69;
  }
  SecurityDescriptorNode = -1073741670;
LABEL_73:
  v30 = v54;
  if ( (_DWORD)v54 )
  {
LABEL_35:
    v31 = (ULONG_PTR *)Pool2;
    v32 = v30;
    do
    {
      if ( *v31 )
      {
        CmpRundownUnitOfWork(*v31);
        ExFreePoolWithTag((PVOID)*v31, 0x77554D43u);
      }
      ++v31;
      --v32;
    }
    while ( v32 );
  }
LABEL_39:
  ExFreePoolWithTag(Pool2, 0x37344D43u);
LABEL_40:
  if ( v22 )
  {
    v33 = *v13;
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v33, v47);
    else
      HvpReleaseCellPaged(v33, v47);
  }
  return (unsigned int)SecurityDescriptorNode;
}
