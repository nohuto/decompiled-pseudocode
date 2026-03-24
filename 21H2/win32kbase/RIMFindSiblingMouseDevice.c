/*
 * XREFs of RIMFindSiblingMouseDevice @ 0x1C0161ADC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006A730 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsParentCommon @ 0x1C0161CD0 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindSiblingMouseDevice(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdx
  int v9; // eax
  char v11; // [rsp+28h] [rbp-30h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, 65, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v11);
  }
  RIMLockExclusive((__int64)&gObListLock);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1676);
  v6 = (__int64 *)gObRimDevList;
  v7 = 0;
  *a3 = 0LL;
  while ( v6 != &gObRimDevList )
  {
    if ( !*(_BYTE *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                   + 0x30) )
    {
      v9 = *(_DWORD *)(((unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64))
                     + 0xB8);
      if ( (v9 & 0x2000) == 0 && (v9 & 0x400) == 0 )
      {
        v8 = (unsigned __int64)(v6 + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)(v6 - 2) >> 64);
        if ( (unsigned int)RIMIsParentCommon(v4, v8, a1, *(unsigned __int16 *)(v8 + 890), *(_WORD *)(v8 + 892)) )
        {
          RawInputManagerDeviceObjectReference(v6 - 2);
          *a3 = v6 - 2;
          v7 = 1;
          break;
        }
      }
    }
    v6 = (__int64 *)*v6;
  }
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
