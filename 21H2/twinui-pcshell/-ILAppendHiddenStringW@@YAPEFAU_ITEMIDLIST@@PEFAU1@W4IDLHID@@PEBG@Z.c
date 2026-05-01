/*
 * XREFs of ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180157E80
 * Callers:
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180153860 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     SetPinSourceForPinnedItem @ 0x18015BEBC (SetPinSourceForPinnedItem.c)
 *     _CacheAppIDInIDList @ 0x18015D3BC (_CacheAppIDInIDList.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180157E1C (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 */

struct _ITEMIDLIST *__fastcall ILAppendHiddenStringW(ITEMIDLIST *a1, int a2, WCHAR *a3)
{
  struct _ITEMIDLIST *v6; // rdi
  int v7; // eax
  char v8; // bp
  int v9; // r13d
  unsigned int v10; // r14d
  HLOCAL v11; // rax
  const struct _HIDDENITEMID *v12; // rbx

  v6 = 0LL;
  v7 = lstrlenW(a3);
  v8 = 0;
  v9 = v7;
  v10 = 2 * v7 + 12;
  if ( v10 > 0xFFFF )
    goto LABEL_6;
  v11 = LocalAlloc(0x40u, (unsigned __int16)(2 * v7 + 12));
  v12 = (const struct _HIDDENITEMID *)v11;
  if ( !v11 )
    goto LABEL_6;
  *(_WORD *)v11 = v10;
  *((_DWORD *)v11 + 1) = a2;
  *((_WORD *)v11 + 4) = 2;
  if ( (int)StringCchCopyW((char *)v11 + 10, v9 + 1, (char *)a3) >= 0 )
  {
    v8 = 1;
    v6 = ILAppendHiddenID(a1, v12);
  }
  LocalFree(v12);
  if ( !v8 )
LABEL_6:
    ILFree(a1);
  return v6;
}
