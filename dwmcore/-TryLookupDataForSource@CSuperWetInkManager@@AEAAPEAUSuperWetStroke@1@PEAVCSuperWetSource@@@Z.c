/*
 * XREFs of ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012A432
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9018 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801C9544 (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9630 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9D58 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     <none>
 */

struct CSuperWetInkManager::SuperWetStroke *__fastcall CSuperWetInkManager::TryLookupDataForSource(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::SuperWetStroke *result; // rax

  for ( result = (struct CSuperWetInkManager::SuperWetStroke *)*((_QWORD *)this + 5);
        result != *((struct CSuperWetInkManager::SuperWetStroke **)this + 6);
        result = (struct CSuperWetInkManager::SuperWetStroke *)((char *)result + 104) )
  {
    if ( *(struct CSuperWetSource **)result == a2 )
      return result;
  }
  return 0LL;
}
