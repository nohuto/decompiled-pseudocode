/*
 * XREFs of rimObsObserveNextInput @ 0x1C01DC7C8
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C01A20B0 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C01A7160 (RIMObserveNextInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C01BF998 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsPopInputMessage @ 0x1C01DCA1C (rimObsPopInputMessage.c)
 */

__int64 __fastcall rimObsObserveNextInput(char *a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // di
  int v5; // ebx
  unsigned int *v6; // rsi
  char *v7; // r14
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      33,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      (char)a1);
  Object = 0LL;
  v5 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, v2, &Object);
  if ( v5 >= 0 )
  {
    v6 = (unsigned int *)Object;
    v7 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v8 = rimObsPopInputMessage(v6, v2, *((_QWORD *)v6 + 12), v6[26]);
    v5 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147483622 )
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            35,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
        }
        v6[22] = 1;
        v5 = 0;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 34;
        LOBYTE(v11) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          34,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
          *((_QWORD *)v6 + 10));
      }
      ZwSetEvent(*((HANDLE *)v6 + 10), 0LL);
    }
    *((_QWORD *)v7 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
