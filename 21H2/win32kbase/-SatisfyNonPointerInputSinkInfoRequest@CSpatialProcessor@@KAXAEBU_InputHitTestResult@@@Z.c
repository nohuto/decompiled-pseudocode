/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1C0006108
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C0034E2C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00021F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(const struct _InputHitTestResult *a1)
{
  void *v2; // rcx
  bool v3; // bl
  char v4; // bl
  int v5; // edx
  int v6; // r8d
  _QWORD *v7; // r15
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    Object = 0LL;
    v4 = 1;
    if ( (int)CompositionInputObject::ResolveHandle(v2, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 22;
        LOBYTE(v10) = v4;
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          5,
          22,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          *((_QWORD *)a1 + 1));
      }
    }
    else
    {
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          20,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
          *((_QWORD *)a1 + 1));
      }
      v7 = Object;
      if ( (gInputSinkInfoRetrieval & 1) != 0 )
        qword_1C029DB44 = *((_QWORD *)Object + 2);
      if ( (gInputSinkInfoRetrieval & 4) != 0 )
      {
        xmmword_1C029DB58 = *((_OWORD *)a1 + 1);
        xmmword_1C029DB68 = *((_OWORD *)a1 + 2);
        xmmword_1C029DB78 = *((_OWORD *)a1 + 3);
        xmmword_1C029DB88 = *((_OWORD *)a1 + 4);
      }
      if ( (gInputSinkInfoRetrieval & 8) != 0 )
        dword_1C029DB98 = *((_DWORD *)a1 + 22);
      if ( (gInputSinkInfoRetrieval & 2) != 0 && dword_1C029DB3C == 6 )
      {
        Object = 0LL;
        CompositionInputObject::GetWindowForInputType(v7, 5, &Object);
        v9 = (int)Object;
        if ( Object )
        {
          qword_1C029DB50 = (__int64)Object;
          LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v8,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              5,
              21,
              (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
              (char)Object);
          }
        }
      }
      ObfDereferenceObject(v7);
      dword_1C029DB40 = 1;
    }
  }
  else
  {
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        5,
        23,
        (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
  }
}
