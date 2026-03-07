__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct CResource ***a5)
{
  struct CResource ***v5; // rsi
  CNineGridBrush *v9; // rax
  __int64 v10; // rcx
  struct CResource **v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CNineGridBrush *v18[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CBrush *v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v18[0] = 0LL;
  v19 = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xC8uLL);
  if ( v9 )
    v9 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<CNineGridBrush,wil::err_returncode_policy>::operator=((__int64 *)v18, (__int64)v9);
  v11 = (struct CResource **)v18[0];
  if ( v18[0] )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v14 = CProjectedShadow::GenerateSurfaceBrush(a1, v13, a3, a4, &v19);
    v12 = v14;
    if ( v14 < 0 )
    {
      v17 = 1206;
    }
    else
    {
      v14 = CNineGridBrush::SetSource(v11, v19);
      v12 = v14;
      if ( v14 >= 0 )
      {
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 0, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 8u, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 5u, 80.0);
        CNineGridBrush::SetInsetProperty((CNineGridBrush *)v11, 3u, 80.0);
        CNineGridBrush::SetCanUseSurfaceTransform((CNineGridBrush *)v11);
        v18[0] = 0LL;
        *v5 = v11;
        goto LABEL_11;
      }
      v17 = 1208;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v17, 0LL);
    goto LABEL_11;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x4B1u, 0LL);
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v18);
  return v12;
}
