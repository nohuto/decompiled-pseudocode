/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00E75AE (RIMApplyPTPConfigRemedy.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     RIMIsParentCommon @ 0x1C018C220 (RIMIsParentCommon.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  PDEVICE_OBJECT v5; // rcx
  __int64 *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rdx
  int v10; // eax

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
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
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      a1);
  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  RIMLockExclusive((__int64)&gObListLock);
  v6 = (__int64 *)gObRimDevList;
  v7 = 0;
  *v3 = 0LL;
  while ( v6 != &gObRimDevList )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                  + 0x30) == 2 )
    {
      v10 = *(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                      + 0xB8);
      if ( (v10 & 0x2000) == 0
        && (v10 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                      + 0xC8) & 0x80u) != 0 )
      {
        v8 = (unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v8,
                             *(_QWORD *)(v8 + 456),
                             *(unsigned __int16 *)(*(_QWORD *)(v8 + 456) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v8 + 456) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(v6 - 2);
          *v3 = v6 - 2;
          v7 = 1;
          break;
        }
      }
    }
    v6 = (__int64 *)*v6;
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
