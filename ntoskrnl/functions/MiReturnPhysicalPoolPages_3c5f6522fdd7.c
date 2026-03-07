__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1, unsigned int a2)
{
  char v2; // r14
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r13
  volatile signed __int64 *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  _QWORD *v22; // [rsp+20h] [rbp-69h]
  _QWORD *v23; // [rsp+20h] [rbp-69h]
  __int64 v24; // [rsp+28h] [rbp-61h]
  __int64 v25; // [rsp+30h] [rbp-59h]
  _QWORD *v26; // [rsp+38h] [rbp-51h]
  __int64 v27; // [rsp+40h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v29[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  int v32; // [rsp+F0h] [rbp+67h]
  int v34; // [rsp+100h] [rbp+77h]
  unsigned int v35; // [rsp+108h] [rbp+7Fh]

  v31 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = 0LL;
  v2 = a2;
  memset(v29, 0, sizeof(v29));
  v3 = a1;
  v24 = 0LL;
  v30 = 0LL;
  v35 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 8);
  v4 = 0LL;
  v5 = MiSwizzleInvalidPte(128LL);
  v34 = v2 & 2;
  v32 = v2 & 1;
  do
  {
    v27 = *(_QWORD *)v3;
    v26 = v4;
    v22 = v4;
    v6 = (unsigned __int8)MiLockPageInline(v3);
    v7 = (volatile signed __int64 *)(v3 + 24);
    if ( !v34 )
    {
      v10 = *v7 & 0xC000000000000001uLL;
      *(_WORD *)(v3 + 32) = 1;
      *v7 = v10 | 1;
    }
    if ( !v32 && (*(_BYTE *)(v3 + 35) & 0x10) != 0 )
    {
      v4 = (_QWORD *)v3;
      v8 = v24 + 1;
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0xF8 | 5;
      *v7 &= 0xC000000000000000uLL;
      *(_WORD *)(v3 + 32) = 0;
      if ( v22 )
        v4 = v26;
      *(_QWORD *)(v3 + 8) = -8LL;
      *(_QWORD *)(v3 + 16) = v5;
      *(_QWORD *)v3 = v25;
      v25 = v3;
      ++v24;
    }
    else
    {
      *(_WORD *)(v3 + 32) = 0;
      *v7 &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4), 2);
      v8 = v24;
      ++*(_QWORD *)&v29[0];
      *(_QWORD *)&v30 = v30 + 1;
    }
    _InterlockedAnd64(v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    v3 = v27;
  }
  while ( v27 );
  v23 = v4;
  if ( v8 )
  {
    v11 = (_QWORD *)(qword_140C65720 + 376LL * v35);
    KeAcquireInStackQueuedSpinLock(v11 + 10, &LockHandle);
    *v23 = v11[11];
    v11[9] += v8;
    v11[11] = v25;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(OldIrql);
  }
  return MiReturnPoolCharges(v29, (unsigned int)(2 * v32), a2);
}
