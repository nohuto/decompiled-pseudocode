/*
 * XREFs of _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C031EBE0
 * Callers:
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0197A80 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  unsigned int v2; // edi

  operator delete(*(void **)a1);
  operator delete(*(void **)(a1 + 8));
  operator delete(*(void **)(a1 + 16));
  operator delete(*(void **)(a1 + 24));
  operator delete(*(void **)(a1 + 32));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 48) && *(_DWORD *)(a1 + 64) )
  {
    do
      operator delete(*(void **)(*(_QWORD *)(a1 + 48) + 8LL * v2++));
    while ( v2 < *(_DWORD *)(a1 + 64) );
  }
  operator delete(*(void **)(a1 + 48));
  operator delete(*(void **)(a1 + 40));
  operator delete(*(void **)(a1 + 56));
}
