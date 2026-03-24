/*
 * XREFs of ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x18002AAD8
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x18002CD90 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(
        CDrawListEntryBatch::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 24);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 72);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 120);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 38) = 0;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 160);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 384);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 416);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 704);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 960);
}
