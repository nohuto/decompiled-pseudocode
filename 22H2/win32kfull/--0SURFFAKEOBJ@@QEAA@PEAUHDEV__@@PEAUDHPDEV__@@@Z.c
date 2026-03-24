/*
 * XREFs of ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016AA54
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8EAC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiGetETM @ 0x1C013F420 (NtGdiGetETM.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C01598F4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B154 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C027309C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

SURFFAKEOBJ *__fastcall SURFFAKEOBJ::SURFFAKEOBJ(SURFFAKEOBJ *this, HDEV a2, struct DHPDEV__ *a3)
{
  HSURF DefaultBitmap; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  DefaultBitmap = (HSURF)GrepCreateDefaultBitmap();
  SURFREF::SURFREF(this, DefaultBitmap);
  *((_DWORD *)this + 18) = 0;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 10) = *(_QWORD *)(v7 + 40);
    *((_QWORD *)this + 11) = *(_QWORD *)(v7 + 48);
    *((_WORD *)this + 48) = *(_WORD *)(v7 + 100);
    *(_QWORD *)(v7 + 40) = a3;
    v8 = *((_QWORD *)this + 4);
    v9 = v8 + 48;
    if ( !v8 )
      v9 = 24LL;
    *(_QWORD *)v9 = a2;
    v10 = *((_QWORD *)this + 4);
    v11 = v10 + 100;
    if ( !v10 )
      v11 = 76LL;
    *(_WORD *)v11 = 1;
    CAutoTGO::vGuard(
      (SURFFAKEOBJ *)((char *)this + 40),
      *((void **)this + 4),
      (void (*)(void *))_lambda_1fbf392c06c10eabf746b5d0693f4b3c_::_lambda_invoker_cdecl_);
  }
  return this;
}
