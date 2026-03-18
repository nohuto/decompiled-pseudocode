/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC
 * Callers:
 *     IovCancelIrp @ 0x140A805A8 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x140A80D10 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140A8BD60 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140A8C014 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x140A8C08C (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x140A8C1BC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x140A8C54C (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140A8C5D4 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp1 @ 0x140A8CDBC (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140A8CE34 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x140A8CEB8 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140A8D070 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x140A8D2FC (VfIrpWatermark.c)
 *     VfPendingMoreProcessingRequired @ 0x140A90FE0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140A91260 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140A9C190 (VfPacketReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140602294 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1406022DC (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140A81AE8 (VfUtilAddressRangeRemoveCheckEmpty.c)
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
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v3 >> 12))),
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
  KxReleaseSpinLock(a1 + 1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
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
  }
  __writecr8(v8);
  if ( v9 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 2LL);
  }
  return result;
}
