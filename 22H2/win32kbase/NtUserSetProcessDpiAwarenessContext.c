/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C008C4A0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008C630 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C008C7B0 (IsValidKernelDpiAwarenessContext.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 i; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  v4 = a1;
  LOBYTE(a1) = 1;
  v5 = a2;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v9 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v22 = *v9;
          v9[2] = 0LL;
          if ( !*(_DWORD *)(v22 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v9);
        }
      }
    }
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v4) )
    goto LABEL_28;
  if ( (v4 & 0xF) == 1 )
  {
    v21 = PsGetCurrentProcessWin32Process(v11);
    v12 = v21;
    if ( v21 )
    {
      v10 = -(__int64)(*(_QWORD *)v21 != 0LL);
      v12 = v10 & v21;
    }
    if ( ((v4 >> 8) & 0x1FF) != *(_WORD *)(v12 + 284) )
    {
LABEL_28:
      UserSetLastError(87);
LABEL_29:
      v17 = 0LL;
      goto LABEL_16;
    }
  }
  v14 = 0x400000LL;
  v15 = *((_QWORD *)gptiCurrent + 53);
  v16 = *(_DWORD *)(v15 + 816);
  if ( (v16 & 0x400000) != 0 && (!v5 || (v4 & 0xF) == 0 || *(_DWORD *)(v15 + 280) != 18) )
    goto LABEL_29;
  v17 = 1LL;
  *(_DWORD *)(v15 + 816) = v16 | 0x400000;
  if ( *(_DWORD *)(v15 + 280) != v4 )
  {
    *(_DWORD *)(v15 + 280) = v4;
    v18 = *(_QWORD *)(v15 + 656);
    if ( v18 )
    {
      for ( i = *(_QWORD *)(v18 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v15, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v15, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v14, v10, v12, v13);
  return v17;
}
