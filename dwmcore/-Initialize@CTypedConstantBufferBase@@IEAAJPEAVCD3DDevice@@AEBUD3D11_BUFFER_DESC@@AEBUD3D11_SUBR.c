__int64 __fastcall CTypedConstantBufferBase::Initialize(
        struct ID3D11Buffer **this,
        struct CD3DDevice *a2,
        const struct D3D11_BUFFER_DESC *a3,
        const struct D3D11_SUBRESOURCE_DATA *a4)
{
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(this);
  return CD3DDevice::CreateBuffer(a2, a3, a4, this);
}
