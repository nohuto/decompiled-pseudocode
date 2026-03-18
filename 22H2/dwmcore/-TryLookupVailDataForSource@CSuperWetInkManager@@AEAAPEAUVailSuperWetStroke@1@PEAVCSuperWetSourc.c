/*
 * XREFs of ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801CCC64
 * Callers:
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC314 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801CC5B8 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCE04 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 * Callees:
 *     <none>
 */

struct CSuperWetInkManager::VailSuperWetStroke *__fastcall CSuperWetInkManager::TryLookupVailDataForSource(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::VailSuperWetStroke *result; // rax

  for ( result = (struct CSuperWetInkManager::VailSuperWetStroke *)*((_QWORD *)this + 8);
        result != *((struct CSuperWetInkManager::VailSuperWetStroke **)this + 9);
        result = (struct CSuperWetInkManager::VailSuperWetStroke *)((char *)result + 120) )
  {
    if ( *(struct CSuperWetSource **)result == a2 )
      return result;
  }
  return 0LL;
}
