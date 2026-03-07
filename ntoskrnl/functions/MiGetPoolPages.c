__int64 __fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  _QWORD *v5; // r15
  int v8; // r14d
  int v9; // r14d
  signed __int32 v10; // ecx
  __int64 Page; // rax
  __int64 *v12; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 OldIrql; // r15
  _QWORD *v20; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int128 v26; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v28[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+78h] [rbp-8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(qword_140C65720 + 376LL * a2);
  if ( v5[9] )
  {
    KeAcquireInStackQueuedSpinLock(v5 + 10, &LockHandle);
    v14 = v5[9];
    v15 = v14;
    if ( v14 > a3 )
      v15 = a3;
    if ( v15 )
    {
      v16 = (_QWORD *)v5[11];
      a3 -= v15;
      v4 = (__int64)v16;
      v5[9] = v14 - v15;
      do
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        --v15;
      }
      while ( v15 );
      *v17 = 0LL;
      v5[11] = v16;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = -1LL << (LockHandle.OldIrql + 1);
        v24 = ~(unsigned __int16)v18;
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v8 = a1 & 0x40000000;
    if ( v8 )
    {
      v20 = (_QWORD *)v4;
      if ( v4 )
      {
        do
        {
          MiFillPhysicalPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x44000000000LL) >> 4), v18, 0LL);
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
    }
    if ( !a3 )
      return v4;
  }
  else
  {
    v8 = a1 & 0x40000000;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v26);
    v9 = v8 != 0 ? 0x102 : 0;
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, a3 + 160) )
      {
        MiRetryNonPagedAllocation();
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u);
        Page = MiGetPage((__int64)&MiSystemPartition, HIDWORD(v26) | (unsigned int)v10 & DWORD2(v26), v9 + 524);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
          {
LABEL_10:
            if ( !a3 )
              return v4;
            break;
          }
        }
        else
        {
          v12 = (__int64 *)(48 * Page - 0x220000000000LL);
          MiSetPfnTbFlushStamp((__int64)v12, 0, 0);
          *v12 = v4;
          --a3;
          v4 = (__int64)v12;
        }
        if ( !a3 )
          goto LABEL_10;
      }
      v30 = 0LL;
      memset(v28, 0, sizeof(v28));
      v29 = 0LL;
      if ( v4 )
      {
        MiReturnPhysicalPoolPages(v4, 0);
        v4 = 0LL;
      }
      *(_QWORD *)&v28[0] = a3;
      *(_QWORD *)&v29 = a3;
      MiReturnPoolCharges((unsigned __int64 *)v28, 0, 0LL);
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0);
  return 0LL;
}
