/*
 * XREFs of ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x180100060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DConstantBuffer::ReleaseD3DResources(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 12);
}
