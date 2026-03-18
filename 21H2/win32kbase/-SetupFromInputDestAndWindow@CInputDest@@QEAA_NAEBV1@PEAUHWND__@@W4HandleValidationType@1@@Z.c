/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6F90 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ValidateHbwnd @ 0x1C0144300 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 *v13; // rax
  char v14; // dl
  __int64 *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  a1[10] = 0LL;
  v12 = *((_DWORD *)a1 + 23);
  if ( v12 == 2 )
  {
    if ( a4 == 2 )
    {
      v13 = (__int64 *)ValidateHwndEx((__int64)a3, 1LL, 0LL);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v14 = 1;
  }
  else
  {
    if ( v12 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0;
    }
    if ( a4 == 2 )
    {
      v13 = (__int64 *)ValidateHbwnd((unsigned __int64)a3, v8, v10, v11);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v14 = 23;
  }
  v13 = (__int64 *)HMValidateHandleNoSecure((int)a3, v14);
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  v16[0] = a1 + 10;
  v16[1] = v13;
  HMAssignmentLock(v16, 0LL);
  return a1[10] != 0;
}
