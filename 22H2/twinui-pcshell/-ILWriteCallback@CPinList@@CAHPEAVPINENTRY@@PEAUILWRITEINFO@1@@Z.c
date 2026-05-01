/*
 * XREFs of ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x1801580C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180159334 (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x18015BA2C (-SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18015E0C8 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 */

_BOOL8 __fastcall CPinList::ILWriteCallback(const struct _ITEMIDLIST **p, struct CPinnedList **pData)
{
  const ITEMIDLIST *v2; // rbp
  const struct _ITEMIDLIST *v4; // rcx
  CPinList *v6; // rcx
  unsigned int v8; // edi
  LPITEMIDLIST *v9; // rsi
  LPITEMIDLIST v10; // rcx
  HRESULT v11; // eax
  _BYTE pv[16]; // [rsp+20h] [rbp-258h] BYREF
  WCHAR pszPath[264]; // [rsp+30h] [rbp-248h] BYREF

  v2 = *p;
  v4 = *p;
  pv[0] = 0;
  if ( IsExpiredTombstone(v4) )
  {
    memset_0(pszPath, 0, 0x208uLL);
    CPinList::_GetBackupShortcutToDelete(v6, pData[24], *p, pszPath);
    if ( pszPath[0] )
    {
      SHRemoveLocalizedName(pszPath);
      DeleteFileW(pszPath);
    }
    return 1LL;
  }
  else
  {
    v8 = 0;
    v9 = (LPITEMIDLIST *)(pData + 4);
    while ( 1 )
    {
      if ( *v9 )
      {
        v10 = ILFindChild(*v9, *p);
        if ( v10 )
          break;
      }
      ++v8;
      ++v9;
      if ( v8 >= 0x14 )
        goto LABEL_11;
    }
    v2 = v10;
    pv[0] = byte_18056EDF0[4 * v8];
LABEL_11:
    v11 = IStream_Write(*pData, pv, 1u);
    *((_DWORD *)pData + 6) = v11;
    if ( v11 >= 0 )
    {
      v11 = IStream_WritePidl(*pData, v2);
      *((_DWORD *)pData + 6) = v11;
      if ( v11 >= 0 )
      {
        v11 = CPinList::SaveShellLink(pData[2], (struct PINENTRY *)p, pData[1]);
        *((_DWORD *)pData + 6) = v11;
      }
    }
    return v11 >= 0;
  }
}
