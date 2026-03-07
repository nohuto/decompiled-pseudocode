__int64 __fastcall SetImeHotKey(__int64 a1, int a2, unsigned int a3, HKL a4, unsigned int a5)
{
  unsigned int v8; // edi
  unsigned __int16 HotKeyLangID; // bx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  _QWORD **v19; // rdx
  _QWORD *i; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rbx
  __int64 v28; // rax
  struct _tagIMEHOTKEYOBJ *v29; // rcx
  struct _tagIMEHOTKEYOBJ *v30; // rax

  v8 = a1;
  switch ( a5 )
  {
    case 1u:
      v25 = SGDGetUserSessionState(a1);
      ImeHotKeyByID = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v25 + 12728), v8);
      if ( !ImeHotKeyByID )
      {
        v24 = 87;
        goto LABEL_32;
      }
      v28 = SGDGetUserSessionState(v26);
      v29 = *(struct _tagIMEHOTKEYOBJ **)(v28 + 12728);
      if ( ImeHotKeyByID == v29 )
      {
        *(_QWORD *)(v28 + 12728) = *(_QWORD *)ImeHotKeyByID;
      }
      else
      {
        if ( !v29 )
          return 0LL;
        while ( 1 )
        {
          v30 = *(struct _tagIMEHOTKEYOBJ **)v29;
          if ( *(struct _tagIMEHOTKEYOBJ **)v29 == ImeHotKeyByID )
            break;
          v29 = *(struct _tagIMEHOTKEYOBJ **)v29;
          if ( !v30 )
            return 0LL;
        }
        *(_QWORD *)v29 = *(_QWORD *)ImeHotKeyByID;
      }
      Win32FreePool(ImeHotKeyByID);
      return 1LL;
    case 2u:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID(a1);
        v11 = SGDGetUserSessionState(v10);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                   *(struct _tagIMEHOTKEYOBJ **)(v11 + 12728),
                                   a2 & 0xF,
                                   (unsigned __int16)a2 & 0xC000,
                                   a3,
                                   HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          v14 = SGDGetUserSessionState(v13);
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v14 + 12728), v8);
          if ( !ImeHotKeyByKeyWithLang )
          {
            v15 = Win32AllocPoolZInit(32LL, 1751741269LL);
            v17 = (_QWORD *)v15;
            if ( v15 )
            {
              *(_QWORD *)v15 = 0LL;
              *(_DWORD *)(v15 + 8) = v8;
              *(_DWORD *)(v15 + 16) = a2;
              *(_DWORD *)(v15 + 12) = a3;
              *(_QWORD *)(v15 + 24) = a4;
              v18 = SGDGetUserSessionState(v16);
              v19 = *(_QWORD ***)(v18 + 12728);
              if ( v19 )
              {
                for ( i = *v19; i; i = (_QWORD *)*i )
                  v19 = (_QWORD **)i;
                *v19 = v17;
              }
              else
              {
                *(_QWORD *)(v18 + 12728) = v17;
              }
              return 1LL;
            }
            v24 = 14;
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
        v24 = 1409;
LABEL_32:
        UserSetLastError(v24);
      }
      break;
    case 3u:
      v22 = *(_QWORD **)(SGDGetUserSessionState(a1) + 12728);
      if ( v22 )
      {
        do
        {
          v23 = (_QWORD *)*v22;
          Win32FreePool(v22);
          v22 = v23;
        }
        while ( v23 );
      }
      *(_QWORD *)(SGDGetUserSessionState(v22) + 12728) = 0LL;
      return 1LL;
  }
  return 0LL;
}
