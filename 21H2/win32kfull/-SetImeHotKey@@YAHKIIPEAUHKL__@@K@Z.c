/*
 * XREFs of ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C01035E4
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C0103570 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C010371C (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C010373C (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C01037BC (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(const struct _tagIMEHOTKEYOBJ *a1, int a2, unsigned int a3, HKL a4, unsigned int a5)
{
  unsigned int v8; // ebx
  unsigned __int16 HotKeyLangID; // ax
  unsigned __int16 v10; // dx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  struct _tagIMEHOTKEYOBJ *v12; // rdx
  const struct _tagIMEHOTKEYOBJ *v13; // rcx
  __int64 v14; // rax
  struct _tagIMEHOTKEYOBJ *v15; // rdx
  struct _tagIMEHOTKEYOBJ *v16; // r8
  struct _tagIMEHOTKEYOBJ *v18; // rcx
  struct _tagIMEHOTKEYOBJ *v19; // rbx
  __int64 v20; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  struct _tagIMEHOTKEYOBJ *v22; // rcx
  struct _tagIMEHOTKEYOBJ *v23; // rax

  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1u:
      ImeHotKeyByID = FindImeHotKeyByID(a1, (unsigned int)a1);
      v12 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v20 = 87LL;
        goto LABEL_32;
      }
      v22 = gpImeHotKeyListHeader;
      if ( ImeHotKeyByID == gpImeHotKeyListHeader )
      {
        gpImeHotKeyListHeader = *(struct _tagIMEHOTKEYOBJ **)ImeHotKeyByID;
      }
      else
      {
        if ( !gpImeHotKeyListHeader )
          return 0LL;
        while ( 1 )
        {
          v23 = *(struct _tagIMEHOTKEYOBJ **)v22;
          if ( *(struct _tagIMEHOTKEYOBJ **)v22 == v12 )
            break;
          v22 = *(struct _tagIMEHOTKEYOBJ **)v22;
          if ( !v23 )
            return 0LL;
        }
        *(_QWORD *)v22 = *(_QWORD *)v12;
      }
      Win32FreePool(v12);
      return 1LL;
    case 2u:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                   gpImeHotKeyListHeader,
                                   v10 & 0xF,
                                   v10 & 0xC000,
                                   a3,
                                   HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v13, v8);
          if ( !ImeHotKeyByKeyWithLang )
          {
            v14 = Win32AllocPoolZInit(32LL, 1751741269LL);
            if ( v14 )
            {
              *(_QWORD *)v14 = 0LL;
              *(_DWORD *)(v14 + 8) = v8;
              *(_DWORD *)(v14 + 16) = a2;
              *(_DWORD *)(v14 + 12) = a3;
              *(_QWORD *)(v14 + 24) = a4;
              v15 = gpImeHotKeyListHeader;
              if ( gpImeHotKeyListHeader )
              {
                v16 = *(struct _tagIMEHOTKEYOBJ **)gpImeHotKeyListHeader;
                if ( *(_QWORD *)gpImeHotKeyListHeader )
                {
                  do
                  {
                    v15 = v16;
                    v16 = *(struct _tagIMEHOTKEYOBJ **)v16;
                  }
                  while ( v16 );
                }
                *(_QWORD *)v15 = v14;
              }
              else
              {
                gpImeHotKeyListHeader = (struct _tagIMEHOTKEYOBJ *)v14;
              }
              return 1LL;
            }
            v20 = 14LL;
            goto LABEL_32;
          }
          goto LABEL_21;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
        {
LABEL_21:
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = a2;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        v20 = 1409LL;
LABEL_32:
        UserSetLastError(v20, (__int64)v12);
      }
      break;
    case 3u:
      v18 = gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v19 = *(struct _tagIMEHOTKEYOBJ **)v18;
          Win32FreePool(v18);
          v18 = v19;
        }
        while ( v19 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
