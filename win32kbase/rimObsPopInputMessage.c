/*
 * XREFs of rimObsPopInputMessage @ 0x1C01DCA1C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C01DC7C8 (rimObsObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01DB69C (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C01DBA90 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, int a2, void **a3, unsigned int a4)
{
  void **v5; // r12
  int v6; // r13d
  char v8; // si
  char **v9; // rdi
  int v10; // r9d
  unsigned int v11; // ebx
  char *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  char **v16; // rax
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]

  v5 = a3;
  v6 = a2;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      15,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      a1);
  }
  v9 = (char **)(a1 + 144);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
  v10 = *(_DWORD *)(a1 + 164);
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        18,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
        v10);
    }
    v17 = *(_DWORD *)(a1 + 164);
    v18 = 1LL;
    v19 = 2;
    v20 = v17;
    v21 = 0LL;
    v22 = 0LL;
    v11 = rimObsCopyMessage((int *)&v18, v6, v5, a4);
    *(_DWORD *)(a1 + 164) = 0;
  }
  else if ( *(_DWORD *)(a1 + 160) )
  {
    if ( *v9 == (char *)v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 307);
    v13 = *v9;
    v14 = rimObsCopyMessage((int *)v13 + 4, v6, v5, a4);
    v11 = v14;
    if ( v14 == -1073741789 )
    {
      v18 = 1LL;
      v19 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v20 = rimObsCalculateObserverMessageSize((_DWORD *)v13 + 4);
      v11 = rimObsCopyMessage((int *)&v18, v6, v5, a4);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          16,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
          a4,
          v20);
      }
    }
    else if ( v14 >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          17,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      v15 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v16 = (char **)*((_QWORD *)v13 + 1), *v16 != v13) )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      --*(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v11 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v8;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      19,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      v11);
  }
  return v11;
}
