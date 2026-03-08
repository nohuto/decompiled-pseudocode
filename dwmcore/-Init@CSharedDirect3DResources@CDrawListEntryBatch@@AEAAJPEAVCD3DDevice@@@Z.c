/*
 * XREFs of ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x1800CFBE0
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800CF778 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1800CF9DC (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAG.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1800CFA60 (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1800CFAE0 (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1800CFB60 (-Initialize@-$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1800CFD2C (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800CFE50 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Init(
        struct ID3D11Buffer **this,
        struct CD3DDevice *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-58h]
  struct D3D11_SUBRESOURCE_DATA v12; // [rsp+30h] [rbp-48h] BYREF
  struct D3D11_BUFFER_DESC v13; // [rsp+40h] [rbp-38h] BYREF

  v4 = CD3DDynamicAppendBuffer::Initialize((CD3DDynamicAppendBuffer *)(this + 2), a2, 0x27100u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 44;
    goto LABEL_19;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize((CD3DDynamicAppendBuffer *)(this + 8), a2, 0x3E80u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 45;
    goto LABEL_19;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize((CD3DDynamicAppendBuffer *)(this + 14), a2, 0x3A980u);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 46;
    goto LABEL_19;
  }
  if ( !this[20] )
  {
    *(_QWORD *)&v13.ByteWidth = 192LL;
    v12.pSysMem = this + 22;
    *(_QWORD *)&v13.BindFlags = 4LL;
    *(_QWORD *)&v13.MiscFlags = 0LL;
    *(_QWORD *)&v12.SysMemPitch = 0LL;
    v7 = CTypedConstantBufferBase::Initialize(this + 20, a2, &v13, &v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x44u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0x2Fu, 0LL);
      return v6;
    }
  }
  v4 = CTypedConstantBuffer<float>::Initialize(this + 48, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 52;
    goto LABEL_19;
  }
  v4 = CTypedConstantBuffer<LightVSConstantBuffer>::Initialize(this + 52, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 53;
    goto LABEL_19;
  }
  v4 = CTypedConstantBuffer<LightPSConstantBuffer>::Initialize(this + 88, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 54;
    goto LABEL_19;
  }
  v4 = CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize(this + 120, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v11 = 55;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v11, 0LL);
  }
  return v6;
}
