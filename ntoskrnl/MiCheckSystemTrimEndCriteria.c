/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x140631E4C
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogContinueTrim @ 0x1406329F8 (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v5; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r10
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rcx
  __int64 v27; // r9
  char v28; // cl
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi

  v3 = *(_BYTE *)(a2 + 2);
  v5 = a1[2115];
  if ( v3 == 3 || v3 == 2 )
  {
    v30 = *(_QWORD *)(v5 + 2360);
    if ( *(_QWORD *)(a2 + 96) < v30 )
      v31 = v30 - *(_QWORD *)(a2 + 80);
    else
      v31 = 0LL;
    *(_QWORD *)(v5 + 2360) = v31;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v8 = a1[2152];
  if ( v8 >= *(_QWORD *)(a2 + 72) )
    return 1LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v8 < 0x420 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      goto LABEL_8;
    }
    return 1LL;
  }
LABEL_8:
  v9 = 0LL;
  v10 = (_QWORD *)(v5 + 2416);
  v11 = 0;
  v12 = a2 - v5;
  do
  {
    v13 = *(_QWORD *)((char *)v10 + v12 - 2408);
    *v10++ = v13;
    v14 = v13 + v9;
    if ( v11 < 6 )
      v14 = v9;
    ++v11;
    v9 = v14;
  }
  while ( v11 < 8 );
  *(_QWORD *)(v5 + 2408) = v14;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)a3);
  v15 = *(unsigned __int8 *)(a3 + 16);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v15);
  if ( a1[2200] < 0x420uLL )
  {
    ++*(_DWORD *)(v5 + 2564);
  }
  else
  {
    ++*(_DWORD *)(v5 + 2560);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v21 = a1[2152];
  v22 = *(_QWORD *)(a2 + 72);
  if ( v21 >= v22 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, (PKLOCK_QUEUE_HANDLE)a3);
    return 1LL;
  }
  v23 = v22 - v21;
  v24 = 0LL;
  v25 = *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)a2 & 0x7F));
  if ( (unsigned int)v25 < 8 )
  {
    v26 = (_QWORD *)(v5 + 2416 + 8 * v25);
    v27 = (unsigned int)(8 - v25);
    do
    {
      v24 += *v26++;
      --v27;
    }
    while ( v27 );
  }
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  if ( v24 < v23 + 256 || *(char *)a2 < 0 )
    v28 = *(_BYTE *)a2 ^ (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    v28 = *(_BYTE *)a2 | 0x80;
  *(_BYTE *)a2 = v28;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, (PKLOCK_QUEUE_HANDLE)a3);
  return 0LL;
}
