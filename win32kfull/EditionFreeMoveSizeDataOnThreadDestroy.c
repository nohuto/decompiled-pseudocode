/*
 * XREFs of EditionFreeMoveSizeDataOnThreadDestroy @ 0x1C01F3390
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x1C023CFF0 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 */

void __fastcall EditionFreeMoveSizeDataOnThreadDestroy(__int64 a1)
{
  MOVESIZEDATA::FreeMoveSizeData((struct MOVESIZEDATA **)(a1 + 672));
}
