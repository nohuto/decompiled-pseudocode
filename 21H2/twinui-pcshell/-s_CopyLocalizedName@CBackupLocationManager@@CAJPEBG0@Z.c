/*
 * XREFs of ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18015F384
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18015D76C (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015DCCC (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

int __fastcall CBackupLocationManager::s_CopyLocalizedName(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  int result; // eax
  int pidsRes[4]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pszResModule[264]; // [rsp+30h] [rbp-228h] BYREF

  result = SHGetLocalizedName(a1, pszResModule, 0x104u, pidsRes);
  if ( result >= 0 )
    return SHSetLocalizedName(a2, pszResModule, pidsRes[0]);
  return result;
}
