/*
 * XREFs of MiIncrementLargeSubsections @ 0x14063B558
 * Callers:
 *     MiReferenceDataSubsections @ 0x14020FEC8 (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x140A309C4 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 *v5; // r13
  volatile LONG *v6; // rbx
  unsigned __int64 v7; // r14
  int v8; // eax
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  int v15; // eax
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // edx
  int v20; // ebx
  __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-30h]
  __int64 v29; // [rsp+28h] [rbp-28h] BYREF
  int v30; // [rsp+30h] [rbp-20h]
  int v31; // [rsp+34h] [rbp-1Ch]
  _DWORD v32[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-10h] BYREF
  char v35; // [rsp+A0h] [rbp+50h]
  volatile LONG *SpinLock; // [rsp+A8h] [rbp+58h]

  v2 = (__int64)a1;
  v28 = *a1;
  v4 = 0;
  v5 = 0LL;
  v6 = (volatile LONG *)(*a1 + 72);
  SpinLock = v6;
  v7 = ExAcquireSpinLockExclusive(v6);
  v35 = v7 + 1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v2 + 48) >> 30;
    if ( !v8 )
      break;
    if ( v8 == 1 && !v4 )
      v4 = 1;
    v9 = *(_DWORD *)(v2 + 108);
    if ( v9 == -1 )
      break;
    if ( v9 == 1 )
    {
      v31 = 0;
      v32[1] = 0;
      v33[1] = v33;
      v33[0] = v33;
      v29 = *(_QWORD *)(v28 + 80);
      *(_QWORD *)(v28 + 80) = &v29;
      v32[0] = 393479;
      v30 = 512;
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << v35);
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v7);
      KeWaitForGate((__int64)v32, 19LL, 0);
    }
    else
    {
      v15 = v9 + 1;
      *(_DWORD *)(v2 + 108) = v15;
      if ( v15 == 1 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        if ( KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << v35);
            v14 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
        __writecr8(v7);
        v20 = MiEnableLargeSubsection(v2);
        ExAcquireSpinLockExclusive(SpinLock);
        v21 = MiBuildWakeList(v28, 512);
        MiReleaseControlAreaWaiters(v21);
        if ( !v20 )
        {
          v4 = -1;
          --*(_DWORD *)(v2 + 108);
          goto LABEL_34;
        }
        ++*(_DWORD *)(v2 + 108);
        v6 = SpinLock;
      }
      v5 = (__int64 *)v2;
      if ( a2 )
      {
        v22 = *(unsigned int *)(v2 + 44);
        if ( a2 <= v22 )
          goto LABEL_34;
        a2 -= v22;
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    if ( !v2 )
      goto LABEL_34;
  }
  v4 = -1;
LABEL_34:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v23 >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << v35);
      v14 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
  }
  __writecr8(v7);
  if ( v4 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v4;
}
