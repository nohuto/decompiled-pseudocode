/*
 * XREFs of ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18015F774
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x1801540AC (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18015D76C (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015DCCC (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::s_ShouldCreateNewFile(WCHAR *pszPath)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( PathFileExistsW(pszPath) && !PathYetAnotherMakeUniqueName(pszPath, pszPath, 0LL, 0LL) )
    return (unsigned int)-2147467259;
  return v2;
}
