/*
 * XREFs of EtwpSendSessionNotification @ 0x1407489B8
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14069152C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406917BC (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpFlushBuffer @ 0x140692C18 (EtwpFlushBuffer.c)
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _QWORD v10[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(v10, 0, sizeof(v10));
  v7 = *(_QWORD *)(a1 + 1096);
  v8 = *(_OWORD *)(a1 + 276);
  *(_OWORD *)&v10[5] = SessionNotificationGuid;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(v7, (__int64)v10, 0);
}
