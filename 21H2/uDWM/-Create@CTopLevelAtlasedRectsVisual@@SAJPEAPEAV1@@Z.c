/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180027D78
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005D88 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180022C80 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x1800267B4 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct CTopLevelAtlasedRectsVisual **a1)
{
  CAtlasedRectsVisual *v2; // rax
  struct CTopLevelAtlasedRectsVisual *v3; // rbx
  int v4; // eax
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x20u);
    return (unsigned int)v5;
  }
  v2 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                280LL);
  v3 = v2;
  if ( v2 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
    *(_QWORD *)v3 = &CTopLevelAtlasedRectsVisual::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(struct CTopLevelAtlasedRectsVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x20u);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
      v5 = 0;
    }
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x20u);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
