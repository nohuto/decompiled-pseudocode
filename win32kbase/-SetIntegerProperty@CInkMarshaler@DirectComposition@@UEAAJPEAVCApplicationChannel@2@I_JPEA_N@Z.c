/*
 * XREFs of ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0250020
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C024FE28 (-RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 4 )
    return DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(this, a4, a5);
  else
    return 3221225485LL;
}
