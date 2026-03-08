/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801E65DC
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801BD2F8 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801BDB2C (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801ECA4C (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x18025228C (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003904C (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800C7B7C (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  COffScreenRenderTarget *result; // rax
  __int128 v10; // xmm0

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v5 = *((_QWORD *)this + 10);
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v5 + 4) + 80) = &COffScreenRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v6 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v6 + 76) = v6 - 1792;
  v7 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v7 + 76) = v7 - 1808;
  v8 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v8 + 76) = v8 - 1832;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  COcclusionContext::COcclusionContext((COffScreenRenderTarget *)((char *)this + 200));
  *((_DWORD *)this + 438) = 1;
  *((_DWORD *)this + 446) = 0;
  *((_QWORD *)this + 220) = (char *)this + 1792;
  *((_QWORD *)this + 221) = (char *)this + 1792;
  *((_DWORD *)this + 444) = 6;
  *((_DWORD *)this + 445) = 6;
  result = this;
  v10 = *(_OWORD *)a3;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_OWORD *)((char *)this + 1848) = v10;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 1065353216;
  *((_BYTE *)this + 140) = 1;
  return result;
}
