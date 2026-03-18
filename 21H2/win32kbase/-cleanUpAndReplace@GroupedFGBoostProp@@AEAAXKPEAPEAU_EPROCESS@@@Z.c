/*
 * XREFs of ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C00D8134
 * Callers:
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C00D7CE4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1C00D7D70 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 */

void __fastcall GroupedFGBoostProp::cleanUpAndReplace(GroupedFGBoostProp *this, int a2, struct _EPROCESS **a3)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 4);
  if ( v5 )
    Win32FreePool(v5);
  *((_DWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
}
