__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int16 v12; // bx
  __int16 v13; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v15; // dx
  bool i; // sf
  __int64 v17; // rax
  int v18; // r10d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v20; // rdx
  ULONG_PTR v21; // rcx
  char v22; // r9
  unsigned int v23; // ebx
  int SecurityDescriptorNode; // esi
  char *v25; // r15
  __int16 v26; // cx
  ULONG_PTR v27; // r13
  __int64 CellFlat; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned int v32; // ebx
  void *Src; // rax
  void *v34; // r12
  __int16 v35; // r13
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+48h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-20h] BYREF
  void *v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR v42; // [rsp+68h] [rbp-8h]
  ULONG_PTR v43; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR v44; // [rsp+B8h] [rbp+48h]
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp+58h] BYREF

  BugCheckParameter3 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v38 = 0LL;
  v41 = 0LL;
  LODWORD(v43) = -1;
  v40 = 0LL;
  HvpGetCellContextReinitialize(&v41);
  HvpGetCellContextReinitialize(&v38);
  v10 = a5;
  LODWORD(v37) = -1;
  if ( a5 == 2 )
  {
    if ( a3 == -1 )
      v10 = 0;
    else
      v10 = a3 >> 31;
  }
  v11 = 0LL;
  v12 = *a1;
  v13 = *a1;
  if ( *a1 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v13);
      if ( *(_DWORD *)(EntryAtLayerHeight + 8) != -1 )
        break;
      v13 = v15 - 1;
      if ( v13 < 0 )
        goto LABEL_10;
    }
    v11 = EntryAtLayerHeight;
  }
LABEL_10:
  CmpGetSecurityCellForKeyNodeStack(a1, &BugCheckParameter3, &BugCheckParameter4);
  v42 = 0LL;
  LODWORD(v44) = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 )
  {
    for ( i = v12 < 0; !i; i = v12 < 0 )
    {
      v17 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v12);
      if ( *(_DWORD *)(v17 + 8) != v18 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v17, *(_QWORD *)(v17 + 16));
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v20 + 13) >= v22 )
        {
          LODWORD(v44) = *(_DWORD *)(v20 + 48);
          LOWORD(a5) = *(_WORD *)(v20 + 74);
          v42 = v21;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v12;
    }
  }
  v23 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 16) + 72LL) + 76;
  SecurityDescriptorNode = HvAllocateCell(a2, v23, v10, &v43, (__int64)&v40, (__int64)&v41);
  if ( SecurityDescriptorNode < 0 )
  {
    v32 = v43;
    v34 = v40;
  }
  else
  {
    v25 = (char *)v40;
    memmove(v40, *(const void **)(v11 + 16), v23);
    v25[12] = 0;
    v25[13] = v25[13] & 0x7C | 0x80;
    *((_DWORD *)v25 + 4) = a3;
    *(_QWORD *)(v25 + 20) = 0LL;
    *((_DWORD *)v25 + 7) = -1;
    *((_DWORD *)v25 + 8) = -1;
    *((_DWORD *)v25 + 9) = 0;
    *((_DWORD *)v25 + 10) = -1;
    *((_DWORD *)v25 + 11) = -1;
    *((_DWORD *)v25 + 12) = -1;
    *((_WORD *)v25 + 26) = 0;
    *((_QWORD *)v25 + 7) = 0LL;
    *((_QWORD *)v25 + 8) = 0LL;
    *((_WORD *)v25 + 37) = 0;
    v26 = *(_WORD *)(*(_QWORD *)(v11 + 16) + 2LL) & 0xFFBF;
    *((_WORD *)v25 + 1) = v26;
    if ( a3 == -1 )
      *((_WORD *)v25 + 1) = v26 | 0xC;
    v27 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v38);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v38);
    v29 = CellFlat;
    v30 = KeAbPreAcquire(a2 + 1784, 0LL);
    v31 = v30;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1784), v30, a2 + 1784);
    if ( v31 )
      *(_BYTE *)(v31 + 18) = 1;
    v32 = v43;
    Src = (void *)(v29 + 20);
    v34 = v40;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a2,
                               v43,
                               (__int64)v40,
                               (unsigned int)v43 >> 31,
                               Src,
                               0,
                               (unsigned int *)v25 + 11);
    CmUnlockHiveSecurity(a2);
    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v38);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
    if ( SecurityDescriptorNode >= 0 )
    {
      v35 = a5;
      if ( (_WORD)a5 )
      {
        SecurityDescriptorNode = CmpCopyCell(v42, (unsigned int)v44, a2, v10, (int *)&v37);
        if ( SecurityDescriptorNode < 0 )
          goto LABEL_38;
        *((_DWORD *)v25 + 12) = v37;
        *((_WORD *)v25 + 37) = v35;
      }
      SecurityDescriptorNode = 0;
      *a6 = v32;
      v32 = -1;
    }
  }
LABEL_38:
  if ( v34 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, &v41);
    else
      HvpReleaseCellPaged(a2, (unsigned int *)&v41);
  }
  if ( v32 != -1 )
    CmpFreeKeyByCell(a2, v32, 0);
  return (unsigned int)SecurityDescriptorNode;
}
