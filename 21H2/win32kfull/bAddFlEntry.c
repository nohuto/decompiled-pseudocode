/*
 * XREFs of bAddFlEntry @ 0x1C0014B64
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0014770 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0011B90 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C0013268 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0014F84 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00150C4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C001514C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, const unsigned __int16 *a2, int a3, int a4, __int64 *a5)
{
  wchar_t *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rsi
  struct _FLENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // r12
  __int64 v15; // rax
  PFTOBJ *v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 i; // rcx
  __int64 *v21; // r14
  __int64 *v22; // rax
  __int64 v24; // rax
  PFTOBJ *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+48h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+50h] [rbp-39h] BYREF
  struct PFF *v30; // [rsp+58h] [rbp-31h] BYREF
  struct _FONTHASH **v31; // [rsp+60h] [rbp-29h] BYREF
  __int128 v32; // [rsp+68h] [rbp-21h] BYREF
  __int128 *v33; // [rsp+78h] [rbp-11h] BYREF
  wchar_t *v34; // [rsp+80h] [rbp-9h]
  wchar_t *v35[2]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v36; // [rsp+98h] [rbp+Fh]

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1, 0x450u);
  v6 = Str1;
  v7 = 0;
  if ( !Str1 )
    goto LABEL_45;
  v8 = 1;
  v36 = 0LL;
  gbAnyLinkedFonts = 1;
  v9 = 0LL;
  v10 = 0LL;
  *(_OWORD *)v35 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (int)StringCchCopyW(v6 + 260, 0x124uLL, a2) < 0
    || !ParseFontLinkEntry(v6 + 260, (struct FontLinkData *)v35)
    || !(unsigned int)bAppendSysDirectory(v6, v6 + 260)
    || !_wcsicmp(v6, &Dst) )
  {
LABEL_45:
    v8 = 0;
    goto LABEL_28;
  }
  if ( off_1C0326330 != (_UNKNOWN *)&off_1C0326330 )
  {
    BaseFontEntry = FindBaseFontEntry(a1);
    v9 = (__int64)BaseFontEntry;
    if ( BaseFontEntry )
    {
      v12 = (struct _LIST_ENTRY *)((char *)BaseFontEntry + 16);
      if ( v12->Flink != v12 )
      {
        if ( FindLinkedFontEntry(v12, v6, v35[1]) )
          goto LABEL_28;
      }
    }
  }
  v31 = gpPFTPublic;
  v33 = &v32;
  v28 = 0;
  v32 = 0LL;
  v34 = v35[1];
  v13 = a3 != 0 ? 8 : 10;
  if ( v35[1] && !_wcsicmp(v35[1], L"Segoe UI Symbol") )
    v13 |= 0x4000u;
  if ( v9 )
  {
    v14 = 0LL;
  }
  else
  {
    v24 = Win32AllocPool(112LL, 1718382187LL);
    v9 = v24;
    v14 = v24;
    if ( !v24 )
      goto LABEL_29;
    if ( (int)StringCchCopyW((unsigned __int16 *)(v24 + 32), 0x21uLL, a1) < 0 )
    {
      PFTOBJ::bUnloadEUDCFont(v25, v6);
LABEL_40:
      Win32FreePool(v14);
      goto LABEL_31;
    }
  }
  v15 = Win32AllocPool(48LL, 1718382187LL);
  v10 = v15;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 24) = v36;
    v30 = 0LL;
    if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                         (PUBLIC_PFTOBJ *)&v31,
                         v6,
                         &v28,
                         v13,
                         &v30,
                         (struct _EUDCLOAD *)&v33,
                         0) )
    {
      if ( (_QWORD)v32 )
      {
        v17 = (__int64 *)&v32;
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
          *(_QWORD *)(v9 + 100) = 0LL;
          *(_QWORD *)(v9 + 24) = v9 + 16;
          *(_QWORD *)(v9 + 16) = v9 + 16;
          v26 = (__int64 *)off_1C0326338;
          if ( *off_1C0326338 != (_UNKNOWN *)&off_1C0326330 )
            goto LABEL_44;
          ++dword_1C0336374;
          *(_QWORD *)(v9 + 8) = off_1C0326338;
          *(_QWORD *)v9 = &off_1C0326330;
          *v26 = v9;
          off_1C0326338 = (_UNKNOWN **)v9;
          if ( a5 )
            *a5 = v9;
          ++dword_1C033637C;
        }
        for ( i = 0LL; i < 2; ++i )
          *(_QWORD *)(v10 + 8 * i + 32) = *((_QWORD *)&v32 + i);
        *(_DWORD *)(v10 + 16) = a3;
        *(_DWORD *)(v10 + 20) = 0;
        *(_DWORD *)(v10 + 20) = v34 != 0LL;
        ++*(_DWORD *)(v9 + 100);
        ++*(_DWORD *)(v9 + 104);
        v21 = (__int64 *)(v9 + 16);
        if ( a4 >= 0 )
        {
          v27 = *v21;
          if ( *(__int64 **)(*v21 + 8) == v21 )
          {
            *(_QWORD *)v10 = v27;
            *(_QWORD *)(v10 + 8) = v21;
            *(_QWORD *)(v27 + 8) = v10;
            *v21 = v10;
            goto LABEL_28;
          }
        }
        else
        {
          v22 = (__int64 *)v21[1];
          if ( (__int64 *)*v22 == v21 )
          {
            *(_QWORD *)v10 = v21;
            *(_QWORD *)(v10 + 8) = v22;
            *v22 = v10;
            v21[1] = v10;
LABEL_28:
            v7 = v8;
            goto LABEL_29;
          }
        }
LABEL_44:
        __fastfail(3u);
      }
      PFTOBJ::bUnloadEUDCFont(v16, v6);
    }
  }
  if ( v14 )
    goto LABEL_40;
LABEL_31:
  if ( v10 )
    Win32FreePool(v10);
LABEL_29:
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Str1);
  return v7;
}
