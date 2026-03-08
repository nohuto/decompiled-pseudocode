/*
 * XREFs of ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180207474
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1802074D8 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1802020F4 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 *     ??1?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ @ 0x180207448 (--1-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CDrawListEntryBatch::~CDrawListEntryBatch(CDrawListEntryBatch *this)
{
  bool v1; // zf
  volatile signed __int32 *v3; // rcx

  v1 = *((_DWORD *)this + 12) == -1;
  *(_QWORD *)this = &CDrawListEntryBatch::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CDrawListEntryBatch::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  if ( !v1 )
    CDrawListBatchManager::FreeBatchResources((CDrawListBatchManager *)(*((_QWORD *)this + 3) + 24LL), this);
  std::deque<CMegaRect>::~deque<CMegaRect>((void **)this + 14);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 4);
}
