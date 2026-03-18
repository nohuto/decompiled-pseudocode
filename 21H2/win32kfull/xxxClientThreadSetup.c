/*
 * XREFs of xxxClientThreadSetup @ 0x1C00EF540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00EF5D4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 xxxClientThreadSetup()
{
  unsigned int Count; // eax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v4; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v1);
  EtwTraceBeginCallback(84LL);
  v2 = KeUserModeCallback(84LL, 0LL, 0LL, &v5, &v4);
  EtwTraceEndCallback(84LL);
  EnterCrit(1LL, 0LL);
  return v2;
}
