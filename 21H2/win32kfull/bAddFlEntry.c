/*
 * XREFs of bAddFlEntry @ 0x1C00A0C38
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C00A1100 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0297DB0 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0064CBC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FE08 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00A09FC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00A0FB4 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00A11D4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00A1CFC (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00A1DA4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00A1FB8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, char *a2, int a3, int a4, struct _FLENTRY **a5)
{
  wchar_t *v6; // rbx
  struct _FLENTRY *v7; // rsi
  void *v8; // rdi
  unsigned int v9; // r13d
  int v10; // r14d
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // r12d
  struct PFF *v14; // r15
  void *v15; // rax
  PFTOBJ *v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 i; // rcx
  int v21; // eax
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  void *v25; // rax
  struct _FLENTRY **v26; // rax
  __int64 v27; // rax
  wchar_t *Str1; // [rsp+48h] [rbp-31h] BYREF
  struct PFF *v29; // [rsp+50h] [rbp-29h] BYREF
  struct _FONTHASH **v30; // [rsp+58h] [rbp-21h] BYREF
  __int128 v31; // [rsp+60h] [rbp-19h] BYREF
  __int128 *v32; // [rsp+70h] [rbp-9h] BYREF
  wchar_t *v33; // [rsp+78h] [rbp-1h]
  wchar_t *v34[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v35; // [rsp+90h] [rbp+17h]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  if ( !Str1 )
    goto LABEL_49;
  v7 = 0LL;
  v29 = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  gbAnyLinkedFonts = 1;
  *(_OWORD *)v34 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW((char *)v6 + 520, 292LL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v34)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_49:
    v10 = 0;
    goto LABEL_30;
  }
  if ( off_1C032B378 != (_UNKNOWN *)&off_1C032B378 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v7 = BaseFontEntry;
    if ( BaseFontEntry )
    {
      v12 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v12->Flink != v12 )
      {
        if ( FindLinkedFontEntry(v12, v6, v34[1]) )
          goto LABEL_30;
      }
    }
  }
  LODWORD(Str1) = 0;
  v30 = gpPFTPublic;
  v32 = &v31;
  v33 = v34[1];
  v31 = 0LL;
  v13 = a3 != 0 ? 8 : 10;
  if ( v34[1] && !_wcsicmp(v34[1], L"Segoe UI Symbol") )
    v13 |= 0x4000u;
  if ( v7 )
  {
    v14 = v29;
  }
  else
  {
    v25 = PALLOCMEM2(0x70uLL, 1718382187LL, 0);
    v7 = (struct _FLENTRY *)v25;
    v14 = (struct PFF *)v25;
    if ( !v25 )
      goto LABEL_31;
    if ( (int)StringCchCopyW((char *)v25 + 32, 33LL, (char *)a1) < 0 )
      goto LABEL_45;
  }
  v15 = PALLOCMEM2(0x30uLL, 1718382187LL, 0);
  v8 = v15;
  if ( !v15 )
    goto LABEL_34;
  v29 = 0LL;
  *((_QWORD *)v15 + 3) = v35;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                        (PUBLIC_PFTOBJ *)&v30,
                        v6,
                        (unsigned int *)&Str1,
                        v13,
                        &v29,
                        (struct _EUDCLOAD *)&v32,
                        0) )
    goto LABEL_34;
  if ( (_QWORD)v31 )
  {
    v17 = (__int64 *)&v31;
    v18 = 2LL;
    do
    {
      v19 = *v17++;
      *(_DWORD *)(v19 + 12) |= 0x200u;
      --v18;
    }
    while ( v18 );
    if ( v14 )
    {
      *((_DWORD *)v7 + 25) = 0;
      *((_DWORD *)v7 + 26) = 0;
      *((_QWORD *)v7 + 3) = (char *)v7 + 16;
      *((_QWORD *)v7 + 2) = (char *)v7 + 16;
      v26 = (struct _FLENTRY **)off_1C032B380;
      if ( *off_1C032B380 != (_UNKNOWN *)&off_1C032B378 )
        goto LABEL_48;
      ++dword_1C033B0BC;
      *((_QWORD *)v7 + 1) = off_1C032B380;
      *(_QWORD *)v7 = &off_1C032B378;
      *v26 = v7;
      off_1C032B380 = (_UNKNOWN **)v7;
      if ( a5 )
        *a5 = v7;
      ++dword_1C033B0B4;
    }
    for ( i = 0LL; i < 2; ++i )
      *((_QWORD *)v8 + i + 4) = *((_QWORD *)&v31 + i);
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 4) = a3;
    v21 = *((_DWORD *)v8 + 5);
    if ( v33 )
      v21 = 1;
    *((_DWORD *)v8 + 5) = v21;
    ++*((_DWORD *)v7 + 25);
    ++*((_DWORD *)v7 + 26);
    v22 = (_QWORD *)((char *)v7 + 16);
    if ( a4 >= 0 )
    {
      v27 = *v22;
      if ( *(_QWORD **)(*v22 + 8LL) == v22 )
      {
        *(_QWORD *)v8 = v27;
        *((_QWORD *)v8 + 1) = v22;
        *(_QWORD *)(v27 + 8) = v8;
        *v22 = v8;
        goto LABEL_30;
      }
    }
    else
    {
      v23 = (_QWORD *)v22[1];
      if ( (_QWORD *)*v23 == v22 )
      {
        *(_QWORD *)v8 = v22;
        *((_QWORD *)v8 + 1) = v23;
        *v23 = v8;
        v22[1] = v8;
LABEL_30:
        v9 = v10;
        goto LABEL_31;
      }
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_45:
  PFTOBJ::bUnloadEUDCFont(v16, v6);
LABEL_34:
  if ( v14 )
    Win32FreePool(v14);
  if ( v8 )
    Win32FreePool(v8);
LABEL_31:
  if ( v6 )
    Win32FreePool(v6);
  return v9;
}
