/*
 * XREFs of ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18029C13C
 * Callers:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180131930 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800DE59C (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::GetDXGIResource(CD2DBitmap *this, struct IDXGIResource **a2, unsigned int *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  *a2 = 0LL;
  v5 = CD2DBitmap::EnsureBitmap(this);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x164u, 0LL);
  }
  else
  {
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x166u, 0LL);
  }
  return v7;
}
