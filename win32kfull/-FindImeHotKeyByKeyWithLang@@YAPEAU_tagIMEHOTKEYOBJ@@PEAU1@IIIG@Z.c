struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKeyWithLang(
        struct _tagIMEHOTKEYOBJ *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5)
{
  int v5; // r11d
  struct _tagIMEHOTKEYOBJ *v6; // r10
  int v8; // ecx
  int v9; // edx
  unsigned __int16 HotKeyLangID; // ax

  v5 = a2;
  v6 = a1;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)v6 + 3) != a4 )
      goto LABEL_3;
    v8 = *((_DWORD *)v6 + 4);
    v9 = 0;
    if ( (v8 & 0x400) != 0 )
      break;
    if ( (*((_DWORD *)v6 + 4) & 0xF) == v5 )
      goto LABEL_7;
LABEL_3:
    v6 = *(struct _tagIMEHOTKEYOBJ **)v6;
    if ( !v6 )
      return 0LL;
  }
  v9 = 1;
LABEL_7:
  if ( (*((_DWORD *)v6 + 4) & 0xC000) != a3 && ((unsigned __int16)a3 & (unsigned __int16)v8 & 0xC000) == 0 && !v9 )
    goto LABEL_3;
  HotKeyLangID = GetHotKeyLangID(*((_DWORD *)v6 + 2));
  if ( a5 != HotKeyLangID )
  {
    if ( HotKeyLangID )
      goto LABEL_3;
  }
  return v6;
}
