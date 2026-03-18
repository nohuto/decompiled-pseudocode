/*
 * XREFs of IovCancelIrp @ 0x140AC2448
 * Callers:
 *     IoCancelIrp @ 0x140351890 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140AC2E08 (IovpLogStackTrace.c)
 *     ViWdBeforeCancelIrp @ 0x140ADF23C (ViWdBeforeCancelIrp.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AE2768 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE28EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
