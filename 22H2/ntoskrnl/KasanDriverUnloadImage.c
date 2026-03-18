/*
 * XREFs of KasanDriverUnloadImage @ 0x14020B640
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KasanUnloadInfoCompare @ 0x140565430 (KasanUnloadInfoCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405718E8 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  ULONG_PTR *v14; // r14
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r9
  _BYTE *v17; // rsi
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !KasaniEnabled )
    return;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  if ( (qword_140D18538 & 1) != 0 )
  {
    if ( KasanDriverUnloadInfos )
      v3 = KasanDriverUnloadInfos ^ (unsigned __int64)&KasanDriverUnloadInfos;
    else
      v3 = 0LL;
  }
  else
  {
    v3 = KasanDriverUnloadInfos;
  }
  v4 = qword_140D18538 & 1;
  if ( !v3 )
    goto LABEL_15;
  do
  {
    v5 = KasanUnloadInfoCompare(v1, v3);
    if ( v5 < 0 )
    {
      v6 = *(_QWORD *)v3;
      if ( v4 && v6 )
        goto LABEL_20;
      goto LABEL_11;
    }
    if ( v5 <= 0 )
      break;
    v6 = *(_QWORD *)(v3 + 8);
    if ( v4 && v6 )
    {
LABEL_20:
      v3 ^= v6;
      continue;
    }
LABEL_11:
    v3 = v6;
  }
  while ( v3 );
  if ( v3 )
    RtlRbRemoveNode(&KasanDriverUnloadInfos, v3);
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KasanDriverUnloadInfosLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KasanDriverUnloadInfosLock, 0LL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v3 )
  {
    v12 = *(_QWORD *)(v3 + 32);
    v13 = 0LL;
    if ( v12 )
    {
      v14 = (ULONG_PTR *)(v3 + 40);
      do
      {
        v15 = v14[1];
        v16 = *v14;
        if ( KasaniEnabled )
        {
          if ( v16 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v16, 0LL);
          if ( (v16 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v16, 8uLL);
          if ( v16 + v15 < v16 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v16, v14[1]);
          v17 = (_BYTE *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3));
          if ( v15 >> 3 )
          {
            memset((void *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3)), 0, v15 >> 3);
            v12 = *(_QWORD *)(v3 + 32);
            v17 += v15 >> 3;
          }
          if ( (v15 & 7) != 0 )
          {
            *v17 = v15 & 7;
            v12 = *(_QWORD *)(v3 + 32);
          }
        }
        ++v13;
        v14 += 2;
      }
      while ( v13 < v12 );
    }
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
