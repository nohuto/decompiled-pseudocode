/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140AE28EC
 * Callers:
 *     IovCancelIrp @ 0x140AC2448 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x140AC2B60 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACD6CC (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140ACD954 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x140ACD9CC (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x140ACDAFC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x140ACDE10 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140ACDE98 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp1 @ 0x140ACE6E8 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140ACE760 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x140ACE7E4 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACE99C (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140ACEC28 (VfIrpWatermark.c)
 *     VfPendingMoreProcessingRequired @ 0x140AD2970 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140AD2BEC (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140ADE158 (VfPacketReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE2768 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405D25E4 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405D262C (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140AC344C (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

__int64 __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  char **v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  KIRQL v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 6) == 0;
  v13 = 0;
  if ( v1 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    v3 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (__int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v3 >> 12))),
        v3);
    }
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v4 = (char *)(a1 + 4);
      v5 = (char *)a1[4];
      v6 = (char **)a1[5];
      if ( *((_QWORD **)v5 + 1) != a1 + 4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)v5 + 1) = v6;
      a1[5] = a1 + 4;
      *(_QWORD *)v4 = v4;
      if ( *(char **)v5 == v5 )
      {
        v7 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)((v5 - (_BYTE *)ViIrpDatabase) >> 4));
        *v7 = 0LL;
        v7[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  v8 = *((unsigned __int8 *)a1 + 16);
  v9 = (_QWORD *)a1[4];
  result = KxReleaseSpinLock(a1 + 1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v1 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v1 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( v9 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 2LL);
  }
  return result;
}
