/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x1406404D8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x140A37C98 (MiPrepareToHotPatchImage.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A395A0 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x140A368B0 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r15
  int v12; // ebx
  __int64 v13; // rax
  __int16 v14; // bx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  _KPROCESS *v19; // r9
  int v20; // r13d
  __int64 v21; // r9
  _DWORD *Mdl; // rax
  _DWORD *v23; // rdi
  __int64 v24; // r14
  _QWORD *v25; // r15
  unsigned __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rbx
  unsigned int v32; // eax
  unsigned __int8 v33; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v35; // r8
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  int v41; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h]
  __int64 v43; // [rsp+40h] [rbp-98h]
  __int64 v44; // [rsp+48h] [rbp-90h]
  int v45; // [rsp+50h] [rbp-88h] BYREF
  _KPROCESS *v46; // [rsp+58h] [rbp-80h]
  __int64 v47; // [rsp+60h] [rbp-78h]
  _DWORD *v48; // [rsp+68h] [rbp-70h]
  unsigned __int64 v49; // [rsp+70h] [rbp-68h]
  _KPROCESS *v50; // [rsp+78h] [rbp-60h]
  __int64 v51; // [rsp+80h] [rbp-58h]
  __int64 v52; // [rsp+88h] [rbp-50h] BYREF
  __int64 v53[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v57; // [rsp+F8h] [rbp+20h]

  v53[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v46 = Process;
  v50 = Process;
  v5 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = *a1;
  v44 = v6;
  v51 = *a1;
  v48 = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v47 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v49);
  v43 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  BugCheckParameter2 = a2;
  v11 = 0LL;
  v12 = 1;
  v41 = 1;
  v57 = MiLockWorkingSetShared(v5);
  while ( v7 <= v49 )
  {
    if ( v12 || (v7 & 0xFFF) == 0 )
    {
      if ( v11 )
        MiUnlockPageTableInternal(v5, v11);
      v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 12) & 0x7F, v57, 0);
      v41 = 0;
    }
    v13 = MI_READ_PTE_LOCK_FREE(v7);
    v14 = v13;
    v52 = v13;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v16 = *(_QWORD *)(v15 + 40);
      if ( v16 >= 0 )
        goto LABEL_22;
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 >= 0 && (v16 & 0x10000000000LL) == 0 )
      {
        if ( v17 )
          goto LABEL_22;
      }
      if ( (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(v44, BugCheckParameter2 >> 12, 0, v53) )
        goto LABEL_22;
      if ( (v14 & 0x800) != 0 )
      {
        MiUnlockPageTableInternal(v5, v11);
        MiUnlockWorkingSetShared(v5, v57);
        v18 = -1073741755;
        v6 = v44;
        goto LABEL_17;
      }
      v20 = MiCopyOnWrite(BugCheckParameter2, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v20 >= 0 )
      {
        if ( (v14 & 0x200) == 0 )
          v47 = ++v8;
LABEL_22:
        v7 += 8LL;
        BugCheckParameter2 += 4096LL;
        v6 = v44;
        v12 = v41;
      }
      else
      {
        MiUnlockPageTableInternal(v5, v11);
        MiUnlockWorkingSetShared(v5, v57);
        v11 = 0LL;
        MiCopyOnWriteCheckConditions(v5, (unsigned int)v20);
        v12 = 1;
        v41 = 1;
        MiLockWorkingSetShared(v5);
        v6 = v44;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v5, v11);
      MiUnlockWorkingSetShared(v5, v57);
      v11 = 0LL;
      v12 = 1;
      v41 = 1;
      MiLockWorkingSetShared(v5);
    }
  }
  MiUnlockPageTableInternal(v5, v11);
  MiUnlockWorkingSetShared(v5, v57);
  Mdl = (_DWORD *)IopAllocateMdl(a2, (_DWORD)a3 << 12, 0, v21, 0LL, 0);
  v23 = Mdl;
  v48 = Mdl;
  if ( Mdl )
  {
    MiProbeAndLockPages(Mdl, 0, 0);
    *((_WORD *)v23 + 5) |= 0x80u;
    v24 = 0LL;
    v25 = v23 + 12;
    v26 = (unsigned __int64)&v23[2 * a3 + 12];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v29 = 4;
      if ( CurrentIrql != 2 )
      {
        v29 = (-1LL << (CurrentIrql + 1)) & 4;
        v26 = (unsigned __int64)&v23[2 * a3 + 12];
      }
      SchedulerAssist[5] |= v29;
    }
    while ( 1 )
    {
      v30 = v24;
      if ( (unsigned __int64)v25 >= v26 )
        break;
      v31 = 48LL * *v25 - 0x220000000000LL;
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
        v30 = v24;
      }
      v32 = ((*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
      if ( (*(_BYTE *)(v31 + 34) & 8) == 0 )
        v32 = ((*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
      v24 = v30 + 1;
      if ( *(unsigned __int16 *)(v31 + 32) <= v32 )
        v24 = v30;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v25;
      v26 = (unsigned __int64)&v23[2 * a3 + 12];
    }
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v37 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( v24 )
    {
      v38 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, ((_DWORD)a3 << 12) + a2 - 1, *(_DWORD *)(v38 + 60), *(_DWORD *)(v38 + 72), v24);
    }
    v39 = a1[7];
    if ( v39 )
      *(_QWORD *)v23 = v39;
    a1[7] = (__int64)v23;
    v18 = 0;
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_17:
  v19 = v46;
  if ( v8 )
  {
    v40 = v8 + (((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31) | *(_DWORD *)(v6 + 52) & 0x7FFFFFFF);
    *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (v8
                                                   + ((*(unsigned __int8 *)(v6 + 34) << 31) | *(_DWORD *)(v6 + 52) & 0x7FFFFFFF))) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v40 >> 31;
  }
  if ( v43 != v8 )
    MiReturnFullProcessCommitment(v19, v43 - v8);
  return v18;
}
