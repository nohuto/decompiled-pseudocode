/*
 * XREFs of ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDA10
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C006B2DC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01ECDE4 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardAsyncKeyStatePacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx

  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v7) )
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
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        HMUnlockObject(*v11);
      }
    }
  }
  LOBYTE(v7) = *(_BYTE *)a2;
  LOBYTE(v6) = *(_DWORD *)(a2 + 4) != 0;
  ApplyKeyStateUpdate(v7, v6, v8, v9);
  v12 = CKeyboardProcessor::HandleLeftRightVKs(*(_BYTE *)a2);
  v16 = v12;
  if ( v12 != *(_WORD *)a2 )
  {
    LOBYTE(v16) = v12;
    LOBYTE(v13) = *(_DWORD *)(a2 + 4) != 0;
    ApplyKeyStateUpdate(v16, v13, v14, v15);
  }
  UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
  return 1LL;
}
