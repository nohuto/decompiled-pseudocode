/*
 * XREFs of MiChangingSubsectionProtos @ 0x14053F858
 * Callers:
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541CB4 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140542514 (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(_QWORD *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // r14d
  unsigned int v5; // ebx
  volatile LONG *v8; // r12
  unsigned __int64 v9; // rdi
  bool v10; // zf
  int v11; // edx
  __int64 **v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  int v35; // edx
  _DWORD *v36; // r9
  __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = a2 & 0x10;
  v38 = *BugCheckParameter2;
  v5 = 0;
  v41 = v4;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( v4 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      v10 = *(_DWORD *)(a3 + 12) == 2;
      *(_DWORD *)(a3 + 8) = 0;
      if ( v10 )
        break;
    }
    v11 = a2 & 8;
    *(_DWORD *)(a3 + 8) = v11 != 0 ? 0x40 : 0;
    if ( (a2 & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x100u;
    if ( v4 )
      *(_DWORD *)(a3 + 8) |= 0x80u;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      v5 = -1073741302;
      goto LABEL_68;
    }
    v39 = 0LL;
    v12 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      v12 = (*(_DWORD *)(v3 + 56) & 0x20) != 0 ? *(__int64 ***)(v3 + 80) : (__int64 **)BugCheckParameter2[3];
      if ( v12 )
      {
        do
        {
          if ( ((_DWORD)v12[1] & 0x40) == 0 )
            break;
          v12 = (__int64 **)*v12;
        }
        while ( v12 );
        if ( v12 )
        {
          v39 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
          if ( v39 )
            KeAbPreWait(v39, v13, v14);
          v11 = a2 & 8;
        }
      }
    }
    *(_DWORD *)(a3 + 12) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_DWORD *)(a3 + 20) = 0;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v38 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v38 + 80);
      *(_QWORD *)(v38 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( v11 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags )
        goto LABEL_68;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_68;
      v33 = KeGetCurrentIrql();
      if ( v33 > 0xFu )
        goto LABEL_68;
      if ( (unsigned __int8)v9 > 0xFu )
        goto LABEL_68;
      if ( v33 < 2u )
        goto LABEL_68;
      v34 = KeGetCurrentPrcb();
      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v36 = v34->SchedulerAssist;
      v10 = (v35 & v36[5]) == 0;
      v36[5] &= v35;
      if ( !v10 )
        goto LABEL_68;
      v32 = (__int64)v34;
      goto LABEL_67;
    }
    if ( !v12 )
    {
      v27 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      if ( !KiIrqlFlags )
        goto LABEL_68;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_68;
      v28 = KeGetCurrentIrql();
      if ( v28 > 0xFu )
        goto LABEL_68;
      if ( (unsigned __int8)v9 > 0xFu )
        goto LABEL_68;
      if ( v28 < 2u )
        goto LABEL_68;
      v29 = KeGetCurrentPrcb();
      v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v31 = v29->SchedulerAssist;
      v10 = (v30 & v31[5]) == 0;
      v31[5] &= v30;
      if ( !v10 )
        goto LABEL_68;
      v32 = (__int64)v29;
LABEL_67:
      KiRemoveSystemWorkPriorityKick(v32);
      goto LABEL_68;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v10 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(v9);
    KeWaitForGate(a3 + 16, 18);
    v3 = v38;
    v4 = v41;
    if ( v39 )
    {
      KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, v39, 0LL);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v39);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = v20->SchedulerAssist;
        v10 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
    }
  }
  v5 = -1073740748;
LABEL_68:
  __writecr8(v9);
  return v5;
}
