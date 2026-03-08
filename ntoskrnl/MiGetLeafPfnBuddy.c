/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140386E8C
 * Callers:
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140386D90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14039634C (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 *     MiLogMdlRangeEvent @ 0x140621060 (MiLogMdlRangeEvent.c)
 *     MiGetPfnPidSafe @ 0x1406242B4 (MiGetPfnPidSafe.c)
 *     MiDoStackCopy @ 0x14062A990 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiDeleteVadAwePtes @ 0x1406473BC (MiDeleteVadAwePtes.c)
 *     MiFreePhysicalPageChain @ 0x140647BC4 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14064C7F8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeLargePages @ 0x140665C70 (MiFreeLargePages.c)
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
