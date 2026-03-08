/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x1409EB214
 * Callers:
 *     EtwpSavePersistedLoggers @ 0x1409EB1E4 (EtwpSavePersistedLoggers.c)
 * Callees:
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 EtwpSavePersistedLoggersWorker()
{
  __int64 Pool2; // rax
  __int64 v1; // rdx
  char *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int v5; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  Pool2 = ExAllocatePool2(256LL, 8LL * *(unsigned int *)(EtwpHostSiloState + 16) + 4112, 1266119749LL);
  v2 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_9;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 4112;
  v3 = KsrEnumeratePersistedMemory(EtwpKsrGuid, EtwpKsrMemoryEnumCallback, Pool2);
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; i = (unsigned int)(i + 1) )
    {
      v5 = KsrQueryMetadata(EtwpKsrGuid, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i), v2 + 16, 4096LL, &v7);
      if ( v5 >= 0 )
        EtwpSavePersistedLogger((unsigned int *)v2 + 4, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i));
      else
        v3 = v5;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
  {
LABEL_9:
    LOBYTE(v1) = 1;
    KsrFreePersistedMemory(EtwpKsrGuid, v1);
  }
  return (unsigned int)_InterlockedExchange(&EtwpLoggerSaveState, 2);
}
