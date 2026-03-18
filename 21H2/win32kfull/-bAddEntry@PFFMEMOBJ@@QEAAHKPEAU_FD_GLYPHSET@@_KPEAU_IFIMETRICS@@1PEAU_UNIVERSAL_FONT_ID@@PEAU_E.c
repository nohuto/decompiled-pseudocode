/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D9EC
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D8E4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA244 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C000B988 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C000DBEC (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0011894 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00150C4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned int v12; // ebp
  unsigned __int8 v13; // r15
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  wchar_t *v17; // rdi
  int v18; // r15d
  struct _FLENTRY *BaseFontEntry; // rsi
  const unsigned __int16 *v21; // rdx
  __int16 v22; // si
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v26 = *(_QWORD *)(*(_QWORD *)this + 216LL) + (a2 - 1) * *(_DWORD *)(*(_QWORD *)this + 212LL);
  if ( !v26 )
    return 0;
  v11 = a8;
  v12 = 1;
  if ( a8 )
  {
    v14 = *(_QWORD **)a8;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
  }
  if ( !(unsigned int)PFEMEMOBJ::bInit(
                        (PFEMEMOBJ *)&v26,
                        (struct PFF *)v9,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        *(_QWORD *)(v9 + 80) == 0LL,
                        a7,
                        v13) )
    return 0;
  if ( v13 )
  {
    v21 = (const unsigned __int16 *)*((_QWORD *)v11 + 1);
    v15 = v26;
    if ( v21 )
    {
      if ( a2 != 1 )
      {
        v22 = *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32));
        if ( !PFEOBJ::bCheckFamilyName((PFEOBJ *)&v26, v21, 1, 0LL) )
          goto LABEL_8;
        v23 = 0LL;
        if ( v22 == 64 )
          v23 = 1LL;
        v14[v23] = v15;
        if ( v22 == 64 )
          goto LABEL_8;
        goto LABEL_23;
      }
    }
    else
    {
      v25 = a2 - 1;
      if ( v25 )
      {
        if ( v25 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v26 + 32) + 16LL) + *(_QWORD *)(v26 + 32)) != 64 )
          goto LABEL_8;
        goto LABEL_23;
      }
    }
    *v14 = v26;
LABEL_23:
    v14[1] = v15;
    goto LABEL_8;
  }
  v15 = v26;
  v16 = *(_QWORD *)(v26 + 32);
  v17 = (wchar_t *)(v16 + *(int *)(v16 + 8));
  v18 = *(_DWORD *)(v16 + 48) & 0x8000000;
  BaseFontEntry = FindBaseFontEntry(v17);
  if ( BaseFontEntry )
    goto LABEL_35;
  if ( v18 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v17[v24] );
    BaseFontEntry = FindBaseFontEntry(&v17[v24 + 1]);
    if ( BaseFontEntry )
    {
LABEL_35:
      if ( IsCHSBaseFont(*(const unsigned __int16 **)(*(_QWORD *)this + 24LL), *(_DWORD *)(*(_QWORD *)this + 32LL)) )
        *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
      *(_QWORD *)(v15 + 120) = BaseFontEntry;
      goto LABEL_9;
    }
  }
LABEL_8:
  *(_QWORD *)(v15 + 120) = 0LL;
LABEL_9:
  *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 208LL))++ + 216) = v15;
  return v12;
}
