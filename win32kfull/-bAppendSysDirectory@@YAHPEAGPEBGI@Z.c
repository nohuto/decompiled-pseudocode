/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4
 * Callers:
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C00BD320 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C02A0D90 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02A1F2C (bDeleteFlEntry.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00BA474 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  char *v7; // rdx
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // rax
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int16 *v14; // rax
  __int64 v15; // r8
  char *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  signed __int64 v19; // r9
  __int16 v20; // r8
  char *v21; // rax
  wchar_t *v23; // rax
  _WORD *v24; // rdx
  __int64 v25; // r8
  unsigned __int16 *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int16 v28; // ax
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v30, 0x208u);
  v4 = v30;
  if ( v30 )
  {
    v5 = 260LL;
    if ( wcschr(a2, 0x5Cu) )
    {
      cCapString(a1, a2, 260LL);
      v23 = wcsstr(a1, L"%SYSTEMROOT%");
      if ( v23 )
      {
        *v23 = 92;
        v24 = v23 + 12;
        v25 = -1LL;
        do
          ++v25;
        while ( v24[v25] );
        memmove(v23 + 11, v24, 2 * v25 + 2);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(a1 + 1) != 6029370 )
        goto LABEL_25;
      if ( (int)StringCchCopyW(v4, 0x104uLL, a1) >= 0 )
      {
        v26 = a1;
        v27 = (char *)L"\\??\\" - (char *)a1;
        do
        {
          if ( v5 == -2147483386 )
            break;
          v28 = *(unsigned __int16 *)((char *)v26 + v27);
          if ( !v28 )
            break;
          *v26++ = v28;
          --v5;
        }
        while ( v5 );
        v29 = v26 - 1;
        if ( v5 )
          v29 = v26;
        *v29 = 0;
        if ( v5 )
        {
          if ( StringCchCatW(a1, v27, v4) >= 0 )
            goto LABEL_25;
        }
      }
    }
    else
    {
      v6 = 260LL;
      v7 = (char *)((char *)L"\\??\\" - (char *)v4);
      v8 = v4;
      do
      {
        if ( v6 == -2147483386 )
          break;
        v9 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v7);
        if ( !v9 )
          break;
        *v8++ = v9;
        --v6;
      }
      while ( v6 );
      v10 = v8 - 1;
      if ( v6 )
        v10 = v8;
      *v10 = 0;
      if ( v6 )
      {
        NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v8, v7);
        if ( StringCchCatW(v4, v12, NtSystemRoot) >= 0 )
        {
          v13 = 260LL;
          v14 = v4;
          do
          {
            if ( !*v14 )
              break;
            ++v14;
            --v13;
          }
          while ( v13 );
          v15 = (260 - v13) & -(__int64)(v13 != 0);
          if ( v13 )
          {
            v16 = (char *)&v4[v15];
            v17 = 260 - v15;
            if ( v15 != 260 )
            {
              v18 = 2147483646LL;
              v19 = (char *)L"\\fonts\\" - v16;
              do
              {
                if ( !v18 )
                  break;
                v20 = *(_WORD *)&v16[v19];
                if ( !v20 )
                  break;
                *(_WORD *)v16 = v20;
                --v18;
                v16 += 2;
                --v17;
              }
              while ( v17 );
            }
            v21 = v16 - 2;
            if ( v17 )
              v21 = v16;
            *(_WORD *)v21 = 0;
            if ( v17 )
            {
              if ( StringCchCatW(v4, v17, a2) >= 0 )
              {
                cCapString(a1, v4, 260LL);
LABEL_25:
                AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v30);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v30);
  return 0LL;
}
