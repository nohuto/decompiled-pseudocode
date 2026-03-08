/*
 * XREFs of ?FindObjectForGivenLocale@@YAPEAUFxDeviceText@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0068AB4
 * Callers:
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00698A0 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

FxDeviceText *__fastcall FindObjectForGivenLocale(_SINGLE_LIST_ENTRY *Head, unsigned int LocaleId)
{
  FxDeviceText *result; // rax

  for ( result = (FxDeviceText *)Head->Next;
        result && result->m_LocaleId != LocaleId;
        result = (FxDeviceText *)result->m_Entry.Next )
  {
    ;
  }
  return result;
}
