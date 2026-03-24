/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C016D008
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C64C (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 result; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 39;
LABEL_7:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, v4, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, a1, v2);
  }
  while ( 1 )
  {
    result = *(unsigned int *)(v2 + 184);
    if ( (result & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 880);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq((_DWORD)gRimLog, a2, 1, 40, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, a1, v2);
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 872), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 41;
      goto LABEL_7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_qq(
             (_DWORD)gRimLog,
             a2,
             1,
             42,
             (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
             a1,
             v2);
  }
  return result;
}
