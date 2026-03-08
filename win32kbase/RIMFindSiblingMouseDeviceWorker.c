/*
 * XREFs of RIMFindSiblingMouseDeviceWorker @ 0x1C01ADDCC
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsParentCommon @ 0x1C01AF3D0 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindSiblingMouseDeviceWorker(int a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v5; // r14
  PDEVICE_OBJECT v7; // rcx
  unsigned int v8; // ebx
  _QWORD **v9; // rsi
  _QWORD *i; // rdi
  __int64 v11; // rdx
  int v12; // eax

  v4 = a3;
  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  v8 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      75,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v5);
  if ( (*(_DWORD *)(v5 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2121);
  *v4 = 0LL;
  v9 = (_QWORD **)(SGDGetUserSessionState(v7, a2, a3, a4) + 320);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) )
    {
      v12 = *(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                      + 0xB8);
      if ( (v12 & 0x2000) == 0
        && (v12 & 0x400) == 0
        && (*(_BYTE *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                     + 0x914) & 1) != 0 )
      {
        v11 = (unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v5, v11, a1, *(unsigned __int16 *)(v11 + 882), *(_WORD *)(v11 + 884)) )
        {
          RawInputManagerDeviceObjectReference(i - 2);
          *v4 = i - 2;
          return 1;
        }
      }
    }
  }
  return v8;
}
