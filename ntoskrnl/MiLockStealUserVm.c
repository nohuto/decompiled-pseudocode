/*
 * XREFs of MiLockStealUserVm @ 0x1403B7F90
 * Callers:
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiPrepareAttachThread @ 0x14029CA64 (MiPrepareAttachThread.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402DE81C (MiTryToAcquireExpansionLockAtDpc.c)
 *     KeForceAttachProcess @ 0x1402E6610 (KeForceAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     MiVadPagesTradable @ 0x1403481F0 (MiVadPagesTradable.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A3A90 (MiSmallVaStillMapsFrame.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRotatedToFrameBuffer @ 0x140630A34 (MiRotatedToFrameBuffer.c)
 *     MiClusterVadActive @ 0x1406678C8 (MiClusterVadActive.c)
 */

__int64 MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ...)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned __int64 v8; // r13
  __int64 TopLevelPfn; // rax
  unsigned __int64 v10; // r15
  volatile LONG *SharedVm; // rbx
  char v12; // al
  __int64 **Address; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v17; // r10
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  unsigned __int64 valid; // rax
  unsigned int v34; // ecx
  __int64 v35; // [rsp+20h] [rbp-40h]
  __int128 v36; // [rsp+28h] [rbp-38h] BYREF
  __int64 v37; // [rsp+38h] [rbp-28h]
  _OWORD v38[2]; // [rsp+40h] [rbp-20h] BYREF
  int v40; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v41; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v43; // [rsp+C0h] [rbp+60h] BYREF
  va_list va1; // [rsp+C0h] [rbp+60h]
  va_list va2; // [rsp+C8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  v3 = v43;
  v37 = 0LL;
  v4 = a3;
  v36 = 0LL;
  v6 = (__int64)(v41 << 25) >> 16;
  LODWORD(v43) = v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL;
  v7 = 2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 )
    ++dword_140C13544;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v35 = v10 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v10 == PsIdleProcess )
  {
    ++dword_140C13594;
    goto LABEL_49;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 && (*(_DWORD *)(v10 + 2172) & 0x1000) != 0 )
  {
    ++dword_140C13590;
LABEL_49:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_51;
  }
  if ( (_KPROCESS *)v10 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
LABEL_13:
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 24) = v35;
    if ( (_DWORD)v43 )
    {
      *(_BYTE *)(v3 + 37) |= 1u;
      SharedVm = (volatile LONG *)MiGetSharedVm(v35);
      v12 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
    }
    else
    {
      v12 = MiLockWorkingSetShared(v35);
    }
    *(_BYTE *)(v3 + 36) = v12;
    if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    {
      Address = 0LL;
    }
    else
    {
      MiLockVadTree(1);
      Address = MiLocateAddress(v6);
      MiUnlockVadTree(1, 0x11u);
      if ( !Address )
      {
        ++dword_140C135A0;
LABEL_24:
        MiUnlockStealVm(v3, v14);
        ++dword_140C13560;
        return v7;
      }
      if ( !(unsigned int)MiVadPagesTradable((__int64)Address) )
      {
        if ( ((_DWORD)Address[6] & 0x70) != 0x40 )
          goto LABEL_76;
        *(_DWORD *)(v3 + 8) |= 0x800u;
      }
    }
    if ( (_DWORD)v43 )
    {
      if ( !MiSmallVaStillMapsFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
      {
        ++dword_140C135AC;
        goto LABEL_24;
      }
      v15 = v41;
    }
    else
    {
      v43 = 0LL;
      if ( (unsigned int)MiFastLockLeafPageTable(v35, v6, 0)
        && (memset(v38, 0, sizeof(v38)),
            MiFillPteHierarchy(v6, (unsigned __int64 *)v38),
            v18 = *((_QWORD *)v38 + v17),
            v14 = (int)v17 - 1,
            v19 = *((_QWORD *)v38 + v14),
            v43 = v19,
            v18) )
      {
        v15 = v41;
      }
      else
      {
        v15 = v41;
        valid = MiLockLowestValidPageTable(v35, v41, (unsigned __int64 *)va1);
        v19 = v43;
        v18 = valid;
      }
      *(_QWORD *)(v3 + 40) = v18;
      if ( v19 != v15 )
        goto LABEL_24;
      v41 = MI_READ_PTE_LOCK_FREE(v19);
      if ( (v41 & 1) == 0
        || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)va) >> 12) & 0xFFFFFFFFFFLL) != v8 )
      {
        goto LABEL_24;
      }
    }
    if ( v8 > qword_140C65820 )
      goto LABEL_24;
    if ( !_bittest64((const signed __int64 *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL), 0x36u) )
      goto LABEL_24;
    v14 = *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF)) != a1
      || v14 < 0
      || (v14 & 0x20000000000000LL) != 0
      || (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0) )
    {
      goto LABEL_24;
    }
    if ( (*(_DWORD *)v3 & 0x800000) != 0 )
    {
      if ( Address )
      {
        v34 = *((_DWORD *)Address + 12);
        if ( MiVadPageSizes[(v34 >> 19) & 3] == 16
          && (v34 & 0x200000) != 0
          && (unsigned int)MiClusterVadActive(Address, a2, v3 + 120) )
        {
          ++dword_140C135A4;
          goto LABEL_77;
        }
      }
    }
    if ( (*(_DWORD *)(v3 + 8) & 0x800) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v15) )
      return 1LL;
LABEL_76:
    ++dword_140C135A0;
LABEL_77:
    v7 = 0;
    goto LABEL_24;
  }
  if ( !MiTryToAcquireExpansionLockAtDpc((__int64)&v36) )
  {
    ++dword_140C13598;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_51:
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v4);
    return 0LL;
  }
  v40 = MiPrepareAttachThread(v10, v10 + 1664);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v36);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v24 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v4);
  if ( v40 )
  {
    *(_QWORD *)(v3 + 64) = v10 + 1664;
    KeForceAttachProcess(v10, v3 + 72);
    goto LABEL_13;
  }
  ++dword_140C1359C;
  return 0LL;
}
