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
