/*
 * XREFs of ??1CDeviceResource@@MEAA@XZ @ 0x18003C394
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C0DC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DA64 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1COverlaySwapChainBase@@MEAA@XZ @ 0x1800C7E4C (--1COverlaySwapChainBase@@MEAA@XZ.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x180108EF8 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ??_GCDeviceResource@@MEAAPEAXI@Z @ 0x180285590 (--_GCDeviceResource@@MEAAPEAXI@Z.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802959D4 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x18029A838 (--1CCompSwapChain@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802B02B0 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResource::~CDeviceResource(CDeviceResource *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CDeviceResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CDeviceResource::`vftable'{for `IDeviceResource'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) - 48;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 4) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
