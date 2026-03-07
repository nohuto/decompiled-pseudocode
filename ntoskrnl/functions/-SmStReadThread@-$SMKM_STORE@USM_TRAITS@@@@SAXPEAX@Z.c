void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  union _SLIST_HEADER *v1; // r14
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 Context; // r15
  NTSTATUS v6; // eax
  union _SLIST_HEADER *v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 *Alignment; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(union _SLIST_HEADER **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 6728LL);
  v4 = *(_QWORD *)a1 + 6488LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = (char *)&v1[407].HeaderX64 + 8;
    Object[1] = &v1[406];
    do
    {
      while ( 1 )
      {
        v6 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v6 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v7 = v1 + 409;
        while ( 1 )
        {
          v8 = KeAcquireSpinLockRaiseToDpc(&v1[410].Alignment);
          v9 = *(__int64 **)(v4 + 64);
          v10 = v8;
          if ( v9 == (__int64 *)v7 )
          {
            Alignment = 0LL;
          }
          else
          {
            Alignment = (__int64 *)v7->Alignment;
            v7->Alignment = *(_QWORD *)v7->Alignment & 0xFFFFFFFFFFFFFFF8uLL;
            if ( Alignment == v9 )
            {
              v7->Alignment = 0LL;
              *(_QWORD *)(v4 + 64) = v4 + 56;
            }
            else
            {
              *v9 = *v9 & 7 | (8 * (((unsigned __int64)*v9 >> 3) - 1));
            }
          }
          KxReleaseSpinLock((volatile signed __int64 *)&v1[410]);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v10);
          if ( !Alignment )
            break;
          v17 = SmFpAllocate((PEX_SPIN_LOCK)(v3 + 2840), 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, Alignment, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, Alignment, Issue);
          SmFpFree(v3 + 2840, 3LL, (char *)&v1[405].HeaderX64 + 8, v17);
        }
      }
    }
    while ( v6 != 1 );
  }
  if ( Context )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
}
