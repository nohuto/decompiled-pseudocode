/*
 * XREFs of GiveForegroundActivateRight @ 0x1C00486F0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 */

void __fastcall GiveForegroundActivateRight(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v2,
      13,
      11,
      (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids,
      a1);
  }
  v3 = dword_1C0250838;
  *((_QWORD *)&xmmword_1C0250770 + dword_1C0250838) = a1;
  v4 = v3 + 1;
  if ( v4 == 5 )
    v4 = 0;
  dword_1C0250838 = v4;
  ExReleasePushLockExclusiveEx(&gForegroundActivateRightLock, 0LL);
  KeLeaveCriticalRegion();
}
