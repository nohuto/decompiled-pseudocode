/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B69F0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MouseMove @ 0x1C01E8770 (MouseMove.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0207894 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  __int64 *v15; // rbx
  void (__fastcall *v16)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    v4 = (char)a1;
    LOWORD(a1) = BYTE1(a1);
    gMKDeltaX = v4;
    gMKDeltaY = (char)a1;
    UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
    v5 = gMKDeltaX;
    v6 = gMKDeltaY;
    if ( (dword_1C02905D4 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v7 = 4 * (unsigned __int8)byte_1C0290512;
      v5 = v7 * gMKDeltaX;
      v6 = v7 * gMKDeltaY;
    }
    MouseMove(v5, v6);
    v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v8, v9, v10);
    gptiCurrent = v11;
    if ( v11 )
    {
      *((_DWORD *)v11 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v14 = *v15;
            v15[2] = 0LL;
            if ( !*(_DWORD *)(v14 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v15);
          }
        }
      }
    }
    if ( !dword_1C0290608 || (gdwPUDFlags & 0x2000) != 0 )
    {
      v16 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v16 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v16);
    }
  }
  return 0LL;
}
