/*
 * XREFs of HMAssignmentLock @ 0x1C00788D0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0082990 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0086318 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x1C00BF0A0 (-LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00C7730 (xxxChangeForegroundKeyboardTable.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00D3A04 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1C00DC7D0 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     rimDispatchCompleteFrames @ 0x1C00F0B7C (rimDispatchCompleteFrames.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01E3284 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01E3A44 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01EE280 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C0214018 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216000 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_DWORD *__fastcall HMAssignmentLock(__int64 **a1, int a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx

  v2 = a1[1];
  v3 = **a1;
  **a1 = (__int64)v2;
  if ( !v3 || (__int64 *)v3 != v2 )
  {
    if ( v2 )
    {
      if ( (*((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v2 + 25) & 1) != 0 )
      {
        if ( a2 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2799LL);
        UserSetLastError(87);
      }
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal((_DWORD *)v3);
  }
  return (_DWORD *)v3;
}
