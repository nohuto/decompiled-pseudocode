/*
 * XREFs of ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180096D40
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000DE80 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800974B0 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180097850 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B63D0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180025AA8 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x1800B6D40 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Create(struct CDesktopThumbnailCVIVisual **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx
  int v5; // eax

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xB2u);
    return (unsigned int)v2;
  }
  v3 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              344LL);
  v4 = v3;
  if ( v3 )
  {
    CRenderDataVisual::CRenderDataVisual(v3);
    *((_QWORD *)v4 + 35) = 0LL;
    *((_QWORD *)v4 + 37) = 0LL;
    *((_QWORD *)v4 + 38) = 0LL;
    *(_WORD *)((char *)v4 + 337) = 0;
    *(_QWORD *)v4 = &CDesktopThumbnailCVIVisual::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = CDesktopThumbnailCVIVisual::Initialize(v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v4;
      v4 = 0LL;
      v2 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xB2u);
    }
    if ( v2 >= 0 )
      goto LABEL_13;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xB2u);
  }
  *a1 = 0LL;
LABEL_13:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v2;
}
