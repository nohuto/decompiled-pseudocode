__int64 __fastcall CVisual::AppendDirtyRegionVisualizationRects(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  CColorBrush *v5; // rax
  CColorBrush *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  void *v13; // r15
  __int128 v14; // xmm0
  CKeyframeAnimation *v15; // rax
  CKeyframeAnimation *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *DirtyRegionVisualizationData; // rsi
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r9d
  unsigned int v32; // [rsp+28h] [rbp-B9h]
  _QWORD *v33; // [rsp+88h] [rbp-59h] BYREF
  __int64 v34; // [rsp+90h] [rbp-51h] BYREF
  __int64 v35[3]; // [rsp+98h] [rbp-49h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-31h] BYREF
  _QWORD *v37; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-9h] BYREF

  v4 = 0;
  v34 = 0LL;
  v33 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v5 = (CColorBrush *)DefaultHeap::AllocClear(0x90uLL);
    if ( v5 )
      v6 = CColorBrush::CColorBrush(v5, *(struct CComposition **)(a1 + 16));
    else
      v6 = 0LL;
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(&v34, (__int64)v6);
    v8 = v34;
    if ( !v34 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15F5u, 0LL);
      goto LABEL_26;
    }
    v39 = _xmm;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v34 + 96LL))(v34, 0LL, 70LL, &v39);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x15F7u, 0LL);
      goto LABEL_26;
    }
    v11 = DefaultHeap::Alloc(0x60uLL);
    v13 = v11;
    if ( !v11 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x15FAu, 0LL);
      goto LABEL_26;
    }
    *v11 = 0LL;
    *((_DWORD *)v11 + 6) = 3;
    v14 = *(_OWORD *)(v8 + 88);
    v11[6] = 1065353216LL;
    *((_DWORD *)v11 + 18) = 1;
    v38 = v14;
    HIDWORD(v38) = 0;
    *((_OWORD *)v11 + 5) = v38;
    v15 = (CKeyframeAnimation *)DefaultHeap::AllocClear(0x248uLL);
    if ( v15 )
      v16 = CKeyframeAnimation::CKeyframeAnimation(v15, *(struct CComposition **)(a1 + 16));
    else
      v16 = 0LL;
    wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>::operator=((__int64 *)&v33, (__int64)v16);
    v18 = v33;
    if ( !v33 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x1607u, 0LL);
LABEL_24:
      operator delete(v13);
      goto LABEL_26;
    }
    v19 = CKeyframeAnimation::Initialize(v33, v8, 0LL, 70LL);
    v4 = v19;
    if ( v19 < 0 )
    {
      v30 = v19;
      v32 = 5655;
    }
    else
    {
      if ( (**(_DWORD **)(a1 + 232) & 0x80000) != 0 )
      {
LABEL_20:
        DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(a1);
        v24 = std::vector<MilRectF>::vector<MilRectF>(
                (__int64 *)&v38,
                *(const void **)a2,
                *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 24));
        v36 = v8;
        v25 = v24[2];
        v26 = v24[1];
        v27 = *v24;
        v24[2] = 0LL;
        v24[1] = 0LL;
        *v24 = 0LL;
        v28 = *(_QWORD *)v8;
        v35[0] = v27;
        v35[1] = v26;
        v35[2] = v25;
        (*(void (__fastcall **)(__int64))(v28 + 8))(v8);
        v29 = *v18;
        v37 = v18;
        (*(void (__fastcall **)(_QWORD *))(v29 + 8))(v18);
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(
          DirtyRegionVisualizationData,
          v35);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
        std::vector<MilRectF>::_Tidy((__int64)v35);
        std::vector<MilRectF>::_Tidy((__int64)&v38);
        goto LABEL_24;
      }
      v21 = DefaultHeap::Alloc(0x28uLL);
      if ( v21 )
      {
        v22 = std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(v21);
        if ( v22 )
        {
          CVisual::SetDirtyRegionVisualizationData(a1, v22);
          goto LABEL_20;
        }
      }
      v30 = -2147024882;
      v4 = -2147024882;
      v32 = 5660;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v30, v32, 0LL);
    goto LABEL_24;
  }
LABEL_26:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  return v4;
}
