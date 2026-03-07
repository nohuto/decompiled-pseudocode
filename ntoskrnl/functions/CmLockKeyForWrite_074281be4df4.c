__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  signed __int64 *SiloKeyLockEntry; // r14
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 *v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  signed __int64 *i; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // rcx
  signed __int64 **v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rtt
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 j; // rbx
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  ULONG_PTR v31; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp+38h] BYREF
  signed __int64 v33; // [rsp+60h] [rbp+40h] BYREF

  SiloKeyLockEntry = 0LL;
  v33 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext((__int64)CurrentSilo, CmpSiloContextSlot, &BugCheckParameter2);
  v8 = (signed __int64 *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  CmpLockRegistry(v5, v4, v6, v7);
  v9 = *(_QWORD *)(a1 + 8);
  CmpLockKcbExclusive(v9);
  v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_43;
  if ( *(_QWORD *)(v9 + 32) == CmpMasterHive )
  {
    v10 = -1073741811;
  }
  else
  {
    CmpLockSiloKeyLockTrackerShared(v8);
    v10 = CmpPerformSiloKeyLockTrackerEnabledCheck(v8);
    if ( v10 < 0 )
    {
LABEL_32:
      _m_prefetchw(v8);
      v28 = *v8;
      v29 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v29 = 0LL;
      if ( (v28 & 2) != 0
        || (v30 = *v8, v30 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v29, v28)) )
      {
        v31 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v31 = BugCheckParameter2;
      }
      KeAbPostRelease(v31);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_43;
    }
    for ( i = (signed __int64 *)v8[2]; i != v8 + 2; i = (signed __int64 *)*i )
    {
      if ( i[2] == v9 )
      {
        v10 = 0;
        goto LABEL_32;
      }
    }
    _m_prefetchw(v8);
    v12 = *v8;
    v13 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0
      || (v14 = *v8, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v13, v12)) )
    {
      v15 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v15 = BugCheckParameter2;
    }
    KeAbPostRelease(v15);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SiloKeyLockEntry = (signed __int64 *)CmpCreateSiloKeyLockEntry(v9);
    if ( SiloKeyLockEntry )
    {
      v10 = CmpGlobalLockKeyForWrite(v9, &v33);
      if ( v10 < 0 )
        goto LABEL_43;
      v8 = (signed __int64 *)BugCheckParameter2;
      v16 = BugCheckParameter2;
      SiloKeyLockEntry[3] = v33;
      CmpLockSiloKeyLockTrackerExclusive(v16);
      v10 = CmpPerformSiloKeyLockTrackerEnabledCheck(v8);
      if ( v10 >= 0 )
      {
        v17 = (signed __int64 **)v8[3];
        if ( *v17 != v8 + 2 )
          __fastfail(3u);
        *SiloKeyLockEntry = (signed __int64)(v8 + 2);
        SiloKeyLockEntry[1] = (signed __int64)v17;
        *v17 = SiloKeyLockEntry;
        v8[3] = (signed __int64)SiloKeyLockEntry;
        _m_prefetchw(v8);
        v18 = *v8;
        v19 = *v8 - 16;
        if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (v18 & 2) != 0
          || (v20 = *v8, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v19, v18)) )
        {
          v21 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2);
        }
        else
        {
          v21 = BugCheckParameter2;
        }
        KeAbPostRelease(v21);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        CmpUnlockKcb(v9);
        for ( j = *(_QWORD *)(v9 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
        {
          CmpLockKcbExclusive(j);
          *(_WORD *)(j + 8) |= 0x100u;
          CmpUnlockKcb(j);
        }
        v10 = 0;
        goto LABEL_27;
      }
      goto LABEL_32;
    }
    v10 = -1073741670;
  }
LABEL_43:
  CmpUnlockKcb(v9);
  if ( SiloKeyLockEntry )
    CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_27:
  CmpUnlockRegistry(v23, v22, v24, v25);
  return (unsigned int)v10;
}
