/*
 * XREFs of HMAssignmentLock @ 0x1C003A420
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0050088 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0050938 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0051CD0 (xxxChangeForegroundKeyboardTable.c)
 *     ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x1C00AF030 (-LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00E6CDC (rimDispatchCompleteFrames.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01E41D0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_DWORD *__fastcall HMAssignmentLock(__int64 **a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = a1[1];
  v4 = **a1;
  **a1 = (__int64)v3;
  if ( !v4 || (__int64 *)v4 != v3 )
  {
    if ( v3 )
    {
      v5 = dword_1C0294B70 * (unsigned int)(unsigned __int16)*(_DWORD *)v3;
      if ( (*((_BYTE *)qword_1C0294B68 + v5 + 25) & 1) != 0 )
      {
        if ( (_DWORD)a2 != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, v2);
        UserSetLastError(87LL, a2, v2);
      }
      _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    }
    if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal((_DWORD *)v4);
  }
  return (_DWORD *)v4;
}
