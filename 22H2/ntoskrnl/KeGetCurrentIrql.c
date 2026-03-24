/*
 * XREFs of KeGetCurrentIrql @ 0x14021FA90
 * Callers:
 *     BgFreeContext @ 0x1409F1038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F1248 (BgGetContext.c)
 *     BgDisplayFade @ 0x1409F161C (BgDisplayFade.c)
 *     BgLibraryInitialize @ 0x1409F1854 (BgLibraryInitialize.c)
 *     BgLibraryDisable @ 0x1409F3ED0 (BgLibraryDisable.c)
 *     BgDisplayString @ 0x1409F6570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F65E0 (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x1409F6684 (BgSetBootGraphicsInformation.c)
 * Callees:
 *     <none>
 */

KIRQL KeGetCurrentIrql(void)
{
  return KeGetCurrentIrql();
}
