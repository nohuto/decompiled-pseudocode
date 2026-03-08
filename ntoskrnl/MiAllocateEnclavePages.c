/*
 * XREFs of MiAllocateEnclavePages @ 0x1406447E4
 * Callers:
 *     MiAllocateEnclavePagesForMdl @ 0x140620C1C (MiAllocateEnclavePagesForMdl.c)
 *     MiGetPageForEnclave @ 0x140645A8C (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x140646394 (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B96A34 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140289900 (MiSetPfnBlink.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnEnclavePage @ 0x140646460 (MiReturnEnclavePage.c)
 */

__int64 __fastcall MiAllocateEnclavePages(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  char v17; // al
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  unsigned int *v28; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v4 = a4;
  v5 = (unsigned int *)(qword_140C65718 + 4LL * (unsigned int)(unsigned __int16)KeNumberNodes * a2);
  if ( (a3 & 2) != 0 )
    v6 = 1LL;
  else
    v6 = (unsigned __int16)KeNumberNodes;
  v7 = 0LL;
  v8 = 0LL;
  v28 = &v5[v6];
  v27 = 0LL;
  v26 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  do
  {
    if ( v8 == v4 )
      break;
    v12 = *(_QWORD *)(a1 + 16) + 25408LL * *v5;
    while ( 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
      v13 = *(_QWORD *)(v12 + 25296);
      if ( v13 == 0x3FFFFFFFFFLL )
        break;
      v14 = 48 * v13 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        goto LABEL_20;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
      if ( *(_QWORD *)(v12 + 25296) == v13 )
      {
LABEL_20:
        v15 = *(_QWORD *)v14 & 0xFFFFFFFFFFLL;
        v16 = *(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFLL;
        if ( v15 == 0x3FFFFFFFFFLL )
          *(_QWORD *)(v12 + 25304) = v16;
        else
          MiSetPfnBlink(48 * v15 - 0x220000000000LL, *(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFLL, 0);
        if ( v16 == 0x3FFFFFFFFFLL )
          *(_QWORD *)(v12 + 25296) = v15;
        else
          *(_QWORD *)(48 * v16 - 0x220000000000LL) = v15 | *(_QWORD *)(48 * v16 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
        _InterlockedDecrement64((volatile signed __int64 *)(v12 + 25280));
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
        MiSetPfnBlink(48 * v13 - 0x220000000000LL, v26, 1);
        v17 = *(_BYTE *)(v14 + 35);
        v7 = 48 * v13 - 0x220000000000LL;
        *(_QWORD *)v14 = 0LL;
        v8 = v27 + 1;
        *(_BYTE *)(v14 + 35) = v17 & 0xEF;
        ++v27;
        v26 = v13;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v32;
      if ( v8 == v32 )
        goto LABEL_30;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 25312));
LABEL_30:
    ++v5;
  }
  while ( v5 != v28 );
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v22 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v8 == v4 || (v31 & 1) == 0 )
    return v7;
  if ( v7 )
  {
    do
    {
      v23 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL;
      if ( v23 == 0x3FFFFFFFFFLL )
        v24 = 0LL;
      else
        v24 = 48 * v23 - 0x220000000000LL;
      MiSetPfnBlink(v7, 0LL, 0);
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
      v7 = v24;
    }
    while ( v24 );
  }
  return 0LL;
}
