/*
 * XREFs of ILExpungeRemovedHiddenIDs @ 0x1800996A8
 * Callers:
 *     SetPinSourceForPinnedItem @ 0x18015BEBC (SetPinSourceForPinnedItem.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FBD0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

void __fastcall ILExpungeRemovedHiddenIDs(const ITEMIDLIST *a1)
{
  LPITEMIDLIST ID; // rdi
  const ITEMIDLIST *i; // rcx
  __int64 v3; // rbx
  const struct _HIDDENITEMID *v4; // rax

  if ( a1 )
  {
    ID = ILFindLastID(a1);
    for ( i = ID; ; i = ID )
    {
      v4 = ILFindHiddenIDOn(i, -1091633152);
      if ( !v4 )
        break;
      v3 = *(unsigned __int16 *)v4;
      memmove_0(v4, (char *)v4 + v3, (size_t)&ID->mkid.abID[ID->mkid.cb - ((_QWORD)v4 + v3)]);
      ID->mkid.cb -= v3;
    }
  }
}
