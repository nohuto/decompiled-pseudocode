/*
 * XREFs of ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042478
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180040AB8 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C8F1C (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetDirtyRects@COverlaySwapChainBase@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800F0E40 (-GetDirtyRects@COverlaySwapChainBase@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801D0050 (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E52AC (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F63E0 (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?GetDirtyRects@CConversionSwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18029EC10 (-GetDirtyRects@CConversionSwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18029F0F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x1800425E0 (-reserve@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801CF644 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 */

__int64 __fastcall CRegion::GetRectangles(FastRegion::Internal::CRgnData **a1, _QWORD *a2)
{
  FastRegion::Internal::CRgnData *v2; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  FastRegion::Internal::CRgnData *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  _OWORD *v11; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-48h]
  _DWORD *v15; // [rsp+30h] [rbp-40h]
  FastRegion::Internal::CRgnData *v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v2 = *a1;
  v5 = *(_DWORD *)*a1;
  if ( v5 )
  {
    v6 = (__int64)v2 + 8 * v5 + 4;
    v7 = (v6 + *(int *)(v6 + 4) - (__int64)*((int *)v2 + 4) - ((__int64)v2 + 12)) >> 3;
    if ( (_DWORD)v7 )
    {
      std::vector<tagRECT>::reserve(a2, (unsigned int)v7 + ((__int64)(a2[1] - *a2) >> 4));
      FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v13);
      while ( (unsigned __int64)v15 < v14 )
      {
        DWORD1(v18) = *v15;
        v8 = v16;
        HIDWORD(v18) = v15[2];
        v9 = 2 * v17;
        LODWORD(v18) = *((_DWORD *)v16 + v9);
        v10 = *((_DWORD *)v16 + v9 + 1);
        v11 = (_OWORD *)a2[1];
        DWORD2(v18) = v10;
        if ( v11 == (_OWORD *)a2[2] )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a2, v11, &v18);
        }
        else
        {
          *v11 = v18;
          a2[1] += 16LL;
        }
        FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v13);
      }
    }
  }
  else
  {
    LODWORD(v7) = 0;
  }
  return (unsigned int)v7;
}
