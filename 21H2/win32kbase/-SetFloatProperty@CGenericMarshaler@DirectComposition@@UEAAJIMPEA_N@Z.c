/*
 * XREFs of ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0214CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C02138B0 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetFloatProperty(
        DirectComposition::CGenericMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
           (__int64)this,
           a2,
           a3,
           a4);
}
