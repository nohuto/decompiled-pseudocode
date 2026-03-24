/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x140948560
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x140948770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409493A0 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140321364 (EtwpFreeTraceBuffer.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  char *v4; // rdx

  v1 = *(_QWORD *)(a1 + 1072);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock(EtwpKsrGuid, *(_QWORD *)v1, 0LL);
    v4 = *(char **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v4 )
    {
      EtwpFreeTraceBuffer(a1, v4, v3);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
