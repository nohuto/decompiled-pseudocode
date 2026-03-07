__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, unsigned int a5, __int64 a6)
{
  __int16 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  struct _PRIVILEGE_SET *v13; // rsi
  int v14; // ebx
  __int64 Control_high; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _PRIVILEGE_SET *v19; // r12
  int KeyValueData; // ebx
  __int64 v21; // r14
  __int64 v22; // r10
  __int64 v23; // r10
  __int16 v24; // di
  char *v25; // rbx
  __int64 v26; // rsi
  char *v27; // rcx
  __int64 v28; // rbx
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // si
  PPRIVILEGE_SET v31; // rdi
  char v32; // al
  __int64 v33; // rax
  int NameInListFromIndex; // eax
  ULONG_PTR v35; // r13
  unsigned int v36; // ebx
  __int64 CellFlat; // rax
  __int64 v38; // rsi
  char *v39; // rdi
  char *v40; // rcx
  int Size; // [rsp+28h] [rbp-A9h]
  PPRIVILEGE_SET Pool; // [rsp+48h] [rbp-89h]
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp-81h] BYREF
  __int64 v45; // [rsp+58h] [rbp-79h] BYREF
  __int128 v46; // [rsp+60h] [rbp-71h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-61h]
  int v48; // [rsp+80h] [rbp-51h]
  __int64 v49; // [rsp+88h] [rbp-49h] BYREF
  __int64 v50; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int16 *v51; // [rsp+98h] [rbp-39h]
  __int64 v52; // [rsp+A0h] [rbp-31h]
  size_t v53; // [rsp+A8h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-21h] BYREF

  v7 = 0;
  v52 = a6;
  v45 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  BugCheckParameter4 = 0xFFFFFFFF00000000uLL;
  v49 = 0LL;
  WORD1(v46) = -1;
  v53 = a4;
  v48 = a3;
  v51 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(&v45);
  HvpGetCellContextReinitialize(&v50);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v9, v8, v10, v11);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  Pool = 0LL;
  v14 = *(__int16 *)(v12 + 66);
  if ( v14 >= 2 )
  {
    Pool = (PPRIVILEGE_SET)CmpAllocatePool(256LL, 8LL * (unsigned int)(v14 - 1), 892751171LL);
    v13 = Pool;
    if ( !Pool )
    {
      v19 = Privileges[1];
      KeyValueData = -1073741670;
      goto LABEL_67;
    }
  }
  LOWORD(v46) = v14;
  Privileges[1] = v13;
  v21 = *(__int16 *)(v12 + 66);
  WORD1(v46) = v21;
  if ( (_WORD)v21 )
  {
    v22 = *(_QWORD *)(v12 + 192);
    if ( !v22 )
      goto LABEL_9;
    do
    {
      CmpSetKcbAtLayerHeight((__int64)&v46, v21, *(_QWORD *)(v22 + 16));
      v22 = *(_QWORD *)(v23 + 24);
      LOWORD(v21) = v21 - 1;
    }
    while ( v22 );
  }
  else
  {
    Privileges[v21 - 1] = (PPRIVILEGE_SET)v12;
  }
  v13 = Privileges[1];
  LOWORD(v21) = WORD1(v46);
  Pool = Privileges[1];
