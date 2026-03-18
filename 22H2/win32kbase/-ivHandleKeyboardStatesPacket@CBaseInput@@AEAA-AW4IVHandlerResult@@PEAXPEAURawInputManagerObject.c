/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDB80
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01ECD08 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1C01FD200 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, void **a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void **v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v18, a2);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v18, (void **)(v3 + 8));
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v4, v5, v6);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v8) )
    {
      while ( 1 )
      {
        v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v11 = *v12;
        v12[2] = 0LL;
        if ( !*(_DWORD *)(v11 + 8) )
        {
          LODWORD(v18) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        }
        HMUnlockObject(*v12);
      }
    }
  }
  ApplyFullKeyboardStates(*a2, a2[1], v9, v10);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return 1LL;
}
