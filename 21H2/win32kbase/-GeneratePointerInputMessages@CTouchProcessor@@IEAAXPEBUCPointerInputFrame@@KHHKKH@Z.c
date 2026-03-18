/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01C7D8C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C6D20 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01D7798 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  const struct CPointerInputFrame *v9; // rsi
  PDEVICE_OBJECT v11; // rcx
  char v12; // bl
  __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned int *i; // rdi
  CTouchProcessor *v16; // rcx
  __int64 v17; // rcx
  const int *v18; // r8
  int v19; // [rsp+28h] [rbp-D0h]
  int v20; // [rsp+38h] [rbp-C0h]
  _BYTE v21[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v22; // [rsp+C1h] [rbp-37h]
  __int16 v23; // [rsp+C5h] [rbp-33h]
  char v24; // [rsp+C7h] [rbp-31h]
  unsigned int v25; // [rsp+110h] [rbp+18h]

  v25 = a3;
  v9 = a2;
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
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
      208,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3);
  v13 = *((unsigned int *)v9 + 12);
  v14 = 0;
  for ( i = (unsigned int *)*((_QWORD *)v9 + 30); v14 < (unsigned int)v13; ++v14 )
  {
    v16 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v13);
    if ( i >= (unsigned int *)v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v16, v9, (const struct CPointerInfoNode *)i, a8) )
    {
      a3 = *i;
      if ( (a3 & 0x1000) == 0 )
      {
        a2 = (const struct CPointerInputFrame *)i[45];
        LOBYTE(v17) = (a6 & i[45]) == a6;
        if ( ((unsigned __int8)v17 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (a3 & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, a2, a3), a3 = *i, (a3 & 0x80000) == 0) )
          {
            v22 = 0;
            v23 = 0;
            v24 = 0;
            memset(v21, 0, sizeof(v21));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (__int64)this,
                                  (__int64)i,
                                  *((_QWORD *)i + 2),
                                  v9,
                                  0,
                                  v25,
                                  a4,
                                  a5,
                                  (CInputDest *)v21) )
            {
              LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
              LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_LL(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)a2,
                  a3,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  2,
                  v19,
                  209,
                  v20,
                  *((_WORD *)i + 86),
                  *((_WORD *)i + 80));
            }
          }
        }
      }
    }
    v13 = *((unsigned int *)v9 + 12);
    i += 120;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)a2 || v12 )
  {
    v18 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      210,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
}
