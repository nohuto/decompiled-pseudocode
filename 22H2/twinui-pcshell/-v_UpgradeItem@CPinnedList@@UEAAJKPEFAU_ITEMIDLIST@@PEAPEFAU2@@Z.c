/*
 * XREFs of ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18015FA60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995CC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x180099688 (ILExpungeRemovedHiddenIDs.c)
 *     GetPinSourceForPinnedItem @ 0x180156BE4 (GetPinSourceForPinnedItem.c)
 *     SetPinSourceForPinnedItem @ 0x18015BD4C (SetPinSourceForPinnedItem.c)
 *     _CacheAppIDInIDList @ 0x18015D24C (_CacheAppIDInIDList.c)
 */

__int64 __fastcall CPinnedList::v_UpgradeItem(
        CPinnedList *this,
        int a2,
        struct _ITEMIDLIST *a3,
        struct _ITEMIDLIST **a4)
{
  struct _ITEMIDLIST *v4; // rbx
  const struct _HIDDENITEMID *v6; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  struct _ITEMIDLIST *v9; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v9 = a3;
  if ( a2 )
  {
    v6 = ILFindHiddenIDOn(a3, -1091633123);
    if ( v6 )
    {
      *((_DWORD *)v6 + 1) = -1091633152;
      ILExpungeRemovedHiddenIDs(v4);
    }
    if ( (int)GetPinSourceForPinnedItem((__int64)v4, &v8) < 0 )
    {
      SetPinSourceForPinnedItem(v4, &v9, 0);
      v4 = v9;
    }
  }
  return CacheAppIDInIDList(v4, a4);
}
