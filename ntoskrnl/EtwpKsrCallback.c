/*
 * XREFs of EtwpKsrCallback @ 0x1409EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCancelMemoryPreservation @ 0x1409EA4E0 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 *     EtwpSavePersistedLoggers @ 0x1409EB1E4 (EtwpSavePersistedLoggers.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edi
  bool v4; // al
  unsigned int v5; // esi
  __int64 i; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rbp
  char v10; // r14

  v3 = (int)Argument1;
  if ( !(_DWORD)Argument1 )
  {
LABEL_8:
    EtwpSavePersistedLoggers(CallbackContext, Argument1, Argument2);
    goto LABEL_9;
  }
  if ( (_DWORD)Argument1 != 1 )
  {
    if ( (_DWORD)Argument1 == 2 )
    {
      EtwpSavePersistedLoggers(CallbackContext, Argument1, Argument2);
      return;
    }
    if ( (_DWORD)Argument1 != 3 )
    {
      if ( (_DWORD)Argument1 != 4 )
        return;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  v4 = !v3 || v3 == 3;
  EtwpKsrPrepared = v4;
  v5 = 0;
  for ( i = EtwpHostSiloState; v5 < *(_DWORD *)(EtwpHostSiloState + 16); ++v5 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(i, v5, 0);
    v8 = v7;
    if ( v7 )
    {
      v9 = *((_QWORD *)v7 + 136);
      v10 = 0;
      if ( v9 )
      {
        v10 = 1;
        KeWaitForSingleObject(v7 + 158, Executive, 0, 0, 0LL);
        if ( !v3 || v3 == 3 )
        {
          if ( *(_BYTE *)(v9 + 32) )
            EtwpPreserveLogger(v8);
        }
        else
        {
          EtwpCancelMemoryPreservation((__int64)v8);
        }
      }
      EtwpReleaseLoggerContext(v8, v10);
    }
    i = EtwpHostSiloState;
  }
}
