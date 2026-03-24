/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0190B44
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FC3C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C019ED04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A15E0 (WPP_RECORDER_SF_LL.c)
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
  const struct CPointerInputFrame *v10; // rdi
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int64 i; // rbx
  CTouchProcessor *v15; // rcx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-E8h]
  _BYTE v18[113]; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+C1h] [rbp-47h]
  __int16 v20; // [rsp+C5h] [rbp-43h]
  char v21; // [rsp+C7h] [rbp-41h]

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      210,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6649);
  v12 = *((unsigned int *)v10 + 12);
  v13 = 0;
  for ( i = *((_QWORD *)v10 + 17); v13 < (unsigned int)v12; ++v13 )
  {
    v15 = (CTouchProcessor *)(*((_QWORD *)v10 + 17) + 480 * v12);
    if ( i >= (unsigned __int64)v15 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6656);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        LODWORD(a2) = *(_DWORD *)(i + 180);
        if ( (a6 & (unsigned int)a2) == a6 && ((unsigned int)a2 & a7) == 0 )
        {
          if ( (*(_DWORD *)i & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6666),
                (*(_DWORD *)i & 0x80000) == 0) )
          {
            v19 = 0;
            v20 = 0;
            v21 = 0;
            memset(v18, 0, sizeof(v18));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (CTouchProcessor *)this,
                                  i,
                                  *(_QWORD *)(i + 16),
                                  v10,
                                  0,
                                  a3,
                                  a4,
                                  a5,
                                  (CInputDest *)v18)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_LL(
                *(unsigned __int16 *)(i + 172),
                2,
                v16,
                211,
                v17,
                *(_WORD *)(i + 172),
                *(_WORD *)(i + 160));
            }
          }
        }
      }
    }
    v12 = *((unsigned int *)v10 + 12);
    i += 480LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        212,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
}
