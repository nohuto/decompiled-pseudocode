/*
 * XREFs of ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC208
 * Callers:
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18022DF20 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180253874 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801CC1D8 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC248 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC314 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer() )
    CSuperWetInkManager::OnUpdatedVailInkReceived(this, a2);
  else
    CSuperWetInkManager::OnUpdatedLocalInkReceived(this, a2);
}
