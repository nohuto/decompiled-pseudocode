/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C016BD10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C004FD4C (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     IsInputThread @ 0x1C007CC40 (IsInputThread.c)
 *     ProcessInfoFromPID @ 0x1C00840AC (ProcessInfoFromPID.c)
 *     CitEnableKeyboardDelegation @ 0x1C00B0154 (CitEnableKeyboardDelegation.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C00DDF28 (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     SetInputDelegationModeImpl @ 0x1C021882C (SetInputDelegationModeImpl.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rbx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOL v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-28h]

  v4 = a1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v9) )
    {
      while ( 1 )
      {
        v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v10 = *v11;
        v11[2] = 0LL;
        if ( !*(_DWORD *)(v10 + 8) )
        {
          v22 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        }
        HMUnlockObject(*v11);
      }
    }
  }
  if ( !IsInputThread() )
    goto LABEL_9;
  v18 = Feature_KIDV2__private_IsEnabledDeviceUsage() != 0;
  if ( a4 )
  {
    if ( v18 )
    {
      if ( !v4 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
      {
LABEL_16:
        v12 = 87;
        goto LABEL_10;
      }
    }
    else if ( !v4 || (a4 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 2) )
    {
      goto LABEL_16;
    }
    if ( !gptiForeground || v4 != ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
    {
LABEL_9:
      v12 = 5;
LABEL_10:
      v13 = 0;
      UserSetLastError(v12);
      goto LABEL_25;
    }
  }
  v13 = SetInputDelegationModeImpl(v4, a2, a3, a4, v22);
  if ( v13 && a2 )
  {
    v19 = ProcessInfoFromPID(a2);
    v20 = ProcessInfoFromPID(v4);
    CitEnableKeyboardDelegation(a4 & 1, v20, v19);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v13;
}
