/*
 * XREFs of rimCheckForRegistrationConflicts @ 0x1C005F020
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMIsCurrentProcessTrusted @ 0x1C005F0F0 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1C0186990 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall rimCheckForRegistrationConflicts(int a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v3; // edi
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v3 = 0;
  while ( Flink != &gObRimList )
  {
    v4 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v4[5].Flink) && (a1 & HIDWORD(v4[5].Flink)) != 0 && LODWORD(v4[68].Flink) )
    {
      if ( !(unsigned int)RIMIsCurrentProcessTrusted(&gObRimList)
        || v4[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v6, v5, v7, v8) )
      {
        v3 = 1;
        LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, v5, v7, v8);
        }
      }
      else
      {
        v3 = 2;
      }
      break;
    }
    Flink = Flink->Flink;
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
