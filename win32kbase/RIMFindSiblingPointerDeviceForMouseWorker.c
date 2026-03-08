/*
 * XREFs of RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00CD1C8
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C01ADF44 (RIMFindSiblingPointerDeviceForMouse.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsParentCommon @ 0x1C01AF3D0 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouseWorker(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // ebx
  _QWORD **v8; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rdx
  int v12; // eax

  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  v7 = 0;
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
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      76,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      a1);
  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2192LL);
  *v4 = 0LL;
  v8 = (_QWORD **)(SGDGetUserSessionState(v6, a2, a3, a4) + 320);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( *(_BYTE *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64)) + 0x30) == 2 )
    {
      v12 = *(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                      + 0xB8);
      if ( (v12 & 0x2000) == 0
        && (v12 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                      + 0xC8) & 0x80u) != 0
        && (*(_BYTE *)(((unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64))
                     + 0x914) & 1) != 0 )
      {
        v10 = (unsigned __int64)(i + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)(i - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v10,
                             *(_QWORD *)(v10 + 456),
                             *(unsigned __int16 *)(*(_QWORD *)(v10 + 456) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v10 + 456) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(i - 2);
          *v4 = i - 2;
          return 1;
        }
      }
    }
  }
  return v7;
}
