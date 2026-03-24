/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180093954
 * Callers:
 *     ?Draw@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800F6270 (-Draw@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x180068A9C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180093C2C (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v5; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  char *v13; // rcx
  struct IBitmapResource *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v5 = *((_QWORD *)this - 11);
  if ( !v5 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 200LL) )
    v9 = -2003292404;
  else
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IBitmapResource **))this - 11))(
           *((_QWORD *)this - 11),
           &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
           &v15);
  if ( v9 >= 0 && CDrawingContext::DrawAsOverlay((COverlayContext **)a2, v15) )
  {
    v12 = 0;
  }
  else
  {
    v10 = CBrush::Draw((CSurfaceBrush *)((char *)this - 80), a2, a3, a4);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19Eu, 0LL);
  }
  if ( v15 )
  {
    v13 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
