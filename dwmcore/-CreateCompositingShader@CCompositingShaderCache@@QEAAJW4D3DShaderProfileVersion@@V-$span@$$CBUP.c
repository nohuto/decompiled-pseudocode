__int64 __fastcall CCompositingShaderCache::CreateCompositingShader(
        __int64 a1,
        char a2,
        __int128 *a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        volatile signed __int32 **a5)
{
  __int128 v5; // xmm0
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CLinkedShader *v13; // rax
  __int64 v14; // rcx
  CLinkedShader *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 CompositingShaderLookupKey; // rax
  int v19; // eax
  __int64 v20; // rcx
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF
  struct ID3D10Blob *v23; // [rsp+70h] [rbp+18h] BYREF

  v5 = *a3;
  v23 = 0LL;
  v22[0] = v5;
  v10 = LinkCompositingShader(a2, (unsigned __int64 *)v22, a4, &v23);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3Bu, 0LL);
  }
  else
  {
    v13 = (CLinkedShader *)DefaultHeap::Alloc(0x58uLL);
    if ( v13
      && (v15 = CLinkedShader::CLinkedShader(v13, v23, 0x80000000), (v16 = (volatile signed __int32 *)v15) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CLinkedShader *)((char *)v15 + 8));
      v22[0] = *a3;
      LOBYTE(v17) = a2;
      CompositingShaderLookupKey = CCompositingShaderCache::GetCompositingShaderLookupKey(v17, v22, (unsigned int)a4);
      DWORD2(v22[0]) = 0;
      *(_QWORD *)&v22[0] = CompositingShaderLookupKey;
      v19 = CShaderCache::AddLinkedShader(a1, v22, v16);
      v12 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x43u, 0LL);
      else
        *a5 = v16;
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v16);
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x3Fu, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v12;
}
