/*
 * XREFs of Win32kBaseUserInitialize @ 0x1C0068620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0068D34 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x1C007E308 (InitializeGreCSRSS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     IVStartupWorkerThread @ 0x1C01BA4A8 (IVStartupWorkerThread.c)
 *     InitializePowerRequestList @ 0x1C0297790 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2)
{
  __int64 v2; // rbp
  __int64 BugCheckParameter4; // rdi
  int v5; // ebx
  int v6; // eax
  char v7; // al
  __int64 result; // rax
  int v9; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rax
  int v12; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      14,
      28,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  if ( !gpepCSRSS )
  {
    BugCheckParameter4 = PsGetCurrentProcess(Handle, a2);
    v5 = -1073741637;
    if ( qword_1C0256A38 )
      v6 = qword_1C0256A38();
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      v7 = (char)qword_1C0256A40;
      if ( qword_1C0256A40 )
        v7 = qword_1C0256A40();
      if ( !v7 )
        KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
    }
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    {
      ObfReferenceObject(gpepCSRSS);
      result = InitializePowerRequestList(Handle);
      if ( (int)result < 0 )
        return result;
      if ( qword_1C0256A48 )
        v9 = qword_1C0256A48();
      else
        v9 = -1073741637;
      if ( v9 >= 0 )
      {
        if ( qword_1C0256A50 )
          v5 = qword_1C0256A50(v2);
        if ( v5 < 0 )
          return (unsigned int)v5;
      }
      byte_1C0250768 = 0;
      if ( (unsigned int)InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v11 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v11 + 820) |= 0x400000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        v5 = UserInitialize();
        if ( v5 >= 0 && isInputVirtualizationEnabled() )
          v5 = IVStartupWorkerThread();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v12,
            14,
            29,
            (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
        }
        return (unsigned int)v5;
      }
    }
  }
  return 3221225473LL;
}
