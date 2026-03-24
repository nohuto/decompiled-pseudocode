/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01914A8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0198DC0 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ACA8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01A1314 (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        struct _KTHREAD **a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned __int64 v9; // rbx
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  const struct CPointerInputFrame *v14; // rsi
  __int64 v15; // rax
  CPointerInfoNode *v16; // rdi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // [rsp+20h] [rbp-D8h]
  _BYTE v21[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v22; // [rsp+C1h] [rbp-37h]
  __int16 v23; // [rsp+C5h] [rbp-33h]
  char v24; // [rsp+C7h] [rbp-31h]

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      203,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( a1[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6547);
  if ( v9 )
  {
    v14 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(v9 + 28));
    if ( v14 )
    {
      v15 = *(unsigned int *)(v9 + 32);
      if ( (unsigned int)v15 >= *((_DWORD *)v14 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6565);
        v15 = *(unsigned int *)(v9 + 32);
      }
      v16 = (CPointerInfoNode *)(*((_QWORD *)v14 + 17) + 480 * v15);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6567);
      if ( *((_WORD *)v16 + 86) != *(_WORD *)(v9 + 16) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6568);
      if ( !a5 )
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        memset(v21, 0, sizeof(v21));
        if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                              (CTouchProcessor *)a1,
                              (__int64)v16,
                              v9,
                              v14,
                              0x24Au,
                              a4,
                              a6,
                              a7,
                              (CInputDest *)v21)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_HL(v18, v17, v19, 208, v20, *(_WORD *)(v9 + 16), *((_WORD *)v16 + 80));
        }
      }
      CTouchProcessor::UnreferenceFrame((__int64)a1, (__int64)v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 209;
          goto LABEL_29;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 7, 206, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v13 = 207;
          goto LABEL_29;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 7, 204, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 205;
LABEL_29:
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
