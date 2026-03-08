/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x14030424C
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1403041DC (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020DD14 (RtlpHpEnvFreeVA.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVaMgrFree @ 0x1402F12D4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x1402F4D60 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402F95FC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1402F97BC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140304644 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140304A64 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  char v9; // dl
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+50h] [rbp-20h]
  unsigned __int64 v33; // [rsp+58h] [rbp-18h]

  v30 = 0LL;
  v3 = *a2;
  LODWORD(v31) = 0x100000;
  v5 = a3;
  *(_QWORD *)((char *)&v31 + 4) = 0x20000000100000LL;
  HIDWORD(v31) = 0x200000;
  v32 = 0x10000040000000LL;
  if ( !v3 )
    __int2c();
  v7 = *(unsigned __int8 *)(BugCheckParameter2 + 46);
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    v12 = v3 >> 20;
    v13 = a3 >> 20;
    v14 = (unsigned __int8)RtlpHpAcquireLockExclusive(BugCheckParameter2, v7 & 1);
    v15 = RtlpHpVaMgrRangeFind(BugCheckParameter2, v12, v13, &v30);
    v16 = v15;
    if ( v15 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(BugCheckParameter2 + 8), v15);
      v17 = v30;
      if ( v30 != v16 )
      {
        *(_OWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *(_BYTE *)v16 = 1;
        *(_BYTE *)(v16 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v16, (__int64)(v17 - v16) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2);
        v16 = v17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v19 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v14);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        v19 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v19
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v16 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v16 )
        return 0LL;
      LOBYTE(v14) = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
       + ((unsigned __int64)(v16 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_BYTE *)v16 = 1;
    *(_BYTE *)(v16 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v16 + 24) > (unsigned __int16)v12 )
    {
      RtlpHpVaMgrRangeSplit(BugCheckParameter2, v16, (unsigned __int16)v12);
      RtlpHpVaMgrFree(BugCheckParameter2);
    }
    v29 = v8;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
          v8 = v29;
        }
      }
      __writecr8((unsigned __int8)v14);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v18 = KeGetCurrentThread();
      v19 = v18->SpecialApcDisable++ == -1;
      if ( v19 && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
      return v29;
    }
  }
  else
  {
    if ( a3 <= *((unsigned int *)&v31 + (((unsigned int)v7 >> 1) & 7)) )
      v5 = *((unsigned int *)&v31 + ((v7 >> 1) & 7));
    v30 = v3 - ((v5 - 1) & (v5 + v3 - 1)) + v5 - 1;
    v29 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v30);
    v8 = v29;
    if ( v29 )
    {
      v9 = *(_BYTE *)(BugCheckParameter2 + 44);
      v10 = v30;
      v32 = 0LL;
      v31 = 0LL;
      BYTE1(v31) = v9;
      v33 = v30 >> 20;
      LOBYTE(v31) = 5;
      if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, v29, &v31) )
      {
        *a2 = v10;
        return v8;
      }
      RtlpHpEnvFreeVA((unsigned __int64 *)&v29, &v30, 0x8000);
      return 0LL;
    }
  }
  return v8;
}
