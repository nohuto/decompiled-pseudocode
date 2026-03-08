/*
 * XREFs of KasanDriverUnloadImage @ 0x14036C820
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KasanUnloadInfoCompare @ 0x140562F90 (KasanUnloadInfoCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  ULONG_PTR *v15; // r14
  ULONG_PTR v16; // rdi
  ULONG_PTR v17; // r9
  _BYTE *v18; // rsi
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !KasaniEnabled )
    return;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  if ( (qword_140D18210 & 1) != 0 )
  {
    if ( KasanDriverUnloadInfos )
      v4 = KasanDriverUnloadInfos ^ (unsigned __int64)&KasanDriverUnloadInfos;
    else
      v4 = 0LL;
  }
  else
  {
    v4 = KasanDriverUnloadInfos;
  }
  v5 = qword_140D18210 & 1;
  if ( !v4 )
    goto LABEL_15;
  do
  {
    v6 = KasanUnloadInfoCompare(v1, v4, v3);
    if ( v6 < 0 )
    {
      v7 = *(_QWORD *)v4;
      if ( v5 && v7 )
        goto LABEL_20;
      goto LABEL_11;
    }
    if ( v6 <= 0 )
      break;
    v7 = *(_QWORD *)(v4 + 8);
    if ( v5 && v7 )
    {
LABEL_20:
      v4 ^= v7;
      continue;
    }
LABEL_11:
    v4 = v7;
  }
  while ( v4 );
  if ( v4 )
    RtlRbRemoveNode((unsigned __int64 *)&KasanDriverUnloadInfos, v4);
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
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v4 )
  {
    v13 = *(_QWORD *)(v4 + 32);
    v14 = 0LL;
    if ( v13 )
    {
      v15 = (ULONG_PTR *)(v4 + 40);
      do
      {
        v16 = v15[1];
        v17 = *v15;
        if ( KasaniEnabled )
        {
          if ( v17 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v17, 0LL);
          if ( (v17 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v17, 8uLL);
          if ( v17 + v16 < v17 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v17, v15[1]);
          v18 = (_BYTE *)(KasaniShadow + ((v17 + 0x800000000000LL) >> 3));
          if ( v16 >> 3 )
          {
            memset((void *)(KasaniShadow + ((v17 + 0x800000000000LL) >> 3)), 0, v16 >> 3);
            v13 = *(_QWORD *)(v4 + 32);
            v18 += v16 >> 3;
          }
          if ( (v16 & 7) != 0 )
          {
            *v18 = v16 & 7;
            v13 = *(_QWORD *)(v4 + 32);
          }
        }
        ++v14;
        v15 += 2;
      }
      while ( v14 < v13 );
    }
    ExFreePoolWithTag((PVOID)v4, 0);
  }
}
