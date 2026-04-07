/*
 * XREFs of ?Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z @ 0x18009AEC4
 * Callers:
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009C448 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180025F74 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009AFD0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Create(struct CAnimatedGlassSheet **a1)
{
  CAtlasedRectsVisual *v2; // rax
  CAnimatedGlassSheet *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax

  v2 = (CAtlasedRectsVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                496LL);
  v3 = v2;
  if ( v2 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v2);
    *(_QWORD *)v3 = &CAnimatedGlassSheet::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v5 = CAnimatedGlassSheet::Initialize(v3, 1);
    v4 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x35u);
    }
    if ( v3 )
      CBaseObject::Release(v3);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x33u);
  }
  return v4;
}
