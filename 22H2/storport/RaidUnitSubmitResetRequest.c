/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C004BF64
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C0047CE0 (RaUnitResetBusSrb.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006370 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000AF90 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0036910 (RaidUnitStartDeviceBusy.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0045650 (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  unsigned int FullCreateOptions; // eax
  __int64 ContiguousIoResources; // rax
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  KSPIN_LOCK *v11; // rcx
  _QWORD *Pool; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL v15; // bl
  unsigned int v16; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  v20 = 0LL;
  FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)FullCreateOptions == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  if ( FullCreateOptions == 16 )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 468LL) + 7) & 0xFFFFFFF8) + 1088,
                              (int)a2,
                              *(_QWORD *)(a1 + 24));
    if ( ContiguousIoResources )
    {
      *(_QWORD *)&v20 = ContiguousIoResources + 32;
      *((_QWORD *)&v20 + 1) = ContiguousIoResources + 832;
      *((_QWORD *)&v19 + 1) = ContiguousIoResources + 1088;
      RaidZeroXrb(ContiguousIoResources + 32, ContiguousIoResources + 832, 0, 0LL);
      LODWORD(v19) = -1;
      goto LABEL_8;
    }
LABEL_23:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v16);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1728), 1, 0) )
    goto LABEL_23;
  v8 = *(_OWORD *)(a1 + 1712);
  v19 = *(_OWORD *)(a1 + 1696);
  v20 = v8;
LABEL_8:
  if ( (qword_1C0069310 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 449) & 1) != 0 || *(char *)(a1 + 448) < 0 )
    goto LABEL_22;
  v9 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = 1LL;
LABEL_21:
    RaidUnitStartDeviceBusy(v9, (__int64)a2, v10);
    goto LABEL_22;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_22:
    v15 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, (__int64)&v19);
    KeLowerIrql(v15);
    return 259LL;
  }
  v11 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1744) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 2) != 0
    || (Pool = RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x4F506152u, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    v10 = 0LL;
    v9 = a1;
    goto LABEL_21;
  }
  Pool[2] = a2;
  v13 = *(_QWORD *)(a1 + 1744) + 72LL;
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
    __fastfail(3u);
  *Pool = v14;
  Pool[1] = v13;
  *(_QWORD *)(v14 + 8) = Pool;
  *(_QWORD *)v13 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return 259LL;
}
