/*
 * XREFs of SshInitialize @ 0x140B03360
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140791480 (ExUnsubscribeWnfStateChange.c)
 *     CmSiRWLockInitialize @ 0x1407F3B30 (CmSiRWLockInitialize.c)
 *     SSHSupportEtwRegister @ 0x1408455A0 (SSHSupportEtwRegister.c)
 *     SSHSupportEtwUnregister @ 0x1409A0CB8 (SSHSupportEtwUnregister.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1409A0CD4 (SSHSupportUnregisterPowerSettingCallback.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A1190 (SleepstudyHelperDestroyLibrary.c)
 *     SshpSubscribeCallbacks @ 0x140B019D0 (SshpSubscribeCallbacks.c)
 *     SshpSessionManagerInitialize @ 0x140B01B6C (SshpSessionManagerInitialize.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  NTSTATUS v1; // ebx
  union _RTL_RUN_ONCE *v2; // rax
  union _RTL_RUN_ONCE *v3; // rax
  __int64 v4; // rdx

  switch ( a1 )
  {
    case 0:
      CmSiRWLockInitialize((PRTL_RUN_ONCE)&SshpLibraryListLock);
      qword_140C1C818 = (__int64)&SshpLibraryList;
      v2 = (union _RTL_RUN_ONCE *)&unk_140C1C850;
      SshpLibraryList = (__int64)&SshpLibraryList;
      do
      {
        CmSiRWLockInitialize(v2 - 2);
        v3[1].Value = (unsigned __int64)v3;
        v3->Value = (unsigned __int64)v3;
        v2 = v3 + 4;
      }
      while ( v4 != 1 );
      SshpSessionId = 0LL;
      SshpSessionGuid = 0LL;
      SshpInitialized = 1;
      return 0;
    case 1:
      v1 = SshpAlpcInitialize();
      if ( v1 >= 0 )
      {
        SshpSessionManagerInitialize();
        return (unsigned int)v1;
      }
      goto LABEL_15;
    case 3:
      v1 = SSHSupportEtwRegister();
      if ( v1 < 0 )
        goto LABEL_15;
      SshpTraceHandleRegistered = 1;
      v1 = SshpSubscribeCallbacks();
      if ( v1 < 0 )
        goto LABEL_15;
      return 0;
  }
  v1 = -1073741811;
LABEL_15:
  if ( SshpPowerSettingHandleInitialized )
  {
    SSHSupportUnregisterPowerSettingCallback();
    SshpPowerSettingHandleInitialized = 0;
  }
  if ( SshpWnfSubscriptionInitialized )
  {
    ExUnsubscribeWnfStateChange((void *)SshpWnfSubscription);
    SshpWnfSubscriptionInitialized = 0;
  }
  if ( SshpTraceHandleRegistered )
  {
    SSHSupportEtwUnregister();
    SshpTraceHandleRegistered = 0;
  }
  while ( (__int64 *)SshpLibraryList != &SshpLibraryList )
    SleepstudyHelperDestroyLibrary((ULONG *)SshpLibraryList);
  SshpInitialized = 0;
  return (unsigned int)v1;
}
