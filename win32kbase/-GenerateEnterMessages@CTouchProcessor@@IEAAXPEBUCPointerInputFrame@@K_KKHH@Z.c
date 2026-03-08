/*
 * XREFs of ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F3160
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01FC070 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C020989C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ApiSetEditionSendCursorSuppressionUpdate @ 0x1C02427CC (ApiSetEditionSendCursorSuppressionUpdate.c)
 */

void __fastcall CTouchProcessor::GenerateEnterMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v8; // rdi
  const struct CPointerInputFrame *v9; // rsi
  char v11; // bl
  __int64 v12; // rdi
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  void *v17; // r8
  _BYTE v18[112]; // [rsp+58h] [rbp-51h] BYREF
  char v19; // [rsp+C8h] [rbp+1Fh]
  int v20; // [rsp+C9h] [rbp+20h]
  __int16 v21; // [rsp+CDh] [rbp+24h]
  char v22; // [rsp+CFh] [rbp+26h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      205,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v12 = *((_QWORD *)v9 + 30) + 480 * v8;
  if ( (*(_DWORD *)(v12 + 180) & 1) != 0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    memset(v18, 0, sizeof(v18));
    v19 = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_LL(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          a5,
          206,
          a7,
          *(_DWORD *)(v12 + 172),
          *(_WORD *)(v12 + 160));
      }
    }
    if ( !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v12) )
      ApiSetEditionSendCursorSuppressionUpdate(1LL);
  }
  else
  {
    v15 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 4) == 0 && (v15 & 8) != 0 || (v15 & 0x40) != 0 )
    {
      v20 = 0;
      v21 = 0;
      v22 = 0;
      memset(v18, 0, sizeof(v18));
      v19 = 0;
      if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v12, a4, v9, 585) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_LL(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)a2,
            v16,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            a5,
            207,
            a7,
            *(_DWORD *)(v12 + 172),
            *(_WORD *)(v12 + 160));
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    v17 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v17) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v17,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      208,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
}
