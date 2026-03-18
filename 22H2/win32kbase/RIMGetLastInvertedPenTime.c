/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C01787C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E0B3A (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

unsigned __int64 __fastcall RIMGetLastInvertedPenTime(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  void *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD **v16; // r14
  _QWORD *i; // rdi
  __int64 v18; // rax
  int v19; // r9d
  __int64 v21; // [rsp+28h] [rbp-50h]

  v3 = 0LL;
  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v6 = &WPP_f9e9c6706b933e49bdb016a372583459_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      153,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v7 = SGDGetUserSessionState(v4, a2, a3, v6);
  RIMLockExclusive(v7 + 240);
  v16 = (_QWORD **)(SGDGetUserSessionState(v9, v8, v10, v11) + 304);
  for ( i = *v16; i != v16; i = (_QWORD *)*i )
  {
    v13 = i - 2;
    if ( i == (_QWORD *)16 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4904);
    }
    else if ( (*((_DWORD *)v13 + 21) & 4) != 0 && v13[100] > v3 )
    {
      v3 = v13[100];
    }
  }
  v18 = SGDGetUserSessionState(v13, v12, v14, v15);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_i(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v19,
      4u,
      v21,
      0x9Au,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  return v3;
}
