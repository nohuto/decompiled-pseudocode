/*
 * XREFs of ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18020ED4C
 * Callers:
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x1801504A0 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 *     ?v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z @ 0x180151F90 (-v_SetPinStreamVersion@CTaskbandPin@@UEAAJK@Z.c)
 *     ?v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z @ 0x180151FC0 (-v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18020F9E4 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

signed int __fastcall SHRegSetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int a4)
{
  signed int result; // eax
  struct _SECURITY_ATTRIBUTES *v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  result = _RegSetKeyValueWithSDDL(a1, a2, a3, 4u, &v6, 4u, v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
