/*
 * XREFs of ?_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z @ 0x1C017DCA0
 * Callers:
 *     ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C017DCF4 (-_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C017DDB8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall _AddMemoryBlockToList(struct tagWIN32_TRIAGE_DATA *a1, void *a2)
{
  return a2 && (*((unsigned __int8 (__fastcall **)(_QWORD, void *, _QWORD))a1 + 4))(*((_QWORD *)a1 + 5), a2, 0LL) == 0;
}
