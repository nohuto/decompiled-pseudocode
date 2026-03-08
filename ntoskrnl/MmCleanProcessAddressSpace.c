/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1407D4924
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 * Callees:
 *     PsReturnProcessQuota @ 0x14020D064 (PsReturnProcessQuota.c)
 *     MiReturnResident @ 0x1402A52C8 (MiReturnResident.c)
 *     MiGetFirstVad @ 0x1402A5B0C (MiGetFirstVad.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     MiCleanCfg @ 0x1402F86F4 (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x1402F92FC (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x1402FB294 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x1402FBC3C (MiDeleteCloneZombies.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 *     MiClearCommitReleaseState @ 0x140615BBC (MiClearCommitReleaseState.c)
 *     MiReturnProcessCommitment @ 0x140654090 (MiReturnProcessCommitment.c)
 *     MiContractWsSwapPageFile @ 0x14067E2A0 (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x140791B70 (MiDereferenceSession.c)
 *     MiCleanVad @ 0x1407D36F8 (MiCleanVad.c)
 *     VmpCleanProcessAddressSpace @ 0x1409DA2B4 (VmpCleanProcessAddressSpace.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 */

char __fastcall MmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // ebp
  _QWORD *FirstVad; // rax
  void *v11; // rbx
  void *v12; // r12
  unsigned __int64 NextVad; // rax
  BOOL v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  bool v24; // zf
  __int64 ProcessPartition; // rax
  unsigned __int32 v26; // ett
  __int64 v27; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 2288);
  memset(&Event, 0, sizeof(Event));
  if ( v1 )
    VmpCleanProcessAddressSpace();
  v3 = *(_DWORD *)(a1 + 1124);
  if ( (v3 & 0x20) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 1124) & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_6;
      PsReturnProcessQuota((struct _KPROCESS *)a1, v1, *(_QWORD *)(a1 + 1776) - 4LL);
      ProcessPartition = MiGetProcessPartition(a1);
      MiReturnResident(ProcessPartition, *(_QWORD *)(a1 + 1776) - 4LL);
      v4 = *(_DWORD *)(a1 + 1124);
      do
      {
        v26 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v4 & 0xFFFFF3FF | 0x400, v4);
      }
      while ( v26 != v4 );
      v24 = (*(_DWORD *)(a1 + 1124) & 0x10000) == 0;
LABEL_32:
      if ( !v24 )
        LOBYTE(v4) = MiDereferenceSession();
      return v4;
    }
LABEL_31:
    v24 = (v3 & 0x10000) == 0;
    goto LABEL_32;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( (_BYTE)v4 != 96 )
    goto LABEL_31;
LABEL_6:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v30 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1680);
  v8 = v6;
LABEL_7:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    FirstVad = MiGetFirstVad(a1);
    v11 = FirstVad;
    if ( !FirstVad )
      break;
    MiReferenceVad((__int64)FirstVad);
    while ( 1 )
    {
      v12 = v11;
      NextVad = MiGetNextVad((unsigned __int64)v11);
      v11 = (void *)NextVad;
      if ( NextVad )
        MiReferenceVad(NextVad);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v12);
      if ( (unsigned int)MiCleanVad(v12) )
        v9 = 1;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !v11 )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)v11);
      if ( (unsigned int)MiVadDeleted((__int64)v11) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)v11);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v11);
        MiCleanVad(v11);
        goto LABEL_7;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)v11);
    }
    if ( !v9 )
      break;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v7 + 304) = &Event;
  v14 = _InterlockedAdd((volatile signed __int32 *)(v7 + 280), 0xFFFFFFFF) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v14 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1851) & 0x60) == 0x60 )
    MiClearCommitReleaseState(a1 + 1664);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 304) = 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 376LL);
  if ( v17 )
  {
    v27 = MiDeleteAweInfoPages(v17);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 2032) = 0LL;
      MiReturnProcessCommitment(a1, v27);
    }
  }
  v18 = *(_QWORD **)(a1 + 1408);
  if ( v18 && *v18 )
    *v18 = 0LL;
  MiDeleteCloneZombies(a1, 0LL, v15, v16);
  v22 = MiCleanWorkingSet(a1, v19, v20, v21);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  PsReturnProcessQuota((struct _KPROCESS *)a1, v23, v22);
  LOBYTE(v4) = MiReturnResident(v8, v22);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = MiDereferenceSession();
  if ( v30 )
    LOBYTE(v4) = MiContractWsSwapPageFile(v8);
  return v4;
}
