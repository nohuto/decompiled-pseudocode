/*
 * XREFs of AslPathClean @ 0x140A51F28
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage @ 0x140411810 (Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // r14d
  wchar_t *v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  wchar_t v11; // ax
  wchar_t v12; // ax
  wchar_t v13; // ax
  bool v14; // zf
  unsigned __int64 v15; // rax
  wchar_t v16; // cx
  wchar_t v17; // cx
  wchar_t v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  unsigned __int64 v21; // rax

  v3 = -1LL;
  v5 = 0;
  do
    ++v3;
  while ( Src[v3] );
  if ( a3 >= v3 + 1 )
  {
    v7 = wcschr(Src, 0x3Au);
    if ( v7 )
      goto LABEL_10;
    v8 = 4LL;
    if ( !wcsncmp(Src, L"\\??\\", 4uLL) )
      goto LABEL_12;
    if ( !wcsncmp(Src, L"\\\\", 2uLL) )
    {
      v8 = 2LL;
      goto LABEL_12;
    }
    v7 = wcschr(Src, 0x5Cu);
    if ( v7 )
LABEL_10:
      v8 = ((unsigned __int64)((char *)v7 - (char *)Src) >> 1) + 1;
    else
      v8 = 1LL;
LABEL_12:
    memmove(a2, Src, 2 * v8);
    v9 = v8;
    v10 = v8;
    if ( v8 >= v3 )
    {
LABEL_55:
      *((_WORD *)a2 + v9) = 0;
      return v5;
    }
    while ( 1 )
    {
      v11 = Src[v10];
      if ( v11 == 92 || v11 == 47 )
      {
        if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
          *((_WORD *)a2 + v9++) = 92;
        goto LABEL_54;
      }
      if ( v11 != 46 )
        break;
      if ( v10 + 1 == v3 )
        goto LABEL_55;
      v13 = Src[v10 + 1];
      if ( v13 == 92 || v13 == 47 )
      {
        ++v10;
        goto LABEL_54;
      }
      v14 = v13 == 46;
      v15 = v10 + 2;
      if ( v14 )
      {
        if ( v15 == v3 || (v16 = Src[v15], v16 == 92) || v16 == 47 )
        {
          while ( v9 >= v8 )
          {
            v19 = *((_WORD *)a2 + v9);
            *((_WORD *)a2 + v9) = 0;
            if ( v19 == 92 )
            {
              do
              {
                v20 = *((_WORD *)a2 + v9);
                *((_WORD *)a2 + v9) = 0;
                if ( v20 == 92 )
                  break;
                --v9;
              }
              while ( v9 >= v8 );
              break;
            }
            --v9;
          }
          v21 = v9 + 1;
          ++v10;
          if ( v9 >= v8 )
            v21 = v9;
          v9 = v21;
          goto LABEL_54;
        }
      }
      v17 = Src[v15];
      if ( v17 != 92 && v17 != 47 && (unsigned int)Feature_Mercury_App_Backup_V2__private_IsEnabledDeviceUsage() )
      {
        if ( v10 < v3 )
        {
          while ( 1 )
          {
            v18 = Src[v10];
            if ( v18 == 92 )
              break;
            if ( v18 != 47 )
            {
              *((_WORD *)a2 + v9) = v18;
              ++v10;
              ++v9;
              if ( v10 < v3 )
                continue;
            }
LABEL_20:
            if ( v10 >= v3 )
              goto LABEL_25;
            break;
          }
LABEL_21:
          if ( v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
            --v9;
        }
LABEL_25:
        --v10;
      }
LABEL_54:
      if ( ++v10 >= v3 )
        goto LABEL_55;
    }
    if ( v10 < v3 )
    {
      while ( 1 )
      {
        v12 = Src[v10];
        if ( v12 == 92 )
          goto LABEL_21;
        if ( v12 != 47 )
        {
          *((_WORD *)a2 + v9) = v12;
          ++v10;
          ++v9;
          if ( v10 < v3 )
            continue;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_25;
  }
  return (unsigned int)-1073741789;
}
