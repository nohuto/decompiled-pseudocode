/*
 * XREFs of ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C012FD24
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02D79C0 (NtGdiGetETM.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C012FBD0 (--1CAutoTGO@@QEAA@XZ.c)
 */

void __fastcall SURFFAKEOBJ::~SURFFAKEOBJ(SURFFAKEOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *(_QWORD *)this )
  {
    CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 8));
    v2 = *(_QWORD *)this + 40LL;
    if ( !*(_QWORD *)this )
      v2 = 16LL;
    *(_QWORD *)v2 = *((_QWORD *)this + 6);
    v3 = *(_QWORD *)this + 48LL;
    if ( !*(_QWORD *)this )
      v3 = 24LL;
    *(_QWORD *)v3 = *((_QWORD *)this + 7);
    v4 = *(_QWORD *)this + 100LL;
    if ( !*(_QWORD *)this )
      v4 = 76LL;
    *(_WORD *)v4 = *((_WORD *)this + 32);
    SURFREF::vTryDeleteSurface(this);
  }
  CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 8));
  EPALOBJ::~EPALOBJ(this);
}
