/*
 * XREFs of ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016B450
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiGetETM @ 0x1C013F9C0 (NtGdiGetETM.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0159EB4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B784 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C011FCC0 (--1CAutoTGO@@QEAA@XZ.c)
 */

void __fastcall SURFFAKEOBJ::~SURFFAKEOBJ(SURFFAKEOBJ *this)
{
  CAutoTGO *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx

  v1 = (SURFFAKEOBJ *)((char *)this + 40);
  if ( *((_QWORD *)this + 4) )
  {
    CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 40));
    v3 = *((_QWORD *)this + 4);
    v4 = v3 + 40;
    if ( !v3 )
      v4 = 16LL;
    *(_QWORD *)v4 = *((_QWORD *)this + 10);
    v5 = *((_QWORD *)this + 4);
    v6 = v5 + 48;
    if ( !v5 )
      v6 = 24LL;
    *(_QWORD *)v6 = *((_QWORD *)this + 11);
    v7 = *((_QWORD *)this + 4);
    v8 = v7 + 100;
    if ( !v7 )
      v8 = 76LL;
    *(_WORD *)v8 = *((_WORD *)this + 48);
    SURFREF::vTryDeleteSurface(this);
  }
  CAutoTGO::~CAutoTGO(v1);
  SURFREF::~SURFREF(this, v9);
}
