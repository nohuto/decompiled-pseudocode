/*
 * XREFs of KiCaptureDumpPostRecovery @ 0x140578810
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiBugCheckWriteCrashDump @ 0x1405676EC (KiBugCheckWriteCrashDump.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405684CC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x140578228 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405786C8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 */

char __fastcall KiCaptureDumpPostRecovery(__int64 a1)
{
  char v1; // bl
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  LOBYTE(v3) = 0;
  v4 = 0;
  v1 = KiBugCheckRecoveryPrepareForCrashDump(&v4, (bool *)&v3);
  result = KiInvokeBugCheckEntryCallbacks(8u, 0LL, 0);
  if ( v1 )
  {
    KiBugCheckWriteCrashDump((__int64)&KiCrashDumpContext);
    return KiBugCheckRecoveryCleanupFromCrashDump(v4, v3);
  }
  return result;
}
