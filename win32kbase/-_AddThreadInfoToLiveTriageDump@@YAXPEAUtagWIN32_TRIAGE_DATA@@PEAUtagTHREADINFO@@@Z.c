/*
 * XREFs of ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C017DDB8
 * Callers:
 *     ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C017DCF4 (-_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C017DE40 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     ?_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z @ 0x1C017DC18 (-_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z.c)
 *     ?_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z @ 0x1C017DCA0 (-_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C017DCD0 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C017DCF4 (-_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z.c)
 */

void __fastcall _AddThreadInfoToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagTHREADINFO *a2)
{
  if ( _AddMemoryBlockToList(a1, a2) && _AddMemoryBlockToLiveTriageDump(a1, a2) )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 56));
    _AddQToLiveTriageDump(a1, *((struct tagQ **)a2 + 54));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 92));
    _AddMListToLiveTriageDump(a1, (struct tagTHREADINFO *)((char *)a2 + 808));
  }
}
