/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01F0870
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C007E768 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00F2FF2 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C01E34AC (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01F03F8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01F9284 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  CInputDest *v17; // rax
  struct CInputDest *v18; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v19[128]; // [rsp+50h] [rbp-C8h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 57) & 8) != 0 && !a6 )
  {
    *((_OWORD *)a5 + 28) = 0LL;
    *((_OWORD *)a5 + 29) = 0LL;
  }
  if ( (*((_DWORD *)a4 + 45) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 45) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 112) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 57) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 116) = *a8;
        *(struct tagPOINT *)((char *)a5 + 468) = *a9;
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)a4 + 2);
    v18 = 0LL;
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v14, a7, &v18, a8) )
    {
      CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 86), a9);
      CInputDest::operator=((__int64)a10, (__int64)v18);
    }
    else if ( *((_DWORD *)a5 + 112) )
    {
      *a8 = 0;
      *a9 = 0LL;
      v15 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 57), 1);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 40);
        if ( *(char *)(v16 + 20) >= 0 && *(char *)(v16 + 19) >= 0 )
        {
          *a8 = *((_DWORD *)a5 + 116);
          *a9 = *(struct tagPOINT *)((char *)a5 + 468);
          v17 = CInputDest::CInputDest((CInputDest *)v19, (struct tagWND *const)v15);
          CInputDest::operator=((__int64)a10, v17);
          CInputDest::SetEmpty((CInputDest *)v19);
        }
      }
    }
    else if ( *(_DWORD *)a10 )
    {
      LODWORD(v18) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12439);
    }
  }
}
