__int64 __fastcall PopWin32CalloutWatchdogCallback(
        __int64 a1,
        unsigned int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v10; // eax
  int v12; // [rsp+50h] [rbp-38h] BYREF
  ULONG_PTR v13; // [rsp+58h] [rbp-30h] BYREF
  ULONG_PTR v14; // [rsp+60h] [rbp-28h]

  Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage();
  if ( (unsigned int)Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage() )
  {
    v10 = *(_DWORD *)(a1 + 20);
    v14 = 0LL;
    v12 = v10;
    v13 = a3;
    a4 = 0LL;
    if ( !(unsigned int)PopInvokeWin32Callout(0x2Bu, (__int64)&v13, 1u, &v12) )
      a4 = v14;
  }
  if ( PopWin32CalloutWatchdogBugcheckEnabled )
    KeBugCheckEx(0x1A2u, a3, a4, BugCheckParameter3, BugCheckParameter4);
  return DbgkWerCaptureLiveKernelDump(
           L"PoW32kWatchdog",
           a2,
           a3,
           a4,
           BugCheckParameter3,
           BugCheckParameter4,
           0LL,
           0LL,
           1);
}
