__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v8; // r13
  __int64 v9; // rbx
  unsigned int v10; // esi
  int v11; // eax
  int SecurityDescriptorNode; // ebx
  _DWORD *v13; // rbx
  _DWORD *v14; // rsi
  unsigned int *v15; // r13
  unsigned __int16 v16; // ax
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // ecx
  PVOID v29; // r12
  __int64 v30; // r14
  void *v31; // rcx
  void *v33; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v35[4]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+48h]

  v37 = a2;
  LODWORD(BugCheckParameter3) = -1;
  *(_QWORD *)v35 = 0LL;
  v33 = 0LL;
  v8 = a2;
  HvpGetCellContextReinitialize(v35);
  P = 0LL;
  v9 = KeAbPreAcquire(BugCheckParameter2 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter2 + 72), 0, v9, BugCheckParameter2 + 72);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = (unsigned __int16)CmpNameSize(a3) + 76;
  v11 = HvAllocateCell(BugCheckParameter2, v10, 0LL, &BugCheckParameter3, (__int64)&v33, (__int64)v35);
  SecurityDescriptorNode = v11;
  if ( v11 >= 0 )
  {
    v13 = v33;
    memset(v33, 0, v10);
    *v13 = 813934;
    v14 = v33;
    *(_QWORD *)((char *)v33 + 4) = MEMORY[0xFFFFF78000000014];
    v15 = v14 + 11;
    v14[4] = -1;
    v14[7] = -1;
    v14[8] = -1;
    v14[10] = -1;
    v14[11] = -1;
    v14[12] = -1;
    v16 = CmpCopyName((_BYTE *)v14 + 76, a3);
    *((_WORD *)v14 + 36) = v16;
    if ( v16 < *a3 )
      *((_WORD *)v14 + 1) |= 0x20u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x20) != 0 )
    {
      P = (PVOID)CmpGenerateAppHiveSecurityDescriptor(v37 + 32);
      if ( !P )
      {
        SecurityDescriptorNode = -1073741670;
        v17 = 197120;
LABEL_12:
        v18 = SecurityDescriptorNode;
LABEL_13:
        CmpRecordParseFailure(a4, v17, v18);
        v8 = v37;
        goto LABEL_33;
      }
    }
    else
    {
      v19 = RtlpNewSecurityObject(
              0LL,
              *(_OWORD **)(v37 + 64),
              (__int64 *)&P,
              0LL,
              0,
              1,
              0,
              v37 + 32,
              (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76),
              0LL);
      SecurityDescriptorNode = v19;
      if ( v19 < 0 )
      {
        v18 = v19;
        v17 = 197376;
        goto LABEL_13;
      }
    }
    v20 = KeAbPreAcquire(BugCheckParameter2 + 1784, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 1784), v20, BugCheckParameter2 + 1784);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    v14 = v33;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               BugCheckParameter2,
                               BugCheckParameter3,
                               (__int64)v33,
                               (unsigned int)BugCheckParameter3 >> 31,
                               P,
                               0,
                               v15);
    CmUnlockHiveSecurity(BugCheckParameter2);
    if ( SecurityDescriptorNode >= 0 )
    {
      v22 = (unsigned __int64 *)(*(_QWORD *)(a4 + 48) + 80LL);
      v23 = KeAbPreAcquire((__int64)v22, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
      HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
      v25 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
      v26 = *(_QWORD *)(a4 + 48);
      SecurityDescriptorNode = v25;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v26 + 80));
      KeAbPostRelease(v26 + 80);
      if ( SecurityDescriptorNode >= 0 )
      {
        v27 = *(_QWORD *)(BugCheckParameter2 + 64);
        SecurityDescriptorNode = 0;
        v28 = BugCheckParameter3;
        LODWORD(BugCheckParameter3) = -1;
        *(_DWORD *)(v27 + 36) = v28;
        *a5 = v28;
      }
      else
      {
        CmpRecordParseFailure(a4, 197888, SecurityDescriptorNode);
      }
      v8 = v37;
      goto LABEL_32;
    }
    v17 = 197632;
    goto LABEL_12;
  }
  CmpRecordParseFailure(a4, 196864, v11);
LABEL_32:
  v14 = v33;
LABEL_33:
  v29 = P;
  if ( P )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x20) != 0 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&P);
    }
    else
    {
      v30 = *(_QWORD *)(v8 + 72);
      v31 = *(void **)(v30 + 48);
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      *(_QWORD *)(v30 + 48) = v29;
    }
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, v35);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v35);
  }
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
  KeAbPostRelease(BugCheckParameter2 + 72);
  return (unsigned int)SecurityDescriptorNode;
}
