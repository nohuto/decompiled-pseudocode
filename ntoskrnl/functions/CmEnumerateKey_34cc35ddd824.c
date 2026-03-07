__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v7; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // r12
  int SubKeyByNumber; // ebx
  ULONG_PTR v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CellFlat; // rax
  __int64 v23; // r15
  char v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int64 *v30; // rbx
  __int64 v31; // r15
  ULONG_PTR v32; // r13
  bool v33; // zf
  unsigned int v34; // edi
  __int64 CellPaged; // rax
  unsigned int v36; // r15d
  int v37; // esi
  int v38; // r13d
  int v39; // r14d
  int v40; // eax
  __int64 *v41; // rax
  int v42; // edx
  int v43; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  int v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v54[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v55[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-48h] BYREF

  v7 = 0LL;
  v52 = a5;
  LODWORD(v47) = a4;
  v49 = a3;
  v51 = a7;
  HIDWORD(BugCheckParameter4) = 0;
  v45 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  BugCheckParameter3 = 0LL;
  *(_OWORD *)v54 = 0LL;
  HvpGetCellContextReinitialize(&v45);
  v50 = 0LL;
  v10 = 0LL;
  v48 = 0LL;
  v53 = 0LL;
  CmpInitializeDelayDerefContext(v54);
  CmpAttachToRegistryProcess(&ApcState);
  if ( !*(_WORD *)(a1[1] + 66LL) )
  {
    if ( a1[7] || a1[8] )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v12, v11, v13, v14);
    v15 = a1[1];
    if ( a2 )
      v16 = *(_QWORD *)(a2 + 8);
    else
      v16 = 0LL;
    CmpLockTwoKcbsShared(v16, v15);
    SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( SubKeyByNumber < 0 )
      goto LABEL_24;
    if ( a1[7] || a1[8] )
    {
      SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v50);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
      v10 = v50;
      SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v50);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
    }
    if ( a2 )
    {
      SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a2, v10);
      if ( SubKeyByNumber < 0 )
        goto LABEL_24;
    }
    else if ( !CmpVEEnabled || (*(_DWORD *)(v15 + 184) & 0x1000000) == 0 )
    {
      v18 = *(_QWORD *)(v15 + 32);
      BugCheckParameter3 = v18;
      if ( v10 )
      {
        v19 = &v48;
        v20 = v16;
        v21 = v15;
      }
      else
      {
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberEx(v18, v21, v20, v10, (__int64)v54, (__int64)v19);
      if ( SubKeyByNumber >= 0 )
        goto LABEL_16;
      goto LABEL_31;
    }
    v41 = &v48;
    if ( !v10 )
      v41 = 0LL;
    if ( a2 )
    {
      v42 = v15;
      v43 = v16;
    }
    else
    {
      v42 = 0;
      v43 = v15;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                       v43,
                       v42,
                       v49,
                       v10,
                       (__int64)v54,
                       (__int64)&BugCheckParameter3,
                       (__int64)&BugCheckParameter4 + 4,
                       (__int64)v41,
                       (__int64)v55);
    if ( SubKeyByNumber >= 0 )
    {
      v18 = BugCheckParameter3;
LABEL_16:
      if ( HIDWORD(BugCheckParameter4) != -1 )
      {
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v18, HIDWORD(BugCheckParameter4));
        else
          CellFlat = HvpGetCellPaged(v18);
        v23 = CellFlat;
        if ( (*(_DWORD *)(v18 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
        {
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v18, &v45);
          else
            HvpReleaseCellPaged(v18, &v45);
          v30 = (signed __int64 *)(v18 + 72);
          v31 = KeAbPreAcquire(v18 + 72, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v18 + 72), 0, v31, v18 + 72);
          if ( v31 )
            *(_BYTE *)(v31 + 18) = 1;
          v32 = BugCheckParameter3;
          v33 = (*(_BYTE *)(v18 + 140) & 1) == 0;
          v34 = HIDWORD(BugCheckParameter4);
          if ( v33 )
            CellPaged = HvpGetCellPaged(BugCheckParameter3);
          else
            CellPaged = HvpGetCellFlat(BugCheckParameter3, HIDWORD(BugCheckParameter4));
          v23 = CellPaged;
          CmpUpdateKeyNodeAccessBits(v32, CellPaged, v34);
          if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v30);
          KeAbPostRelease((ULONG_PTR)v30);
          v18 = BugCheckParameter3;
          v10 = v50;
        }
        v7 = v48;
        SubKeyByNumber = CmpQueryKeyDataFromNode(v18, a6, v51, v48, v10);
        if ( v23 )
        {
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v18, &v45);
          else
            HvpReleaseCellPaged(v18, &v45);
        }
        goto LABEL_24;
      }
      SubKeyByNumber = -2147483622;
    }
LABEL_31:
    v7 = v48;
LABEL_24:
    CmpUnlockTwoKcbs(v16, v15);
    v24 = 1;
    goto LABEL_25;
  }
  v36 = 0;
  v37 = v47;
  v38 = v49;
  v39 = v52;
  do
  {
    v40 = CmpEnumerateLayeredKey((_DWORD)a1, v38, v37, v39, a6, v51, (__int64)&v53, v36++ <= 0xA);
    SubKeyByNumber = v40;
  }
  while ( v40 == -1073741267 );
  v7 = 0LL;
  v24 = 0;
LABEL_25:
  if ( v7 )
    CmpDereferenceKeyControlBlock(v7);
  CmpDrainDelayDerefContext((_QWORD **)v54);
  if ( v24 )
    CmpUnlockRegistry(v26, v25, v27, v28);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)SubKeyByNumber;
}
