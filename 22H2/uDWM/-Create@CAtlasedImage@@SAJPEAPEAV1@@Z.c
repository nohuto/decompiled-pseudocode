/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x180001AEC
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001760 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009AFD0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180023F1C (--0CAtlasedImage@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct CAtlasedImage **a1)
{
  CAtlasedImage *v2; // rax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v2 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            128LL);
    if ( v2 )
      v2 = CAtlasedImage::CAtlasedImage(v2);
    if ( v2 )
    {
      *a1 = v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA3u, v5);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xA3u, v5);
  }
  return v3;
}
