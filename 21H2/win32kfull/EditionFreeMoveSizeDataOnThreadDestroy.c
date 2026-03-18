/*
 * XREFs of EditionFreeMoveSizeDataOnThreadDestroy @ 0x1C02101A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x1C024A98C (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 */

void __fastcall EditionFreeMoveSizeDataOnThreadDestroy(__int64 a1)
{
  MOVESIZEDATA::FreeMoveSizeData((struct MOVESIZEDATA **)(a1 + 672));
}
