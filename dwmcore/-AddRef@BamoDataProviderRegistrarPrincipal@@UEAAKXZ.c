/*
 * XREFs of ?AddRef@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x1801041A0
 * Callers:
 *     ?AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ @ 0x1801192D0 (-AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AddRef(BamoDataProviderRegistrarPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
