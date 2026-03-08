/*
 * XREFs of ?SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C024B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C0249D94 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetHandleProperty(
        DirectComposition::CGenericMarshaler *this,
        unsigned int a2,
        __int64 a3,
        bool *a4)
{
  return DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CHandleProperty>(
           (__int64)this,
           a2,
           a3,
           a4);
}
