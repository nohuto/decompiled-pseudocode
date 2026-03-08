/*
 * XREFs of ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01E388C
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01F1888 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01FAD6C (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01FAFB8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01FE0EC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01FFA04 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ValidateHbwnd @ 0x1C01576D0 (ValidateHbwnd.c)
 */

char __fastcall CInputDest::IsEqualByWindowHandle(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 *v5; // rsi
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // r8
  __int64 v11; // rax

  v3 = *(_DWORD *)(a1 + 92);
  v4 = 0LL;
  if ( v3 == 2 )
  {
    v5 = *(__int64 **)(a1 + 80);
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          v7 = 559;
LABEL_16:
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v7);
          return v4;
        }
        v8 = ValidateHwndEx(a2, 1LL, 0LL, a2);
      }
      else
      {
        v8 = HMValidateHandleNoSecure(a2, 1);
      }
      goto LABEL_8;
    }
LABEL_22:
    if ( v5 )
      v4 = *v5;
    LOBYTE(v4) = v4 == a2;
    return v4;
  }
  v9 = 1;
  if ( v3 != 1 )
    return v4;
  v5 = *(__int64 **)(a1 + 80);
  if ( !a3 )
    goto LABEL_22;
  v10 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 != 1 )
    {
      v7 = 587;
      goto LABEL_16;
    }
    v8 = ValidateHbwnd(a2, 2LL, v10, a2);
LABEL_8:
    if ( v8 )
    {
      if ( (__int64 *)v8 == v5 )
        LOBYTE(v4) = 1;
    }
    return v4;
  }
  v11 = HMValidateHandleNoSecure(a2, 23);
  if ( !v11 || (__int64 *)v11 != v5 )
    return 0;
  return v9;
}
