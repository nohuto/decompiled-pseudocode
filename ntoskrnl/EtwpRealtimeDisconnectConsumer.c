/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x14067ED38
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x14067ECB4 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x14067ED20 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    LOBYTE(a3) = 1;
    v4 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), a3);
    v5 = v4;
    if ( v4 )
    {
      v6 = (__int64 *)(v4 + 688);
      ExAcquirePushLockExclusiveEx(v4 + 688, 0LL);
      *(_QWORD *)(v5 + 352) = a1;
      ExReleasePushLockEx(v6, 0LL);
      v7 = EtwpSynchronizeWithLogger(v5, 16LL);
      EtwpSynchronizeWithLogger(v5, 4LL);
      LOBYTE(v8) = 1;
      EtwpReleaseLoggerContext(v5, v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v7;
}
