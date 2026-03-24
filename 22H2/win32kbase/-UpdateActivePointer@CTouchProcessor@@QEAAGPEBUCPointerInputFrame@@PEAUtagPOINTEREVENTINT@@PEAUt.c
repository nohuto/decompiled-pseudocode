/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FDA8
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C488 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018DF98 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C468 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A0458 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01A0E14 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A1510 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct tagPOINT *a3,
        struct tagCHitTestState *a4,
        struct CInputDest *a5,
        unsigned int *a6,
        unsigned __int16 *a7,
        unsigned int *a8,
        unsigned int a9,
        unsigned __int16 a10)
{
  int v11; // edx
  __int16 x; // r15
  unsigned int v15; // r14d
  unsigned int y; // r12d
  int v17; // edx
  int v18; // ecx
  struct CInputPointerNode *NodeById; // rbx
  int v20; // r8d
  int v21; // edx
  __int16 v22; // r14
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v27; // edx
  int v28; // edx
  unsigned __int64 v29; // r9
  _QWORD *Target; // rax
  int v31; // edx
  unsigned __int16 v32; // cx
  int v33; // [rsp+20h] [rbp-148h]
  _BYTE v35[128]; // [rsp+90h] [rbp-D8h] BYREF

  v11 = 0;
  x = a3->x;
  v15 = a3[1].x;
  y = a3[2].y;
  if ( this[6] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1472);
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      7,
      51,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, x, 1, 1);
  if ( NodeById )
  {
    if ( (a3[2].y & 1) == 0 )
    {
      v24 = *((_DWORD *)NodeById + 14);
      if ( v24 != v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_LL(v18, v17, v20, 54, v33, v24, v15);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v25) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v25,
                7,
                55,
                (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
      if ( !CTouchProcessor::SetNewValidState(this, y, NodeById) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v27,
            7,
            56,
            (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v28) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                7,
                57,
                (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
    }
    v22 = 0;
  }
  else
  {
    NodeById = CTouchProcessor::CreateNode(this, x, v15, y, a10);
    v22 = 1;
    if ( !NodeById )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v21,
          7,
          52,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v23) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              7,
              53,
              (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
          }
        }
      }
LABEL_19:
      InputTraceLogging::Pointer::DropInput();
      return 0LL;
    }
  }
  if ( !*(_OWORD *)((char *)NodeById + 36) )
    *(_OWORD *)((char *)NodeById + 36) = *(_OWORD *)&a3[20].x;
  v29 = (unsigned __int64)a3[11];
  a3[22].y = -__CFSHR__(*((_DWORD *)a2 + 31), 9);
  a3[1].y = *((unsigned __int16 *)NodeById + 16);
  a3[22].y = -__CFSHR__(*((_DWORD *)a2 + 31), 9);
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, y, v29, a3[6]);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v35, a3, NodeById, y, a4, a7, a8, a9);
  CInputDest::operator=((__int64)a5, Target);
  CInputDest::SetEmpty((CInputDest *)v35);
  *a7 |= v22;
  v31 = 2 * (*((_DWORD *)NodeById + 70) & 4);
  LOWORD(v31) = *a7 | (2 * (*((_WORD *)NodeById + 140) & 4));
  *a7 = v31;
  v32 = v31 | (2 * (*((_DWORD *)NodeById + 70) & 1));
  *a7 = v32;
  *a7 = v32 | (2 * (*((_DWORD *)NodeById + 70) & 2));
  *a6 = *((_DWORD *)NodeById + 15) & 0x1F0;
  *((_DWORD *)NodeById + 15) = y;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v31) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v31,
      7,
      58,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
