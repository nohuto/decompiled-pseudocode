/*
 * XREFs of SshInitialize @ 0x140A3F9B4
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CmSiRWLockInitialize @ 0x1407905A0 (CmSiRWLockInitialize.c)
 *     SshpQueryRegistryValues @ 0x140791780 (SshpQueryRegistryValues.c)
 *     SSHSupportEtwRegister @ 0x140791A70 (SSHSupportEtwRegister.c)
 *     SshpSubscribeCallbacks @ 0x140A40044 (SshpSubscribeCallbacks.c)
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  _RTL_RUN_ONCE *v1; // rax
  _RTL_RUN_ONCE *v2; // rax
  __int64 v3; // rdx
  int v4; // ebx

  if ( !a1 )
  {
    CmSiRWLockInitialize(&SshpLibraryListLock);
    qword_140C1E338 = (__int64)&SshpLibraryList;
    SshpLibraryList = (__int64)&SshpLibraryList;
    v1 = (_RTL_RUN_ONCE *)&unk_140C1E370;
    do
    {
      CmSiRWLockInitialize(v1 - 2);
      v2[1].Value = (unsigned __int64)v2;
      v2->Value = (unsigned __int64)v2;
      v1 = v2 + 4;
    }
    while ( v3 != 1 );
    SshpSessionId = 0LL;
    SshpSessionGuid = 0LL;
    SshpInitialized = 1;
    return 0;
  }
  if ( a1 != 3 )
  {
    v4 = -1073741811;
LABEL_12:
    SshpUninitialize();
    return (unsigned int)v4;
  }
  v4 = SSHSupportEtwRegister();
  if ( v4 < 0 )
    goto LABEL_12;
  SshpTraceHandleRegistered = 1;
  v4 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C04720, 0LL, 0LL);
  if ( v4 < 0 )
    goto LABEL_12;
  SshpTelemetryHandleRegistered = 1;
  v4 = SshpSubscribeCallbacks();
  if ( v4 < 0 )
    goto LABEL_12;
  SshpQueryRegistryValues();
  return 0;
}
