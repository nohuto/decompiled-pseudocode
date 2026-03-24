/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C0174D2C
 * Callers:
 *     rimCompleteReads @ 0x1C0053548 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0174214 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7C50 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C01739B4 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     WPP_RECORDER_SF_qi @ 0x1C0174140 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C0174464 (rimDispatchCompleteFrame.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RawInputManagerObject *v4; // r14
  struct RawInputManagerObject *v5; // rbx
  struct RawInputManagerObject *v6; // rax
  LARGE_INTEGER *v7; // rbp
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  char *v11; // rsi
  int v12; // r12d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  struct RawInputManagerObject **v16; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 769);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 770);
  }
  v4 = (struct RawInputManagerObject *)((char *)a1 + 552);
  v5 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 69);
  if ( v5 != (struct RawInputManagerObject *)((char *)a1 + 552) && *((_BYTE *)a1 + 584) )
  {
    Object = 0LL;
    if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
    {
      while ( 1 )
      {
        v7 = (LARGE_INTEGER *)((char *)v5 - 8);
        v13 = RawInputManagerDeviceObjectResolveHandle(*((char **)v5 + 3), 3u, *((_DWORD *)v5 + 18) == 0, &Object);
        v11 = (char *)Object;
        v12 = v13;
        if ( v13 >= 0 )
        {
          v14 = *((_DWORD *)Object + 68);
          if ( (v14 & 0x2000) == 0 || (v14 & 0x400000) != 0 )
          {
            v15 = *(_QWORD *)v5;
            if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) == v5 )
            {
              v16 = (struct RawInputManagerObject **)*((_QWORD *)v5 + 1);
              if ( *v16 == v5 )
              {
                *v16 = (struct RawInputManagerObject *)v15;
                *(_QWORD *)(v15 + 8) = v16;
                *((_QWORD *)v5 + 1) = v5;
                *(_QWORD *)v5 = v5;
                goto LABEL_12;
              }
            }
LABEL_27:
            __fastfail(3u);
          }
          v12 = -1073741823;
          ObfDereferenceObject(Object);
        }
        v5 = *(struct RawInputManagerObject **)v5;
        if ( v5 == v4 )
          goto LABEL_12;
      }
    }
    if ( *((struct RawInputManagerObject **)v5 + 1) != v4 )
      goto LABEL_27;
    v6 = *(struct RawInputManagerObject **)v5;
    if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_27;
    *(_QWORD *)v4 = v6;
    v7 = (LARGE_INTEGER *)((char *)v5 - 8);
    *((_QWORD *)v6 + 1) = v4;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    v8 = RawInputManagerDeviceObjectResolveHandle(*((char **)v5 + 3), 3u, *((_DWORD *)v5 + 18) == 0, &Object);
    v11 = (char *)Object;
    v12 = v8;
LABEL_12:
    if ( v12 < 0 )
    {
      if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 21, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v9,
            1,
            22,
            (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
            v7[4].QuadPart);
        }
        Win32FreePool((__int64)v7);
      }
    }
    else
    {
      --*((_QWORD *)v11 + 35);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qi(*((_QWORD *)v11 + 35), v9, v10, 20);
      if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v11 + 88), 2) & *((_DWORD *)a1 + 21)) == 0 )
      {
        LODWORD(Object) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 861);
      }
      rimFreeAutoRepeatCompleteFrame((__int64)(v11 + 88));
      *((_BYTE *)a1 + 584) = 0;
      InputTraceLogging::RIM::DispatchFrame((__int64)(v11 + 88), (__int64)v7, 2);
      rimDispatchCompleteFrame(a1, (struct RIMDEV *)(v11 + 88), v7);
      ObfDereferenceObject(v11);
    }
  }
}
