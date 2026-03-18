/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850
 * Callers:
 *     bAddFlEntry @ 0x1C0014B64 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C00D3540 (vInitFontsDirectoryNameInformation.c)
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C0295610 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C02961A8 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00149E4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r8
  char *v8; // rdx
  unsigned __int16 *v9; // rcx
  unsigned __int16 v10; // ax
  unsigned __int16 *v11; // rax
  const unsigned __int16 *NtSystemRoot; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // r9
  __int16 v21; // r8
  char *v22; // rax
  wchar_t *v24; // rax
  _WORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int16 *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int16 v29; // ax
  unsigned __int16 *v30; // rax
  unsigned __int16 *v31; // [rsp+68h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v31, 0x208u);
  v4 = v31;
  if ( !v31 )
    goto LABEL_26;
  v5 = 1;
  v6 = 260LL;
  if ( !wcschr(a2, 0x5Cu) )
  {
    v7 = 260LL;
    v8 = (char *)((char *)L"\\??\\" - (char *)v4);
    v9 = v4;
    do
    {
      if ( v7 == -2147483386 )
        break;
      v10 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v8);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v7;
    }
    while ( v7 );
    v11 = v9 - 1;
    if ( v7 )
      v11 = v9;
    *v11 = 0;
    if ( v7 )
    {
      NtSystemRoot = (const unsigned __int16 *)RtlGetNtSystemRoot(v9, v8);
      if ( (int)StringCchCatW(v4, v13, NtSystemRoot) >= 0 )
      {
        v14 = 260LL;
        v15 = v4;
        do
        {
          if ( !*v15 )
            break;
          ++v15;
          --v14;
        }
        while ( v14 );
        v16 = (260 - v14) & -(__int64)(v14 != 0);
        if ( v14 )
        {
          v17 = (char *)&v4[v16];
          v18 = 260 - v16;
          if ( v16 != 260 )
          {
            v19 = 2147483646LL;
            v20 = (char *)L"\\fonts\\" - v17;
            do
            {
              if ( !v19 )
                break;
              v21 = *(_WORD *)&v17[v20];
              if ( !v21 )
                break;
              *(_WORD *)v17 = v21;
              --v19;
              v17 += 2;
              --v18;
            }
            while ( v18 );
          }
          v22 = v17 - 2;
          if ( v18 )
            v22 = v17;
          *(_WORD *)v22 = 0;
          if ( v18 )
          {
            if ( (int)StringCchCatW(v4, v18, a2) >= 0 )
            {
              cCapString(a1, v4, 260LL);
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_26:
    v5 = 0;
    goto LABEL_25;
  }
  cCapString(a1, a2, 260LL);
  v24 = wcsstr(a1, L"%SYSTEMROOT%");
  if ( v24 )
  {
    *v24 = 92;
    v25 = v24 + 12;
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    memmove(v24 + 11, v25, 2 * v26 + 2);
  }
  else if ( *(_DWORD *)(a1 + 1) == 6029370 )
  {
    if ( (int)StringCchCopyW(v4, 0x104uLL, a1) < 0 )
      goto LABEL_26;
    v27 = a1;
    v28 = (char *)L"\\??\\" - (char *)a1;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v29 = *(unsigned __int16 *)((char *)v27 + v28);
      if ( !v29 )
        break;
      *v27++ = v29;
      --v6;
    }
    while ( v6 );
    v30 = v27 - 1;
    if ( v6 )
      v30 = v27;
    *v30 = 0;
    if ( !v6 || (int)StringCchCatW(a1, v28, v4) < 0 )
      goto LABEL_26;
  }
LABEL_25:
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v31);
  return v5;
}
