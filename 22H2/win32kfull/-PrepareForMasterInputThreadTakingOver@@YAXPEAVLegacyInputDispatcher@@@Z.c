/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C003C978
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C0139B44 (Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage.c)
 *     EndPointerDeviceContacts @ 0x1C013B7F4 (EndPointerDeviceContacts.c)
 *     ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AAB1C (--C-$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ.c)
 */

void __fastcall __noreturn PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  EnterCrit(1LL, 0LL);
  SetThreadPriority();
  if ( gptiManipulationThread )
    SetThreadBasePriority(*gptiManipulationThread, 16LL);
  EndPointerDeviceContacts();
}
