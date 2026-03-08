/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800E3F08
 * Callers:
 *     ?GetCurrentRenderingRealization@CBitmapResource@@$4PPPPPPPM@A@EAAJPEAPEAVIBitmapRealization@@@Z @ 0x180118390 (-GetCurrentRenderingRealization@CBitmapResource@@$4PPPPPPPM@A@EAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this - 4);
  v3 = 0;
  if ( v2 )
  {
    *a2 = (struct IBitmapRealization *)v2;
    v4 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292404, 0x61u, 0LL);
  }
  return v3;
}
