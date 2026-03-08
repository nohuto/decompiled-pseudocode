/*
 * XREFs of ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x1800B73F0
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800B72EC (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::CAtlasBitmapResource(
        CAtlasBitmapResource *this,
        struct IAtlasEntryOwner *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CAtlasBitmapResource *result; // rax

  *((_QWORD *)this + 1) = &CAtlasBitmapResource::`vbtable';
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vbtable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 13) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 10) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `CMILCOMBaseT<IBitmapResource>'};
  *((_QWORD *)this + 3) = &CAtlasBitmapResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CAtlasBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 72;
  v4 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 88;
  *((_DWORD *)this + 14) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  *((_WORD *)this + 32) = 0;
  return result;
}
