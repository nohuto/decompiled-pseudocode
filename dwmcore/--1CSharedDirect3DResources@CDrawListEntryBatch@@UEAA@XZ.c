/*
 * XREFs of ??1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ @ 0x180102F1C
 * Callers:
 *     ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x180102EE0 (--_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDrawListEntryBatch::CSharedDirect3DResources::~CSharedDirect3DResources(
        CDrawListEntryBatch::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 120);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 88);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 3);
}
