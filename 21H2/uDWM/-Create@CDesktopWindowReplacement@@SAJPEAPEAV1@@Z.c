/*
 * XREFs of ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180047C3C
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800477A8 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180025AA8 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x180058192 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopWindowReplacement::Create(struct CDesktopWindowReplacement **a1)
{
  __int64 v2; // rax
  CRenderDataVisual *v3; // rbx
  int v4; // eax
  int v5; // edi

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3CBu);
    return (unsigned int)v5;
  }
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         280LL);
  v3 = (CRenderDataVisual *)v2;
  if ( v2 )
  {
    memset_0((void *)(v2 + 8), 0, 0x110uLL);
    CRenderDataVisual::CRenderDataVisual(v3);
    *(_QWORD *)v3 = &CDesktopWindowReplacement::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3CBu);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3CBu);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
