/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4840
 * Callers:
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018188C (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006B1E0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsParentCommon @ 0x1C0161C00 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdx
  int v8; // eax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, (_DWORD)a2, 1, 66, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a1);
  }
  if ( *(_BYTE *)(a1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1727LL);
  RIMLockExclusive((__int64)&gObListLock);
  v4 = (__int64 *)gObRimDevList;
  v5 = 0;
  *v2 = 0LL;
  while ( v4 != &gObRimDevList )
  {
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v4 - 2) >> 64))
                  + 0x30) == 2 )
    {
      v8 = *(_DWORD *)(((unsigned __int64)(v4 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v4 - 2) >> 64))
                     + 0xB8);
      if ( (v8 & 0x2000) == 0
        && (v8 & 0x400) == 0
        && (*(_DWORD *)(((unsigned __int64)(v4 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v4 - 2) >> 64))
                      + 0xC8) & 0x80u) != 0 )
      {
        v6 = (unsigned __int64)(v4 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v4 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(
                             a1,
                             v6,
                             *(_QWORD *)(v6 + 464),
                             *(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v6 + 464) + 112LL)) )
        {
          RawInputManagerDeviceObjectReference(v4 - 2);
          *v2 = v4 - 2;
          v5 = 1;
          break;
        }
      }
    }
    v4 = (__int64 *)*v4;
  }
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
