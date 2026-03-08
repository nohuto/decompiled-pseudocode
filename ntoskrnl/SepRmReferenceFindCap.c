/*
 * XREFs of SepRmReferenceFindCap @ 0x1405B7498
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SeComputeCreatorDeniedRights @ 0x140311EB0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SeRmReferenceFindCapName @ 0x1405B7318 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlLookupEntryHashTable @ 0x1402B7DA0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1402CC980 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B5A90 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x140739C10 (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _RTL_DYNAMIC_HASH_TABLE *v6; // rbx
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rdi
  struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  memset(&Context, 0, sizeof(Context));
  *a2 = 0LL;
  v4 = -1073741275;
  CurrentThread = KeGetCurrentThread();
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
    if ( SepRmEnforceCap )
    {
      v7 = SepComputeSidSignature(Sid1);
      for ( i = RtlLookupEntryHashTable(v6, v7, &Context); ; i = RtlGetNextEntryHashTable(v6, &Context) )
      {
        v9 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v9;
          return 0;
        }
      }
    }
    SepRmDereferenceCapTable((volatile signed __int64 *)v6);
  }
  return v4;
}
