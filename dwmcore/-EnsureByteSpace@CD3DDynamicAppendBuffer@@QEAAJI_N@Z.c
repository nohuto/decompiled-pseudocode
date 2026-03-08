/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800CFD5C
 * Callers:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1800CFD2C (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800D04C4 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  unsigned int v3; // r14d
  UINT v5; // esi
  UINT v6; // ecx
  UINT v7; // eax
  CD3DDevice *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  struct ID3D11Buffer *v11; // rbx
  UINT v13; // eax
  UINT v14; // edx
  struct ID3D11Buffer *v15; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11Buffer *v16; // [rsp+38h] [rbp-28h] BYREF
  D3D11_BUFFER_DESC v17; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v15 = 0LL;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( a2 > v6 )
  {
    if ( !a3 )
    {
      v13 = v6;
      if ( !v6 )
        v13 = a2;
      v14 = v6 + a2;
      while ( v13 < v14 )
        v13 *= 2;
      v5 = v13;
      if ( v13 > *((_DWORD *)this + 11) )
        v5 = *((_DWORD *)this + 11);
    }
    v7 = *((_DWORD *)this + 4);
    v17.MiscFlags = 0;
    v17.StructureByteStride = 0;
    v8 = *(CD3DDevice **)this;
    v17.BindFlags = v7;
    v17.ByteWidth = v5;
    v17.Usage = D3D11_USAGE_DYNAMIC;
    v17.CPUAccessFlags = 0x10000;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
    v9 = CD3DDevice::CreateBuffer(v8, &v17, 0LL, &v15);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x48u, 0LL);
    }
    else
    {
      v11 = v15;
      if ( *((struct ID3D11Buffer **)this + 1) != v15 )
      {
        v16 = v15;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v16);
        v16 = (struct ID3D11Buffer *)*((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v11;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v16);
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = v5;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  return v3;
}
