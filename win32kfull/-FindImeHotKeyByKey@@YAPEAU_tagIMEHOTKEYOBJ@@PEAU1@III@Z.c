struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKey(struct _tagIMEHOTKEYOBJ *a1, int a2, int a3, int a4)
{
  struct _tagIMEHOTKEYOBJ *v8; // rdi
  HKL ActiveHKL; // r12
  int v10; // esi
  int v12; // ecx
  int v13; // edx
  unsigned __int16 HotKeyLangID; // ax
  int LangIdMatchLevel; // eax

  v8 = 0LL;
  ActiveHKL = (HKL)GetActiveHKL();
  v10 = 0;
  while ( 1 )
  {
    if ( !a1 )
      return v8;
    if ( *((_DWORD *)a1 + 3) == a4 )
    {
      v12 = *((_DWORD *)a1 + 4);
      v13 = 0;
      if ( (v12 & 0x400) != 0 )
      {
        v13 = 1;
      }
      else if ( (*((_DWORD *)a1 + 4) & 0xF) != a2 )
      {
        goto LABEL_4;
      }
      if ( (*((_DWORD *)a1 + 4) & 0xC000) == a3 || ((unsigned __int16)a3 & (unsigned __int16)v12 & 0xC000) != 0 || v13 )
        break;
    }
LABEL_4:
    a1 = *(struct _tagIMEHOTKEYOBJ **)a1;
  }
  HotKeyLangID = GetHotKeyLangID(*((_DWORD *)a1 + 2));
  LangIdMatchLevel = GetLangIdMatchLevel(ActiveHKL, HotKeyLangID);
  if ( LangIdMatchLevel != 3 )
  {
    if ( ((unsigned __int16)ActiveHKL & 0x3FF) != 0x12 && LangIdMatchLevel && LangIdMatchLevel > v10 )
    {
      v10 = LangIdMatchLevel;
      v8 = a1;
    }
    goto LABEL_4;
  }
  return a1;
}
