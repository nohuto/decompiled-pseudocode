/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800D0218
 * Callers:
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800D01C8 (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180296ED0 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD3DConstantBuffer@@IEAA@XZ @ 0x1800D0384 (--0CD3DConstantBuffer@@IEAA@XZ.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800D04C4 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F0E64 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

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
