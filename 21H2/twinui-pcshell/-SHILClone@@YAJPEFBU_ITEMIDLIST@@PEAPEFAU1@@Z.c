/*
 * XREFs of ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1801401A0
 * Callers:
 *     PropVariantToIDList @ 0x1801467A4 (PropVariantToIDList.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154294 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159900 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B5C0 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHILClone(const struct _ITEMIDLIST *a1, struct _ITEMIDLIST **a2)
{
  struct _ITEMIDLIST *v2; // r8
  __int64 result; // rax

  v2 = 0LL;
  if ( a1 )
  {
    v2 = ILClone(a1);
    result = v2 == 0LL ? 0x8007000E : 0;
  }
  else
  {
    result = 2147942487LL;
  }
  *a2 = v2;
  return result;
}
