__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(struct ID3D11Linker **ppLinker, char a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 i; // rbx
  int v9; // ecx
  __int64 v10; // xmm0_8
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  HRESULT v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r12
  unsigned int v16; // ebx
  HRESULT v17; // eax
  unsigned int v18; // ecx
  struct ID3D11Linker *v19; // rdi
  HRESULT (__stdcall *UseLibrary)(ID3D11Linker *, struct ID3D11ModuleInstance *); // rbx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edi
  __int64 v24; // r14
  gsl::details *v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-99h] BYREF
  __int128 v28; // [rsp+38h] [rbp-91h] BYREF
  __int64 v29; // [rsp+48h] [rbp-81h]
  __int128 v30; // [rsp+50h] [rbp-79h]
  __int128 v31; // [rsp+60h] [rbp-69h]
  _BYTE v32[24]; // [rsp+70h] [rbp-59h]
  _OWORD v33[3]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-11h]
  __int64 v35; // [rsp+C0h] [rbp-9h] BYREF
  char v36; // [rsp+C8h] [rbp-1h]
  int v37; // [rsp+C9h] [rbp+0h]
  __int16 v38; // [rsp+CDh] [rbp+4h]
  char v39; // [rsp+CFh] [rbp+6h]
  __int16 v40; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+Fh] BYREF
  char v42; // [rsp+E0h] [rbp+17h]
  int v43; // [rsp+E1h] [rbp+18h]
  char v44; // [rsp+E5h] [rbp+1Ch]

  v3 = 0LL;
  *((_BYTE *)ppLinker + 84) = a2;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *a3 )
  {
    if ( (unsigned __int64)*a3 > 0x492492492492492LL )
      std::_Xlength_error("vector too long");
    std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly((__int64)&v28, *a3);
    v3 = v29;
  }
  v6 = a3[1];
  v7 = *((_QWORD *)&v28 + 1);
  for ( i = v6 + 32 * *a3; v6 != i; v6 += 32LL )
  {
    v9 = *(_DWORD *)(v6 + 28);
    v30 = *(_OWORD *)(v6 + 8);
    LODWORD(v31) = *(_DWORD *)(v6 + 24);
    DWORD2(v31) = 1;
    *(_OWORD *)&v32[8] = 0LL;
    HIDWORD(v31) = v9;
    *(_QWORD *)v32 = 0x100000000LL;
    DWORD1(v31) = v9 != 1;
    v10 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v32[8], *(__m128d *)&v32[8]);
    v34 = v10;
    v11 = v31;
    v12 = *(_OWORD *)v32;
    v33[1] = v31;
    v33[0] = v30;
    v33[2] = *(_OWORD *)v32;
    if ( v7 == v3 )
    {
      std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(&v28, v7, v33);
      v3 = v29;
      v7 = *((_QWORD *)&v28 + 1);
    }
    else
    {
      *(_OWORD *)v7 = v30;
      *(_OWORD *)(v7 + 16) = v11;
      *(_OWORD *)(v7 + 32) = v12;
      *(_QWORD *)(v7 + 48) = v10;
      v7 += 56LL;
      *((_QWORD *)&v28 + 1) = v7;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(ppLinker);
  v13 = D3DCreateLinker(ppLinker);
  v15 = v28;
  v16 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x45u, 0LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(ppLinker + 1);
    v17 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x46u, 0LL);
    }
    else
    {
      v19 = ppLinker[1];
      UseLibrary = v19->lpVtbl->UseLibrary;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v27);
      v21 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64, __int64, __int64 *))UseLibrary)(
              v19,
              v15,
              0x6DB6DB6DB6DB6DB7LL * ((v7 - v15) >> 3),
              &v27);
      v16 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x4Au, 0LL);
      }
      else
      {
        v23 = 0;
        if ( *(_DWORD *)a3 )
        {
          v24 = a3[1];
          do
          {
            v35 = 0LL;
            v36 = 0;
            v37 = 0;
            v38 = 0;
            v39 = 0;
            Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v35, &v27);
            v36 = v23;
            if ( v23 >= (unsigned __int64)*a3 )
            {
              gsl::details::terminate(v25);
              JUMPOUT(0x18002968ALL);
            }
            v41 = v35;
            v40 = *(_WORD *)(32LL * v23 + v24);
            if ( v35 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
            v43 = v37;
            v44 = v38;
            v42 = v23;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              ppLinker + 2,
              &v28,
              &v40);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v41);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v35);
            ++v23;
          }
          while ( v23 < *(_DWORD *)a3 );
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v27);
  if ( v15 )
    std::_Deallocate<16,0>(v15, 8 * ((v3 - v15) >> 3));
  return v16;
}
