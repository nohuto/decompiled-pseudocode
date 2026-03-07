__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDevice *this,
        UINT a2,
        enum D3D11_USAGE a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DConstantBuffer *v8; // rax
  __int64 v9; // rcx
  CD3DConstantBuffer *v10; // rbx
  CD3DConstantBuffer *v11; // rax
  CD3DConstantBuffer *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  struct ID3D11Buffer *v16; // rdi
  struct ID3D11Buffer *v18; // [rsp+30h] [rbp-40h] BYREF
  struct ID3D11Buffer *v19; // [rsp+38h] [rbp-38h] BYREF
  const void *v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+4Ch] [rbp-24h]
  struct D3D11_BUFFER_DESC v23; // [rsp+50h] [rbp-20h] BYREF

  v19 = 0LL;
  v8 = (CD3DConstantBuffer *)DefaultHeap::Alloc(0x80uLL);
  v10 = v8;
  if ( !v8 )
  {
    v12 = 0LL;
    goto LABEL_14;
  }
  memset_0(v8, 0, 0x80uLL);
  v11 = CD3DConstantBuffer::CD3DConstantBuffer(v10);
  v12 = v11;
  if ( !v11 )
  {
LABEL_14:
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Du, 0LL);
    goto LABEL_7;
  }
  CMILRefCountImpl::AddReference((CD3DConstantBuffer *)((char *)v11 + 16));
  v23.MiscFlags = 0;
  v23.StructureByteStride = 0;
  v21 = 0;
  v22 = 0;
  v20 = a4;
  v23.BindFlags = 4;
  v23.ByteWidth = a2;
  v23.Usage = D3D11_USAGE_DYNAMIC;
  v23.CPUAccessFlags = 0x10000;
  v13 = CD3DDevice::CreateBuffer(
          this,
          &v23,
          (const struct D3D11_SUBRESOURCE_DATA *)((unsigned __int64)&v20 & -(__int64)(a4 != 0LL)),
          &v19);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x31u, 0LL);
  }
  else
  {
    v16 = v19;
    *((_QWORD *)v12 + 3) = (char *)this + 1104;
    *((_DWORD *)v12 + 16) = a2;
    *((_BYTE *)v12 + 70) = 1;
    CD3DResourceManager::RegisterResource((struct CD3DDevice *)((char *)this + 1104), v12);
    if ( *((struct ID3D11Buffer **)v12 + 12) != v16 )
    {
      v18 = v16;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v18);
      v18 = (struct ID3D11Buffer *)*((_QWORD *)v12 + 12);
      *((_QWORD *)v12 + 12) = v16;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
    }
    *((_DWORD *)v12 + 26) = a2;
    v15 = 0;
    *a5 = v12;
    v12 = 0LL;
  }
LABEL_7:
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v19->lpVtbl->Release)(v19);
  if ( v12 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v12);
  return v15;
}
