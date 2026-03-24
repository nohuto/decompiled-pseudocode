/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0190DD8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198DC0 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01879C4 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ACA8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A1314 (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        struct _KTHREAD **a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned __int64 v8; // rdi
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // edx
  const struct CPointerInputFrame *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  CInputDest *v20; // rax
  int v21; // [rsp+20h] [rbp-148h]
  _BYTE v22[113]; // [rsp+50h] [rbp-118h] BYREF
  int v23; // [rsp+C1h] [rbp-A7h]
  __int16 v24; // [rsp+C5h] [rbp-A3h]
  char v25; // [rsp+C7h] [rbp-A1h]
  _BYTE v26[120]; // [rsp+C8h] [rbp-A0h] BYREF

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      219,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( a1[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6853);
  if ( v8 )
  {
    v14 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(v8 + 28));
    if ( v14 )
    {
      v15 = *(unsigned int *)(v8 + 32);
      if ( (unsigned int)v15 >= *((_DWORD *)v14 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6871);
        v15 = *(unsigned int *)(v8 + 32);
      }
      v16 = *((_QWORD *)v14 + 17) + 480 * v15;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6873);
      if ( *(_WORD *)(v16 + 172) != *(_WORD *)(v8 + 16) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6874);
      v23 = 0;
      v24 = 0;
      v25 = 0;
      memset(v22, 0, sizeof(v22));
      if ( (unsigned int)CTouchProcessor::GenerateMessage(
                           (CTouchProcessor *)a1,
                           v16,
                           v8,
                           v14,
                           0x252u,
                           a4,
                           a5,
                           a6,
                           (CInputDest *)v22) )
      {
        v20 = CInputDest::CInputDest((CInputDest *)v26, (__int64 **)(v16 + 352));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)a1, *(_WORD *)(v16 + 172), v20);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_HL(v18, v17, v19, 224, v21, *(_WORD *)(v8 + 16), *(_WORD *)(v16 + 160));
      }
      CTouchProcessor::UnreferenceFrame((__int64)a1, (__int64)v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 225;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 7, 222, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v12 = 223;
          goto LABEL_29;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 220, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 221;
LABEL_29:
        LOBYTE(v10) = 5;
        WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
