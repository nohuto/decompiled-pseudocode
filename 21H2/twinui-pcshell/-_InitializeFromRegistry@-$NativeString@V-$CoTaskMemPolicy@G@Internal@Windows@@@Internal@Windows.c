/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x180292D24
 * Callers:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG1@Z @ 0x18028FE5C (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        BYTE **a1,
        HKEY a2,
        __int64 a3)
{
  BYTE *lpData; // rdi
  LSTATUS Value; // eax
  signed int v7; // ebx
  LSTATUS v8; // eax
  __int64 v9; // rsi
  DWORD v10; // eax
  DWORD v11; // r14d
  WCHAR *v12; // rax
  BYTE *v13; // rbp
  DWORD v14; // eax
  DWORD v15; // r15d
  unsigned int v16; // esi
  __int64 Type; // [rsp+80h] [rbp+18h] BYREF
  SIZE_T cb; // [rsp+88h] [rbp+20h] BYREF

  Type = a3;
  LODWORD(cb) = 0;
  lpData = 0LL;
  Value = RegQueryValueExW(a2, L"NotesApp", 0LL, (LPDWORD)&Type, 0LL, (LPDWORD)&cb);
  v7 = Value;
  if ( Value > 0 )
    v7 = (unsigned __int16)Value | 0x80070000;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)(Type - 1) > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      v7 = -2147024883;
    if ( v7 >= 0 )
    {
      lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
      if ( !lpData )
      {
LABEL_16:
        v7 = -2147024882;
        goto LABEL_28;
      }
      v8 = RegQueryValueExW(a2, L"NotesApp", 0LL, (LPDWORD)&Type, lpData, (LPDWORD)&cb);
      v7 = v8;
      if ( v8 > 0 )
        v7 = (unsigned __int16)v8 | 0x80070000;
      if ( v7 >= 0 )
      {
        v9 = ((unsigned int)cb >> 1) - 1;
        if ( (_DWORD)Type == 2 )
        {
          v10 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
          v11 = v10;
          if ( v10 )
          {
            v12 = (WCHAR *)CoTaskMemAlloc(2LL * v10);
            v13 = (BYTE *)v12;
            if ( !v12 )
              goto LABEL_16;
            v14 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v12, v11);
            v15 = v14;
            if ( v14 && v14 <= v11 )
            {
              v7 = 0;
              CoTaskMemFree(lpData);
              lpData = v13;
              v9 = v15 - 1;
LABEL_22:
              if ( *(_WORD *)&lpData[2 * v9] )
              {
                v7 = -2147024883;
              }
              else
              {
                v16 = v9 + 1;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
                if ( lpData && v16 )
                {
                  *a1 = lpData;
                  a1[1] = (BYTE *)(v16 - 1LL);
                  a1[2] = (BYTE *)v16;
                  *(_WORD *)&lpData[2 * v16 - 2] = 0;
                }
                lpData = 0LL;
              }
              goto LABEL_28;
            }
            v7 = -2147024774;
            CoTaskMemFree(v13);
          }
        }
        if ( v7 < 0 )
          goto LABEL_28;
        goto LABEL_22;
      }
    }
  }
LABEL_28:
  CoTaskMemFree(lpData);
  return (unsigned int)v7;
}
