/*
 * XREFs of ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0249E6C (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetIntegerProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
           (__int64)this,
           a3,
           a4,
           a5);
}
