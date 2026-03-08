/*
 * XREFs of ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C00D8894
 * Callers:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C00D8704 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1C01FE59C (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(const struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  while ( 1 )
  {
    if ( !a1 )
      return 0LL;
    if ( *((_DWORD *)a1 + 2) == a2 )
      break;
    a1 = *(const struct _tagIMEHOTKEYOBJ **)a1;
  }
  return a1;
}
