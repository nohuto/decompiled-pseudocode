/*
 * XREFs of SepRmReferenceFindCap @ 0x140597D94
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x1402D0420 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140373854 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeRmReferenceFindCapName @ 0x140597C14 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     RtlGetNextEntryHashTable @ 0x1402FAD50 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x14035F6E0 (RtlLookupEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x1405962D0 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x14070F424 (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  _RTL_DYNAMIC_HASH_TABLE *v6; // rdi
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  CurrentThread = KeGetCurrentThread();
  v5 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
  v6 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)&SepRmCapTable[1]) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    if ( !SepRmEnforceCap )
      goto LABEL_13;
    v7 = SepComputeSidSignature(Sid1);
    NextEntryHashTable = RtlLookupEntryHashTable(v6, v7, &Context);
    if ( !NextEntryHashTable )
      goto LABEL_13;
    do
    {
      if ( RtlEqualSid(Sid1, NextEntryHashTable[1].Linkage.Flink) == 1 )
        break;
      NextEntryHashTable = RtlGetNextEntryHashTable(v6, &Context);
    }
    while ( NextEntryHashTable );
    if ( NextEntryHashTable )
    {
      *a2 = NextEntryHashTable;
      return 0;
    }
    else
    {
LABEL_13:
      SepRmDereferenceCapTable((volatile signed __int64 *)v6);
    }
  }
  return v5;
}
