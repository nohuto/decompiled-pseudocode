/*
 * XREFs of ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002975C
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C120 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEAH@Z @ 0x180024B50 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAUIDuckingController@@PEA.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026030 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdUpdateStreamClassPolicyGains(
        DWORD a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct IDuckingController *a5,
        int *a6)
{
  struct CStreamClassPolicyGainsWrapper *v10; // rdi
  int v11; // eax
  int StreamClassPolicyGainsForEndpoint; // ebx
  TSSession *v14; // [rsp+30h] [rbp-28h] BYREF
  struct CStreamClassPolicyGainsWrapper *v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15[1] = v10;
  v11 = TsSessionFromSessionId(a1, 1, 0LL, &v14);
  if ( v11 )
  {
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      StreamClassPolicyGainsForEndpoint = v11;
  }
  else
  {
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(
                                          v14,
                                          a2,
                                          (struct _RTL_CRITICAL_SECTION **)v15);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
                                            (struct _RTL_CRITICAL_SECTION *)v15[0],
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  }
  if ( v10 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v10);
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
