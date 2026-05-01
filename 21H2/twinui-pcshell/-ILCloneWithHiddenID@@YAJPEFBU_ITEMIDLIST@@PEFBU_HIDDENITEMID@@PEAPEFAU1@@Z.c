/*
 * XREFs of ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180157F6C
 * Callers:
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180157E1C (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x18015BF8C (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18015D990 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005EB14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x180099598 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 */

__int64 __fastcall ILCloneWithHiddenID(
        const struct _ITEMIDLIST *Src,
        const struct _HIDDENITEMID *a2,
        struct _ITEMIDLIST **a3)
{
  UINT v6; // esi
  void *v7; // rcx
  int v8; // ecx
  __int64 v9; // r15
  struct _ITEMIDLIST *ID; // rsi
  __int64 cb; // r14
  char *v12; // rdi
  unsigned __int16 v13; // cx
  USHORT v14; // ax

  *a3 = 0LL;
  if ( Src && Src->mkid.cb && HIWORD(*((_DWORD *)a2 + 1)) == 0xBEEF )
  {
    v6 = ILGetSize(Src);
    v8 = CTCoAllocPolicy::Alloc(v7, 1, v6 + *(unsigned __int16 *)a2 + 2, (void **)a3);
    if ( v8 >= 0 )
    {
      v9 = v6;
      memcpy(*a3, Src, v6);
      ID = ILFindLastID(*a3);
      cb = ID->mkid.cb;
      if ( ILFindFirstHiddenID(ID) )
        LOWORD(cb) = *(_WORD *)((char *)ID + cb - 2);
      v12 = (char *)*a3 + v9;
      memmove(v12 - 2, a2, *(unsigned __int16 *)a2);
      v13 = *((_WORD *)v12 - 1) + 2;
      if ( v13 < *((_WORD *)v12 - 1) || (*((_WORD *)v12 - 1) = v13, v14 = v13 + ID->mkid.cb, v14 < ID->mkid.cb) )
      {
        CoTaskMemFree(*a3);
        v8 = -2147024362;
        *a3 = 0LL;
      }
      else
      {
        ID->mkid.cb = v14;
        v8 = 0;
        *(_WORD *)&v12[*((unsigned __int16 *)v12 - 1) - 4] = cb;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v8;
}
