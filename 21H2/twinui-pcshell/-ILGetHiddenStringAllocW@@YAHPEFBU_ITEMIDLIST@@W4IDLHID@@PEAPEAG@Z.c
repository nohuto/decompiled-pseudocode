/*
 * XREFs of ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1801580C8
 * Callers:
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x180155448 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x180155630 (-GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z.c)
 *     GetPinSourceForPinnedItem @ 0x180156D54 (GetPinSourceForPinnedItem.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159900 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18015DF88 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005EB14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

_BOOL8 __fastcall ILGetHiddenStringAllocW(const ITEMIDLIST *a1, int a2, void **a3)
{
  int v4; // ebx
  const struct _HIDDENITEMID *v5; // rax
  const void *v6; // rsi
  SIZE_T v7; // rbp
  void *v8; // rcx

  v4 = -2147467259;
  v5 = ILFindHiddenIDOn(a1, a2);
  if ( v5 )
  {
    if ( *((_WORD *)v5 + 4) == 2 )
    {
      v6 = (char *)v5 + 10;
      v7 = 2 * ualstrlenW((char *)v5 + 10) + 2;
      v4 = CTCoAllocPolicy::Alloc(v8, 1, v7, a3);
      if ( v4 >= 0 )
        memcpy(*a3, v6, v7);
    }
  }
  return v4 >= 0;
}
