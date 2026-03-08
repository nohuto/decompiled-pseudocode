/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01E3A44
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C02055A4 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ValidateHbwnd @ 0x1C01576D0 (ValidateHbwnd.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 *v12; // rax
  char v13; // dl
  __int64 *v15[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 318);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 319);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 320);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  v11 = *((_DWORD *)a1 + 23);
  a1[10] = 0LL;
  if ( v11 == 2 )
  {
    if ( a4 == 2 )
    {
      v12 = (__int64 *)ValidateHwndEx((__int64)a3, 1LL, 0LL, v10);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 340);
    v13 = 1;
  }
  else
  {
    if ( v11 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0;
    }
    if ( a4 == 2 )
    {
      v12 = (__int64 *)ValidateHbwnd((unsigned __int64)a3, v8, v9, v10);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 352);
    v13 = 23;
  }
  v12 = (__int64 *)HMValidateHandleNoSecure((int)a3, v13);
LABEL_20:
  if ( !v12 )
    goto LABEL_22;
  v15[0] = a1 + 10;
  v15[1] = v12;
  HMAssignmentLock(v15, 0);
  return a1[10] != 0;
}
