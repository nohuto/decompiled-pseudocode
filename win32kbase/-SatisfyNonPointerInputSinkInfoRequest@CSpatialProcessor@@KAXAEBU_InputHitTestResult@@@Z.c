/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C0225E38
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C007DFAC (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C0009F60 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        const struct _InputHitTestResult *a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rcx
  char v5; // bl
  int v6; // edx
  int v7; // r8d
  _QWORD *v8; // r15
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  bool v12; // bl
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v4 = (void *)*((_QWORD *)a1 + 1);
  if ( v4 )
  {
    Object = 0LL;
    v5 = 1;
    LOBYTE(a3) = 1;
    if ( (int)CompositionInputObject::ResolveHandle(v4, 1LL, a3, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 22;
        LOBYTE(v11) = v5;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          5,
          22,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          *((_QWORD *)a1 + 1));
      }
    }
    else
    {
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          20,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          *((_QWORD *)a1 + 1));
      }
      v8 = Object;
      if ( (gInputSinkInfoRetrieval & 1) != 0 )
        qword_1C02D80A4 = *((_QWORD *)Object + 2);
      if ( (gInputSinkInfoRetrieval & 4) != 0 )
      {
        xmmword_1C02D80B8 = *((_OWORD *)a1 + 1);
        xmmword_1C02D80C8 = *((_OWORD *)a1 + 2);
        xmmword_1C02D80D8 = *((_OWORD *)a1 + 3);
        xmmword_1C02D80E8 = *((_OWORD *)a1 + 4);
      }
      if ( (gInputSinkInfoRetrieval & 8) != 0 )
        dword_1C02D80F8 = *((_DWORD *)a1 + 22);
      if ( (gInputSinkInfoRetrieval & 2) != 0 && dword_1C02D809C == 6 )
      {
        Object = 0LL;
        CompositionInputObject::GetWindowForInputType(v8, 5, &Object);
        if ( Object )
        {
          qword_1C02D80B0 = (__int64)Object;
          LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v9,
              v10,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              5,
              21,
              (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
              (char)Object);
          }
        }
      }
      ObfDereferenceObject(v8);
      dword_1C02D80A0 = 1;
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        5,
        23,
        (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
    }
  }
}
