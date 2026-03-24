/*
 * XREFs of CmpInitializeLazyWriters @ 0x140799DE8
 * Callers:
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x140341AF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x1406F4AF0 (PoRegisterPowerSettingCallback.c)
 *     CmpCreateRegistryThread @ 0x14079A1D4 (CmpCreateRegistryThread.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  _QWORD *v0; // r14
  __int64 v1; // rsi
  __int64 v2; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v0 = &unk_140C003E8;
  Handle = 0LL;
  dword_140C00400 = CmpLazyFlushIntervalInSeconds;
  v1 = 0LL;
  dword_140C004C0 = CmpLazyReconcileIntervalInSeconds;
  dword_140C00580 = CmpLazyLocalizeIntervalInSeconds;
  do
  {
    KeInitializeTimerEx(&CmpLazyWriterData + 3 * v1, NotificationTimer);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v1 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v1 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v1);
    *v0 = 0LL;
    if ( (int)CmpCreateRegistryThread(&Handle, v2, CmpLazyWriteWorker, &CmpLazyWriterData + 3 * v1) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v1, 0LL, 0LL);
    NtClose(Handle);
    v1 = (unsigned int)(v1 + 1);
    v0 += 24;
  }
  while ( (unsigned int)v1 < 3 );
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
