__int64 __fastcall HalpDmaCommitScatterMapBuffers(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  char v12; // r13
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a5 )
  {
    v8 = (__int64 *)(a5 + 12);
    v9 = (((a5[8] + a5[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a5[10] + 4095) >> 12;
  }
  else
  {
    LODWORD(v9) = a4;
    v8 = 0LL;
  }
  result = HalpDmaGetTranslationEntries(a1, 1, v9);
  v11 = result;
  if ( result )
  {
    v12 = *(_BYTE *)(a1 + 152);
    v13 = (_QWORD *)result;
    if ( (_DWORD)v9 )
    {
      v14 = (unsigned int)v9;
      do
      {
        v15 = a3;
        if ( a5 )
        {
          v16 = *v8++;
          v15 = v16 << 12;
        }
        else
        {
          a3 += 4096LL;
        }
        *v13 = v15;
        if ( a2 )
        {
          v13[6] = a2 | v13[6] & 0xFFF;
          a2 += 4096LL;
        }
        v13[6] = (4LL * (v12 & 1)) | v12 & 1 | v13[6] & 0xFFFFFFFFFFFFFFFAuLL | 2 | 8;
        v13 = (_QWORD *)v13[1];
        --v14;
      }
      while ( v14 );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v17 = HalpDmaPrependTranslations(v11, v9, *(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 40) += v9;
    *(_QWORD *)(a1 + 32) = v17;
    if ( v12 )
      *(_DWORD *)(a1 + 216) += v9;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return v11;
  }
  return result;
}
