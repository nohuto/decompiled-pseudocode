/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4B20
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E868C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C01B8C2C (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4708 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01CBDE4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        unsigned int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  CInputDest *v20; // rax
  struct CInputDest *v21; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v22[128]; // [rsp+50h] [rbp-C8h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 57) & 8) != 0 && !a6 )
  {
    *(_OWORD *)((char *)a5 + 440) = 0LL;
    *(_OWORD *)((char *)a5 + 456) = 0LL;
  }
  if ( (*((_DWORD *)a4 + 45) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 45) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 110) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 56) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 114) = *a8;
        *(struct tagPOINT *)((char *)a5 + 460) = *a9;
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)a4 + 2);
    v21 = 0LL;
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v14, a7, &v21, a8) )
    {
      CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a4 + 86), a9);
      CInputDest::operator=((__int64)a10, (__int64)v21);
    }
    else if ( *((_DWORD *)a5 + 110) )
    {
      *a8 = 0;
      *a9 = 0LL;
      v18 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 56), 1);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 40);
        if ( *(char *)(v19 + 20) >= 0 && *(char *)(v19 + 19) >= 0 )
        {
          *a8 = *((_DWORD *)a5 + 114);
          *a9 = *(struct tagPOINT *)((char *)a5 + 460);
          v20 = CInputDest::CInputDest((CInputDest *)v22, (struct tagWND *const)v18);
          CInputDest::operator=((__int64)a10, v20);
          CInputDest::SetEmpty((CInputDest *)v22);
        }
      }
    }
    else if ( *(_DWORD *)a10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    }
  }
}
