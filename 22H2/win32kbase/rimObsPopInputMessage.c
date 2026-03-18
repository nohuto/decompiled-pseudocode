/*
 * XREFs of rimObsPopInputMessage @ 0x1C01AE890
 * Callers:
 *     rimObsObserveNextInput @ 0x1C01AE654 (rimObsObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01AD584 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C01AD980 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, int a2, void **a3, unsigned int a4)
{
  void **v5; // r12
  int v6; // r13d
  char **v8; // rdi
  unsigned int v9; // ebx
  char v10; // dl
  char *v12; // rdi
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  char v16; // dl
  __int64 v17; // rcx
  char **v18; // rax
  char v19; // dl
  int v20; // eax
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+70h] [rbp-10h]

  v5 = a3;
  v6 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
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
      1,
      15,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      a1);
  }
  v8 = (char **)(a1 + 144);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
  if ( *(_DWORD *)(a1 + 164) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v19 = 0;
    }
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = *(_DWORD *)(a1 + 164);
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        3u,
        1u,
        0x12u,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        v21);
    }
    v20 = *(_DWORD *)(a1 + 164);
    *(_QWORD *)&v22 = 1LL;
    DWORD2(v22) = 2;
    HIDWORD(v22) = v20;
    v23 = 0LL;
    v24 = 0LL;
    v9 = rimObsCopyMessage((int *)&v22, v6, v5, a4);
    *(_DWORD *)(a1 + 164) = 0;
  }
  else if ( *(_DWORD *)(a1 + 160) )
  {
    if ( *v8 == (char *)v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 307);
    v12 = *v8;
    v13 = rimObsCopyMessage((int *)v12 + 4, v6, v5, a4);
    v9 = v13;
    if ( v13 == -1073741789 )
    {
      DWORD1(v22) = 0;
      DWORD2(v22) = 0;
      LODWORD(v22) = 1;
      v23 = 0LL;
      v24 = 0LL;
      HIDWORD(v22) = rimObsCalculateObserverMessageSize((_DWORD *)v12 + 4);
      v9 = rimObsCopyMessage((int *)&v22, v6, v5, a4);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v16 = 0;
      }
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = a4;
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v16,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          1u,
          0x10u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v21,
          HIDWORD(v22),
          v22,
          v23,
          v24);
      }
    }
    else if ( v13 >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          17,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v17 = *(_QWORD *)v12;
      if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || (v18 = (char **)*((_QWORD *)v12 + 1), *v18 != v12) )
        __fastfail(3u);
      *v18 = (char *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
      --*(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v9 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x13u,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v21);
  }
  return v9;
}
