/*
 * XREFs of ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C012FC34
 * Callers:
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02D79C0 (NtGdiGetETM.c)
 * Callees:
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C012FAEC (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

SURFFAKEOBJ *__fastcall SURFFAKEOBJ::SURFFAKEOBJ(SURFFAKEOBJ *this, HDEV a2, struct DHPDEV__ *a3)
{
  struct HBITMAP__ *DefaultBitmap; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  DefaultBitmap = GrepCreateDefaultBitmap();
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheck(DefaultBitmap, v7);
  *(_QWORD *)this = v8;
  *((_DWORD *)this + 10) = 0;
  if ( v8 )
  {
    *((_QWORD *)this + 6) = *(_QWORD *)(v8 + 40);
    *((_QWORD *)this + 7) = *(_QWORD *)(v8 + 48);
    *((_WORD *)this + 32) = *(_WORD *)(v8 + 100);
    *(_QWORD *)(v8 + 40) = a3;
    v9 = *(_QWORD *)this + 48LL;
    if ( !*(_QWORD *)this )
      v9 = 24LL;
    *(_QWORD *)v9 = a2;
    v10 = *(_QWORD *)this + 100LL;
    if ( !*(_QWORD *)this )
      v10 = 76LL;
    *(_WORD *)v10 = 1;
    CAutoTGO::vGuard(
      (SURFFAKEOBJ *)((char *)this + 8),
      *(void **)this,
      (void (*)(void *))_lambda_1fbf392c06c10eabf746b5d0693f4b3c_::_lambda_invoker_cdecl_);
  }
  return this;
}
