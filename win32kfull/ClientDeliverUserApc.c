/*
 * XREFs of ClientDeliverUserApc @ 0x1C00B8288
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006D360 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0095CF4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00B8314 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 ClientDeliverUserApc()
{
  unsigned int Count; // eax
  __int64 v1; // rcx
  int v3; // [rsp+60h] [rbp+8h] BYREF
  __int64 v4; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  UserSessionSwitchLeaveCrit(v1);
  EtwTraceBeginCallback(85LL);
  KeUserModeCallback(85LL, 0LL, 0LL, &v4, &v3);
  EtwTraceEndCallback(85LL);
  return EnterCrit(1LL, 0LL);
}