LABEL_9:
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbStackShared((__int64)&v46);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
LABEL_12:
      KeyValueData = -1073740763;
      v19 = Pool;
      if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
        KeyValueData = -1073741444;
      goto LABEL_60;
    }
    CmpUnlockKcbStack((__int64)&v46);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v49);
    if ( KeyValueData < 0 )
    {
      v19 = Pool;
      goto LABEL_67;
    }
  }
  v24 = 0;
  if ( (v21 & 0x8000u) == 0LL )
  {
    v25 = (char *)&v46 + 8;
    v26 = (char *)v13 - ((char *)&v46 + 8) - 16;
    do
    {
      v27 = &v25[v26];
      if ( v24 < 2 )
        v27 = v25;
      CmpLockKcbShared(*(_QWORD *)v27);
      ++v24;
      v25 += 8;
    }
    while ( v24 <= (__int16)v21 );
  }
  v28 = v49;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v49) )
    goto LABEL_12;
  v29 = *(_WORD *)(v12 + 66);
  v19 = Pool;
  if ( (v29 & 0x8000u) != 0 )
  {
LABEL_59:
    KeyValueData = -1073741772;
    goto LABEL_60;
  }
  v17 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v30 = v29;
    v31 = v29 < 2u ? Privileges[v29 - 1] : (PPRIVILEGE_SET)*((_QWORD *)Pool + v29 - 2);
    Control_high = (unsigned int)SHIWORD(v31[3].Control);
    if ( (_DWORD)Control_high == *(unsigned __int16 *)(a1 + 4) )
    {
      v32 = BYTE1(v31[3].Control);
      if ( !v32 )
        goto LABEL_33;
    }
    else
    {
      if ( !HIWORD(v31[3].Control) )
        goto LABEL_33;
      v32 = BYTE1(v31[3].Control);
    }
    if ( v32 == 1 )
      goto LABEL_44;
LABEL_33:
    if ( v31[2].PrivilegeCount == -1 )
      goto LABEL_43;
    if ( !v28 || (v33 = 280LL, *(_QWORD *)&v31[14].Privilege[0].Luid != v28) )
      v33 = 96LL;
    NameInListFromIndex = CmpFindNameInListFromIndex(
                            *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart,
                            (unsigned int *)((char *)&v31->PrivilegeCount + v33),
                            v51,
                            *(_DWORD *)(a1 + 100),
                            Size,
                            (unsigned int *)&BugCheckParameter4,
                            (_DWORD *)&BugCheckParameter4 + 1);
    KeyValueData = NameInListFromIndex;
    if ( NameInListFromIndex >= 0 )
      break;
    if ( NameInListFromIndex != -1073741772 )
      goto LABEL_60;
    Control_high = (unsigned int)SHIWORD(v31[3].Control);
    if ( (_DWORD)Control_high == *(unsigned __int16 *)(a1 + 4) || HIWORD(v31[3].Control) && BYTE1(v31[3].Control) )
    {
LABEL_44:
      v35 = 0LL;
      goto LABEL_45;
    }
    v28 = v49;
    v17 = 0xFFFFFFFFLL;
LABEL_43:
    v29 = v30 - 1;
    if ( (__int16)(v30 - 1) < 0 )
      goto LABEL_44;
  }
  *(_DWORD *)(a1 + 100) = BugCheckParameter4;
  v35 = *(_QWORD *)&v31[1].Privilege[0].Luid.HighPart;
LABEL_45:
  v36 = HIDWORD(BugCheckParameter4);
  if ( HIDWORD(BugCheckParameter4) == -1 )
    goto LABEL_59;
  if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v35, HIDWORD(BugCheckParameter4));
  else
    CellFlat = HvpGetCellPaged(v35, HIDWORD(BugCheckParameter4), (unsigned int *)&v45);
  v38 = CellFlat;
  if ( (*(_DWORD *)(v35 + 160) & 0x80000) != 0 && (*(_BYTE *)(CellFlat + 16) & 2) != 0 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    KeyValueData = CmpQueryKeyValueData((__int64)v31, v36, CellFlat, v48, (_DWORD *)v53, a5, (unsigned int *)v52);
    if ( KeyValueData >= 0 )
      KeyValueData = 0;
  }
  if ( v38 )
  {
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v35, &v45);
    else
      HvpReleaseCellPaged(v35, (unsigned int *)&v45);
  }
LABEL_60:
  if ( (v21 & 0x8000u) == 0LL )
  {
    v39 = (char *)&v46 + 8;
    do
    {
      v40 = &v39[(char *)v19 - ((char *)&v46 + 8) - 16];
      if ( v7 < 2 )
        v40 = v39;
      CmpUnlockKcb(*(_QWORD *)v40);
      ++v7;
      v39 += 8;
    }
    while ( v7 <= (__int16)v21 );
  }
LABEL_67:
  CmpUnlockRegistry(v16, Control_high, v17, v18);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( v19 )
    CmSiFreeMemory(v19);
  return (unsigned int)KeyValueData;
}
