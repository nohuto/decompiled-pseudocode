/*
 * XREFs of MmCleanProcessAddressSpace @ 0x14071FAC8
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214DB4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetNextVad @ 0x14021510C (MiGetNextVad.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140275130 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402751A0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1402752F0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140275334 (MiReferenceVad.c)
 *     MiGetProcessPartition @ 0x140275574 (MiGetProcessPartition.c)
 *     MiUnlockVad @ 0x140289B80 (MiUnlockVad.c)
 *     MiReturnResident @ 0x140292CF0 (MiReturnResident.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C82C (LOCK_ADDRESS_SPACE.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     PsReturnProcessQuota @ 0x1402EA0CC (PsReturnProcessQuota.c)
 *     MiGetFirstVad @ 0x14032A26C (MiGetFirstVad.c)
 *     MiBeginProcessClean @ 0x140342310 (MiBeginProcessClean.c)
 *     MiCleanCfg @ 0x140363724 (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x14036439C (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x14036651C (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140367034 (MiDeleteCloneZombies.c)
 *     MiClearCommitReleaseState @ 0x14061806C (MiClearCommitReleaseState.c)
 *     MiReturnProcessCommitment @ 0x1406566D8 (MiReturnProcessCommitment.c)
 *     MiContractWsSwapPageFile @ 0x140681680 (MiContractWsSwapPageFile.c)
 *     MiCleanVad @ 0x14071F400 (MiCleanVad.c)
 *     MiDereferenceSession @ 0x1407E1140 (MiDereferenceSession.c)
 *     VmpCleanProcessAddressSpace @ 0x1409DD154 (VmpCleanProcessAddressSpace.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 */

char __fastcall MmCleanProcessAddressSpace(ULONG_PTR a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  int v9; // ebp
  char *FirstVad; // rax
  char *v11; // rbx
  char *v12; // r12
  unsigned __int64 NextVad; // rax
  BOOL v14; // ebx
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  ULONG_PTR v17; // rbx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 ProcessPartition; // rax
  unsigned __int32 v21; // ett
  __int64 v22; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+80h] [rbp+8h]

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
      PsReturnProcessQuota(a1, v1, *(_QWORD *)(a1 + 1776) - 4LL);
      ProcessPartition = MiGetProcessPartition(a1);
      MiReturnResident(ProcessPartition, *(_QWORD *)(a1 + 1776) - 4LL);
      v4 = *(_DWORD *)(a1 + 1124);
      do
      {
        v21 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v4 & 0xFFFFF3FF | 0x400, v4);
      }
      while ( v21 != v4 );
      v19 = (*(_DWORD *)(a1 + 1124) & 0x10000) == 0;
LABEL_32:
      if ( !v19 )
        LOBYTE(v4) = MiDereferenceSession();
      return v4;
    }
LABEL_31:
    v19 = (v3 & 0x10000) == 0;
    goto LABEL_32;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( (_BYTE)v4 != 96 )
    goto LABEL_31;
LABEL_6:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v25 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1680);
  v8 = v6;
LABEL_7:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    FirstVad = (char *)MiGetFirstVad(a1);
    v11 = FirstVad;
    if ( !FirstVad )
      break;
    MiReferenceVad((__int64)FirstVad);
    while ( 1 )
    {
      v12 = v11;
      NextVad = MiGetNextVad((unsigned __int64)v11);
      v11 = (char *)NextVad;
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
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 376LL);
  if ( v15 )
  {
    v22 = MiDeleteAweInfoPages(v15);
    if ( v22 )
    {
      *(_QWORD *)(a1 + 2032) = 0LL;
      MiReturnProcessCommitment(a1, v22);
    }
  }
  v16 = *(_QWORD **)(a1 + 1408);
  if ( v16 && *v16 )
    *v16 = 0LL;
  MiDeleteCloneZombies(a1, 0);
  v17 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  PsReturnProcessQuota(a1, v18, v17);
  LOBYTE(v4) = MiReturnResident(v8, v17);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = MiDereferenceSession();
  if ( v25 )
    LOBYTE(v4) = MiContractWsSwapPageFile(v8);
  return v4;
}
