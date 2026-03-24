/*
 * XREFs of MiGetLeafPfnBuddy @ 0x1403801FC
 * Callers:
 *     MiPfnsWorthTrying @ 0x1402827B0 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14031FE44 (MiCanStealKernelStack.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F5BB4 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140533F28 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x140533FD8 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140535E60 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140535F90 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554328 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x14055E3D8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x14076A7B8 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D7CF4 (MiGetNextDirectFixupProto.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
