/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1403504CC
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14034FEBC (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiFindBestOutswapPagefile @ 0x140350AFC (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x140351618 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140351710 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140351768 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiValidateMemoryRangeEntries @ 0x1406FA9AC (MiValidateMemoryRangeEntries.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406FAD78 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeReservationRuns @ 0x1406FB270 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406FB2BC (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9B1C (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 *v13; // r12
  unsigned int i; // ebx
  int v15; // esi
  __int64 WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 *v20; // r15
  int v21; // r14d
  __int64 **Address; // rax
  int v23; // ecx
  unsigned __int64 v24; // r9
  struct _KPROCESS *v25; // r15
  __int64 v26; // rdi
  struct _KTHREAD *v27; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v29; // r12
  unsigned int v30; // r8d
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 *v37; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v38[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v41; // [rsp+58h] [rbp-A8h]
  _QWORD *v42; // [rsp+60h] [rbp-A0h]
  _OWORD v43[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+30h]

  v37 = 0LL;
  v38[0] = 0;
  v46 = 0LL;
  v44 = 0LL;
  Processa = Process;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = Process[1].IdealProcessorPadding[5];
  v42 = a4;
  v41 = CurrentThread;
  v9 = *(_QWORD *)(qword_140C4E648 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v38);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v44) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v37);
  memset(v43, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1128;
  ExAcquirePushLockExclusiveEx(v9 + 1128, 0LL);
  v13 = v37;
  for ( i = v38[0]; ; BestOutswapPagefile = i )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, (char *)&v43[2] + 8, v12, BestOutswapPagefile, i, v13);
    if ( v15 >= 0 )
      break;
    if ( i >= 0x10 )
      goto LABEL_49;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v13, i);
    if ( v15 < 0 )
      goto LABEL_49;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v13);
  v17 = (_QWORD *)WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_49:
    v25 = Processa;
    goto LABEL_21;
  }
  v18 = Processa;
  v19 = (__int64)v41;
  *(_QWORD *)&v43[0] = WorkingSetSwapSupport;
  *((_QWORD *)&v43[1] + 1) = v9;
  *(_QWORD *)&v43[1] = (char *)Processa + 1664;
  v37 = &Processa[1].ActiveProcessorsPadding[6];
  --v41->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v19 + 1304) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (int)v37;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        v23 = *((_DWORD *)Address + 12);
        if ( (v23 & 0x70) == 0
          && ((v23 & 0x100000) == 0 || (v23 & 0x400000) == 0 && (v23 & 0xC0000u) < 0x80000)
          && (v23 & 0x100000) != 0 )
        {
          v24 = *a2 + a2[1] - 1;
          if ( (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= v24 >> 12 )
            MiOutSwapWorkingSet(v21, (_DWORD)Address, *a2, v24, (__int64)v43);
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1128;
  }
  v25 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, (__int64)Processa);
  if ( v17[2] < (unsigned __int64)v13 )
  {
    v26 = MiReAllocateWorkingSetSwapSupport(v17);
    if ( v26 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v26;
    }
  }
  v15 = 0;
  v37 = (unsigned __int64 *)v17[3];
  *v42 = v17;
LABEL_21:
  MiFreeReservationRuns(v9, (char *)&v43[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  v39 = 0;
  v27 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v27->ApcState.Process);
  else
    SessionId = -1;
  --v27->SpecialApcDisable;
  v29 = ++v27->AbAllocationRegionCount;
  v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v31 = !_BitScanReverse((unsigned int *)&v32, v30);
    v38[1] = v32;
    if ( v31 )
      break;
    v33 = (__int64)&v27->LockEntries[v32];
    v30 &= ~(1 << v32);
    if ( (*(_BYTE *)(v33 + 26) & 1) != 0
      && (*(_DWORD *)(v33 + 32) & 1) == 0
      && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v33 + 40) == SessionId )
    {
      *(_BYTE *)(v33 + 26) &= ~1u;
      if ( *(_QWORD *)(v33 + 32) )
      {
        if ( v33 )
        {
          *(_BYTE *)(v33 + 32) |= 2u;
          if ( *(__int64 *)(v33 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
          v39 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
          *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v33 + 25) &= ~1u;
          *(_QWORD *)(v33 + 32) = 0LL;
          v34 = (signed __int64)(v33 - (unsigned __int64)v27->LockEntries) / 96;
          if ( v29 == 1 )
            v27->AbEntrySummary |= 1 << v34;
          else
            _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v34);
          goto LABEL_37;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v27, v11, SessionId, 0LL);
LABEL_37:
  --v27->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v27, v11, &v39);
  v31 = v27->SpecialApcDisable++ == -1;
  if ( v31 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v35);
  KiLeaveGuardedRegionUnsafe((__int64)v41);
  *(_QWORD *)&v44 = v37;
  *((_QWORD *)&v44 + 1) = *((_QWORD *)&v43[7] + 1);
  v45 = v43[8];
  LODWORD(v46) = v15;
  EtwTraceWorkingSetSwap(v25);
  return (unsigned int)v15;
}
