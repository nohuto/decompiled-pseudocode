/*
 * XREFs of ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C00D7D70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C00D8134 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C00D8178 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 */

void __fastcall GroupedFGBoostProp::Delete(GroupedFGBoostProp *this)
{
  GroupedFGBoostProp::deRefAll(this);
  GroupedFGBoostProp::cleanUpAndReplace(this, 0, 0LL);
  Win32FreePool((char *)this);
}
