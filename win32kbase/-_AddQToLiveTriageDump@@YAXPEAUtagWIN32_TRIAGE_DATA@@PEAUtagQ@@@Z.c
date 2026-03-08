/*
 * XREFs of ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C017DCF4
 * Callers:
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C017DDB8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z @ 0x1C017DC18 (-_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z.c)
 *     ?_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z @ 0x1C017DCA0 (-_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C017DCD0 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C017DDB8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall _AddQToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagQ *a2)
{
  if ( _AddMemoryBlockToList(a1, a2) && _AddMemoryBlockToLiveTriageDump(a1, a2) )
  {
    _AddMListToLiveTriageDump(a1, (struct tagQ *)((char *)a2 + 24));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 9));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 12));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 13));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 14));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 15));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 16));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 17));
  }
}
