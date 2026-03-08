/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C017DE40
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1C017E160 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     IsFreeSMSSupported @ 0x1C008E3B8 (IsFreeSMSSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C017DCD0 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C017DDB8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  struct tagTHREADINFO *i; // rdi
  __int64 v3; // rdx
  _QWORD *j; // rdi
  unsigned int v5; // eax
  _QWORD *k; // rdi
  unsigned int v7; // eax
  void **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *m; // rdi

  for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)a1 + 320LL); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    _AddThreadInfoToLiveTriageDump(a1, i);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)a1);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v3 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v3 + 456));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 320LL) + 464LL));
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 336LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 656LL));
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 344LL); j; j = (_QWORD *)*j )
  {
    v5 = *((_DWORD *)a1 + 4);
    if ( v5 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v5 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  for ( k = *(_QWORD **)(*(_QWORD *)a1 + 352LL); k; k = (_QWORD *)*k )
  {
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v7 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, k);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    v8 = (void **)gsmsList;
    while ( v8 != &gsmsList && *((_DWORD *)a1 + 2) < 0x3E8u )
    {
      _AddMemoryBlockToLiveTriageDump(a1, v8);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v8[4]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v8[5]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v8[8]);
      _AddMemoryBlockToLiveTriageDump(a1, v8[14]);
      v8 = (void **)*v8;
      ++*((_DWORD *)a1 + 2);
    }
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gsmsList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiRit & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiForeground & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpai & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gbNonServiceSession & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpsi & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gSharedInfo & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  _AddThreadInfoToLiveTriageDump(a1, gptiRit);
  _AddThreadInfoToLiveTriageDump(a1, gptiForeground);
  v13 = SGDGetUserSessionState(v10, v9, v11, v12);
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v13 + 8));
  _AddMemoryBlockToLiveTriageDump(a1, gpsi);
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( m = gpai; m; m = (_QWORD *)*m )
    _AddMemoryBlockToLiveTriageDump(a1, m);
  return 0LL;
}
