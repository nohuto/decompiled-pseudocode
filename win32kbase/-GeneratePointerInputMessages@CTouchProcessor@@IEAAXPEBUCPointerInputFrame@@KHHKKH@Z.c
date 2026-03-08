/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01F494C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0205FD8 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C020989C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  const struct CPointerInputFrame *v9; // rsi
  char v11; // bl
  __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned __int64 i; // rdi
  CTouchProcessor *v15; // rcx
  int v16; // r8d
  void *v17; // r8
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+38h] [rbp-D0h]
  _BYTE v20[113]; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+C1h] [rbp-47h]
  __int16 v22; // [rsp+C5h] [rbp-43h]
  char v23; // [rsp+C7h] [rbp-41h]
  unsigned int v24; // [rsp+120h] [rbp+18h]

  v24 = a3;
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
      216,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7317);
  v12 = *((unsigned int *)v9 + 12);
  v13 = 0;
  for ( i = *((_QWORD *)v9 + 30); v13 < (unsigned int)v12; ++v13 )
  {
    v15 = (CTouchProcessor *)(*((_QWORD *)v9 + 30) + 480 * v12);
    if ( i >= (unsigned __int64)v15 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7324);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, v9, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        LODWORD(a2) = *(_DWORD *)(i + 180);
        if ( (a6 & (unsigned int)a2) == a6 && ((unsigned int)a2 & a7) == 0 )
        {
          if ( (*(_DWORD *)i & 0x80000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7334);
          if ( (*(_DWORD *)i & 0x80000) == 0 )
          {
            v21 = 0;
            v22 = 0;
            v23 = 0;
            memset(v20, 0, sizeof(v20));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (__int64)this,
                                  i,
                                  *(_QWORD *)(i + 16),
                                  v9,
                                  0,
                                  v24,
                                  a4,
                                  a5,
                                  (CInputDest *)v20) )
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
                  v18,
                  217,
                  v19,
                  *(_WORD *)(i + 172),
                  *(_WORD *)(i + 160));
              }
            }
          }
        }
      }
    }
    v12 = *((unsigned int *)v9 + 12);
    i += 480LL;
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
      218,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
}
