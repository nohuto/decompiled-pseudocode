/*
 * XREFs of ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AAB1C
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C003C978 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C00A467C (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGDINPUTPROCESSORgpTouchProcessor<CTouchProcessor *>::operator->(__int64 a1)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1) + 3424);
}
