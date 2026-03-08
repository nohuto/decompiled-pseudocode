/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140296390 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1402AE860 (KeQueryNodeActiveAffinity.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSaBinaryArrayInsert @ 0x1403C0224 (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x1403D00EC (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r12
  ULONG MaximumProcessorCount; // r15d
  __int64 v6; // r14
  char *result; // rax
  char *v8; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // r13
  struct _KPRCB *v21; // rax
  USHORT v22; // r15
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  void *Pool3; // rbx
  char v25; // si
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v32; // [rsp+3Ch] [rbp-25h]
  unsigned int v33; // [rsp+40h] [rbp-21h]
  unsigned int v34; // [rsp+44h] [rbp-1Dh]
  __int64 v35; // [rsp+48h] [rbp-19h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-9h] BYREF
  __int128 v37; // [rsp+68h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+17h] BYREF

  Affinity = 0LL;
  v4 = 0;
  PreviousAffinity = 0LL;
  v37 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v32 = MaximumProcessorCount;
  LODWORD(v6) = 0;
  v35 = a2 != 0 ? 256LL : 64LL;
  result = (char *)ExAllocatePool2(v35, 128LL, 1632860229LL);
  v8 = result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *((_QWORD *)v8 + 7) = v8 + 64;
  *((_QWORD *)v8 + 6) = 512LL;
  *((_QWORD *)v8 + 2) = a1;
  v9 = 0LL;
  *((_DWORD *)v8 + 9) = 512;
  CurrentThread = KeGetCurrentThread();
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(
                           (__int64)&ExSaPageGroupDescriptorArrayLock,
                           (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v33 = v12;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = (__int64)(&CurrentThread[1].Process + 12 * v33);
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v17 = ExpSaBinaryArrayInsert(
          ExSaPageGroupDescriptorArray,
          v8,
          KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  *((_DWORD *)v8 + 8) = v17;
  if ( v17 == -1 )
    goto LABEL_45;
  v18 = KeNumberProcessors_0;
  v34 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_25:
    Pool3 = 0LL;
    v25 = 1;
    goto LABEL_26;
  }
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v19 + ExSaPageArrays);
    v21 = (unsigned int)v6 >= v18 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v6);
    v22 = v21->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    LOBYTE(v37) = 3;
    DWORD2(v37) = v22 | 0x80000000;
    Pool3 = (void *)ExAllocatePool3(v35, 4096, 1632860229, (unsigned int)&v37, 1);
    if ( !Pool3 )
      goto LABEL_44;
LABEL_20:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v20, Pool3, v22) == -1 )
      goto LABEL_44;
    LODWORD(v6) = v6 + 1;
    v19 += 8LL;
    if ( (unsigned int)v6 >= v32 )
      goto LABEL_25;
    v18 = v34;
  }
  KeQueryNodeActiveAffinity(v22, &Affinity, 0LL);
  if ( v4 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v4 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  Pool3 = (void *)ExAllocatePool2(v35, 4096LL, 1632860229LL);
  if ( Pool3 )
    goto LABEL_20;
LABEL_44:
  v25 = 0;
LABEL_26:
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( Pool3 )
    ExFreePoolWithTag(Pool3, 0);
  if ( !v25 )
  {
LABEL_45:
    if ( *((_DWORD *)v8 + 8) != -1 )
    {
      while ( (_DWORD)v6 )
      {
        v6 = (unsigned int)(v6 - 1);
        v28 = *(_QWORD *)(ExSaPageArrays + 8 * v6);
        v29 = *((_DWORD *)v8 + 8);
        _BitScanReverse(&v30, v29);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v28 + 8LL * (v30 - 2)) + 8LL * ((1 << v30) ^ v29) + 8), 0);
        ExpSaBinaryArrayRemove(v28, *((unsigned int *)v8 + 8));
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v8 + 8));
    }
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  return v8;
}
