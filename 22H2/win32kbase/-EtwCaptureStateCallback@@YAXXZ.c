/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C013833C
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C006FEE4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C013873C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C013D9BC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  struct tagTHREADINFO *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  unsigned int v11; // edi
  char Flink; // bl
  _DWORD *v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  __int64 v18; // rbx
  _QWORD *i; // rsi
  unsigned int ThreadId; // r13d
  char ThreadInfoFlags; // al
  int v22; // ecx
  char v23; // r15
  char v24; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v26 = 0;
  v25 = 0;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v5 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v9 = *v10;
              v10[2] = 0LL;
              if ( !*(_DWORD *)(v9 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x8000000000040000uLL) != 0
    && (qword_1C0283058 & 0x8000000000040000uLL) == qword_1C0283058 )
  {
    if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v11 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( v11 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
      {
        Flink = (char)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
        v13 = (_DWORD *)SGDGetUserSessionState(v5, 0x8000000000040000uLL, v6, v7);
        McTemplateK0qqqqq_EtwWriteTransfer(
          *v13,
          (unsigned int)&WaitCursorEvent,
          v14,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          *v13,
          Flink,
          v11);
      }
    }
  }
  v15 = 0x8000000000080000uLL;
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x8000000000080000uLL) != 0
    && (qword_1C0283058 & 0x8000000000080000uLL) == qword_1C0283058 )
  {
    v16 = grpWinStaList;
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( 1 )
    {
      v27 = v16;
      if ( !v16 )
        break;
      v18 = *(_QWORD *)(v16 + 16);
      if ( v18 )
      {
        do
        {
          for ( i = *(_QWORD **)(v18 + 176); i != (_QWORD *)(v18 + 176); i = (_QWORD *)*i )
          {
            ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(i - 93));
            ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(i - 93));
            v22 = *((_DWORD *)i + 118);
            v24 = ThreadInfoFlags;
            if ( v22 )
              v23 = v17 - v22;
            else
              v23 = 0;
            EtwpGetLastInputProcessTime((struct tagQ *const)*(i - 39), v17, &v26, &v25, 0LL, 0LL);
            LOBYTE(v7) = Microsoft_Windows_Win32kEnableBits;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
              McTemplateK0qqqqq_EtwWriteTransfer(
                (_DWORD)v5,
                (unsigned int)&ThreadInfoRundownEvent,
                v6,
                ThreadId,
                v24,
                v23,
                v26,
                v25);
          }
          v18 = *(_QWORD *)(v18 + 32);
        }
        while ( v18 );
        v16 = v27;
      }
      v16 = *(_QWORD *)(v16 + 8);
    }
  }
  UserSessionSwitchLeaveCrit((__int64)v5, v15, v6, v7);
}
