/*
 * XREFs of ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x180103974
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800D1140 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(
        CDrawListEntryBatch::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 15);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 38) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 88);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 120);
}
