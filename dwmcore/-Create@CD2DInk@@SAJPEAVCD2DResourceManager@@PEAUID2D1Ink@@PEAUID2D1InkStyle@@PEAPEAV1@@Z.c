/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802994EC
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180282E40 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800EAB60 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180299364 (--0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  CD2DInk *v8; // rax
  __int64 v9; // rcx
  CD2DInk *v10; // rax
  CD2DInk *v11; // rbx
  unsigned int v12; // edi

  *a4 = 0LL;
  v8 = (CD2DInk *)operator new(0x88uLL);
  if ( v8 && (v10 = CD2DInk::CD2DInk(v8, a1), (v11 = v10) != 0LL) )
  {
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v11 + 10) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v11 + 11) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)v11 + 3), v11);
    v12 = 0;
    *a4 = v11;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  return v12;
}
