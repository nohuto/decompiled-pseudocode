__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 KcbAtLayerHeight; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int16 v6; // dx
  int v7; // ebx
  unsigned int v8; // r12d
  int Cell; // eax
  char *v10; // rsi
  int v11; // ebx
  unsigned int v12; // ecx
  __int64 SecurityDescriptorForKcbStack; // rbx
  unsigned int v14; // r15d
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rcx
  __int64 CellFlat; // rax
  __int64 v18; // rbx
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int BugCheckParameter4; // [rsp+80h] [rbp+48h] BYREF
  int BugCheckParameter4_4; // [rsp+84h] [rbp+4Ch]
  __int64 v26; // [rsp+88h] [rbp+50h] BYREF
  __int64 v27; // [rsp+90h] [rbp+58h] BYREF
  void *v28; // [rsp+98h] [rbp+60h] BYREF

  BugCheckParameter4_4 = HIDWORD(a1);
  v27 = 0LL;
  v26 = 0LL;
  BugCheckParameter4 = -1;
  v28 = 0LL;
  HvpGetCellContextReinitialize(&v27);
  HvpGetCellContextReinitialize(&v26);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2);
  v4 = *(_QWORD *)(KcbAtLayerHeight + 72);
  v5 = 0LL;
  if ( *(__int16 *)(KcbAtLayerHeight + 66) >= 0 )
  {
    do
      v5 = CmpGetKcbAtLayerHeight(a2);
    while ( *(_DWORD *)(v5 + 40) == -1 && (__int16)(v6 - 1) >= 0 );
  }
  v7 = *(_DWORD *)(v5 + 40) >> 31;
  if ( *(int *)(v4 + 40) < 0 )
    v7 = 1;
  HvLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  v8 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL) + 76;
  Cell = HvAllocateCell(
           *(_QWORD *)(KcbAtLayerHeight + 32),
           v8,
           v7,
           (unsigned int)&BugCheckParameter4,
           (__int64)&v28,
           (__int64)&v27);
  v10 = (char *)v28;
  v11 = Cell;
  if ( Cell < 0 )
  {
    v14 = BugCheckParameter4;
  }
  else
  {
    memset(v28, 0, v8);
    *(_DWORD *)v10 = 27502;
    v10[12] = CmpGetPhaseAccessBit();
    v10[13] = v10[13] & 0xFC | 1;
    if ( (**(_DWORD **)(KcbAtLayerHeight + 80) & 1) != 0 )
      *((_WORD *)v10 + 1) = 32;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v4 + 40);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = -1;
    *((_WORD *)v10 + 37) = 0;
    *((_DWORD *)v10 + 13) &= 0xFFF0FFFF;
    v10[55] = 0;
    *((_DWORD *)v10 + 13) &= 0xFF0FFFFF;
    v12 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL);
    *((_WORD *)v10 + 36) = v12;
    memmove(v10 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 26LL), v12);
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
    CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
    v14 = BugCheckParameter4;
    v11 = CmpAssignSecurityDescriptor(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            BugCheckParameter4,
            v10,
            SecurityDescriptorForKcbStack);
    CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 32));
    if ( v11 >= 0 )
    {
      v11 = HvMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0LL);
      if ( v11 >= 0 )
      {
        v11 = CmpAddSubKey(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), v14);
        if ( v11 >= 0 )
        {
          CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
          *(_DWORD *)(KcbAtLayerHeight + 40) = v14;
          v14 = -1;
          CmpRebuildKcbCacheFromNode(v15);
          v16 = *(_QWORD *)(v4 + 32);
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v16, *(unsigned int *)(v4 + 40));
          else
            CellFlat = HvpGetCellPaged(v16);
          v18 = CellFlat;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v4 + 32), CellFlat, *(unsigned int *)(v4 + 40));
          v19 = *((_WORD *)v10 + 36);
          if ( (v10[2] & 0x20) != 0 )
            v19 *= 2;
          if ( (unsigned __int16)*(_DWORD *)(v18 + 52) < (unsigned int)v19 )
            *(_WORD *)(v18 + 52) = v19;
          CmpIncrementKcbSequenceNumber(v4);
          v20 = *(_QWORD *)(v4 + 32);
          *(_WORD *)(v4 + 176) = *(_WORD *)(v18 + 52);
          if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v20, &v26);
          else
            HvpReleaseCellPaged(v20, &v26);
          LOBYTE(v21) = 1;
          CmpCleanUpSubKeyInfo(v4, v21);
          v11 = 0;
        }
      }
    }
  }
  if ( v10 )
  {
    v22 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v22, &v27);
    else
      HvpReleaseCellPaged(v22, &v27);
  }
  if ( v14 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 32), v14);
  HvUnlockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  return (unsigned int)v11;
}
