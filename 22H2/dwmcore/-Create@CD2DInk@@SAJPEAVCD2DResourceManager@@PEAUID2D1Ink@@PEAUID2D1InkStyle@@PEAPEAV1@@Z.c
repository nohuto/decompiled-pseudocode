/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18024CB4C
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18023B080 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18024C9E4 (--0CD2DInk@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z @ 0x18024CC2C (-Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  CD2DInk *v8; // rax
  __int64 v9; // rcx
  CD2DInk *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx

  *a4 = 0LL;
  v8 = (CD2DInk *)operator new(0x88uLL);
  if ( v8 )
    v10 = CD2DInk::CD2DInk(v8, a1);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CD2DInk::Initialize(v10, a2, a3);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x16u, 0LL);
      (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  return v11;
}
