/*
 * XREFs of SshpUninitialize @ 0x140A935A4
 * Callers:
 *     SshInitialize @ 0x140A40584 (SshInitialize.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x1406B2A90 (ExUnsubscribeWnfStateChange.c)
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408FB990 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportEtwUnregister @ 0x1408FBAB8 (SSHSupportEtwUnregister.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1408FBAD4 (SSHSupportUnregisterPowerSettingCallback.c)
 */

__int64 *SshpUninitialize()
{
  REGHANDLE v0; // rcx
  __int64 *result; // rax

  if ( SshpPowerSettingHandleInitialized )
  {
    SSHSupportUnregisterPowerSettingCallback();
    SshpPowerSettingHandleInitialized = 0;
  }
  if ( SshpWnfSubscriptionInitialized )
  {
    ExUnsubscribeWnfStateChange((struct _EX_RUNDOWN_REF *)SshpWnfSubscription);
    SshpWnfSubscriptionInitialized = 0;
  }
  if ( SshpTelemetryHandleRegistered )
  {
    v0 = qword_140C04740;
    qword_140C04740 = 0LL;
    dword_140C04720 = 0;
    EtwUnregister(v0);
    SshpTelemetryHandleRegistered = 0;
  }
  if ( SshpTraceHandleRegistered )
  {
    SSHSupportEtwUnregister();
    SshpTraceHandleRegistered = 0;
  }
  while ( 1 )
  {
    result = &SshpLibraryList;
    if ( (__int64 *)SshpLibraryList == &SshpLibraryList )
      break;
    SleepstudyHelperDestroyLibrary((ULONG *)SshpLibraryList);
  }
  SshpInitialized = 0;
  return result;
}
