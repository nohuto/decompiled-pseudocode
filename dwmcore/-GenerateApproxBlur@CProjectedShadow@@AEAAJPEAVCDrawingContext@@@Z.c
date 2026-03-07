__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  int ApproxBlurIntermediate; // eax
  __int64 v7; // rcx
  struct CBrush *v8; // r12
  struct CBrush *v9; // r14
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rcx
  struct CResource ***v14; // r8
  int v15; // edx
  int v16; // r8d
  int NineGridBrush; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct CResource ***v23; // r8
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  float BlurForBoundary; // xmm0_4
  int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  struct CResource ***v35; // r8
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  struct CResource ***v44; // r8
  int v45; // edx
  int v46; // r8d
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  struct CBrush **v51; // rsi
  __int64 v52; // rbx
  int CrossFadeGraph; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  struct CResource ***v61; // r8
  int v62; // edx
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  struct CSurfaceBrush *v68; // r8
  __int64 v69; // rdx
  char *v70; // r8
  int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rcx
  _BYTE v76[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v77[4]; // [rsp+44h] [rbp-2Ch] BYREF
  float v78; // [rsp+48h] [rbp-28h] BYREF
  __int128 v79; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 82);
  v5 = 0;
  if ( v2 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 this,
                                 a2,
                                 64.0,
                                 &stru_1803B54F8,
                                 &CProjectedShadow::s_cp2xBlurAsset);
      v5 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ApproxBlurIntermediate, 0x3A8u, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
    }
    return v5;
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0.0;
  v11 = 0.0;
  v79 = _xmm;
  switch ( v2 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset);
        v12 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                16.0,
                &stru_1803B54F8,
                &CProjectedShadow::s_cpHalfBlurAsset);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3C2u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      }
      v14 = (struct CResource ***)CProjectedShadow::s_cpHalfBlurNineGrid;
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
        if ( CProjectedShadow::s_cpHalfBlurAsset )
        {
          v15 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 1) + 16LL);
          v16 = v15 + (_DWORD)CProjectedShadow::s_cpHalfBlurAsset + 8;
        }
        else
        {
          v16 = 0;
        }
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v15,
                          v16,
                          (unsigned int)&v79,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v5 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, NineGridBrush, 0x3CBu, 0LL);
          return v5;
        }
        v14 = (struct CResource ***)CProjectedShadow::s_cpHalfBlurNineGrid;
      }
      v19 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v14);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x3CFu, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
        v21 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                32.0,
                &stru_1803B54F8,
                &CProjectedShadow::s_cp1xBlurAsset);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x3D6u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v23 = (struct CResource ***)CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        if ( CProjectedShadow::s_cp1xBlurAsset )
        {
          v24 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 16LL);
          v25 = v24 + (_DWORD)CProjectedShadow::s_cp1xBlurAsset + 8;
        }
        else
        {
          v25 = 0;
        }
        v26 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v24,
                v25,
                (unsigned int)&v79,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x3DFu, 0LL);
          return v5;
        }
        v23 = (struct CResource ***)CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v28 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v23);
      v5 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x3E3u, 0LL);
        return v5;
      }
      v8 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v9 = CProjectedShadow::s_cp1xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 0);
      v32 = 1;
      break;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
        v33 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                32.0,
                &stru_1803B54F8,
                &CProjectedShadow::s_cp1xBlurAsset);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3F2u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v35 = (struct CResource ***)CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        if ( CProjectedShadow::s_cp1xBlurAsset )
        {
          v36 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 16LL);
          v37 = v36 + (_DWORD)CProjectedShadow::s_cp1xBlurAsset + 8;
        }
        else
        {
          v37 = 0;
        }
        v38 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v36,
                v37,
                (unsigned int)&v79,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x3FBu, 0LL);
          return v5;
        }
        v35 = (struct CResource ***)CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v40 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v35);
      v5 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x3FFu, 0LL);
        return v5;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
        v42 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                64.0,
                &stru_1803B54F8,
                &CProjectedShadow::s_cp2xBlurAsset);
        v5 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x406u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
      v44 = (struct CResource ***)CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v45 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v46 = v45 + (_DWORD)CProjectedShadow::s_cp2xBlurAsset + 8;
        }
        else
        {
          v46 = 0;
        }
        v47 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v45,
                v46,
                (unsigned int)&v79,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x410u, 0LL);
          return v5;
        }
        v44 = (struct CResource ***)CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v49 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v44);
      v5 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x414u, 0LL);
        return v5;
      }
      v8 = CProjectedShadow::s_cp1xBlurNineGrid;
      v9 = CProjectedShadow::s_cp2xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 1);
      v32 = 2;
      break;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
        v59 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                64.0,
                &stru_1803B54F8,
                &CProjectedShadow::s_cp2xBlurAsset);
        v5 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x423u, 0LL);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
      v61 = (struct CResource ***)CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v62 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v63 = v62 + (_DWORD)CProjectedShadow::s_cp2xBlurAsset + 8;
        }
        else
        {
          v63 = 0;
        }
        v64 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v62,
                v63,
                (unsigned int)&v79,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x42Du, 0LL);
          return v5;
        }
        v61 = (struct CResource ***)CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v66 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v61);
      v5 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x431u, 0LL);
        return v5;
      }
      v68 = CProjectedShadow::s_cp2xBlurSurface;
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v69 = *(int *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v70 = (char *)CProjectedShadow::s_cp2xBlurAsset + v69 + 8;
        }
        else
        {
          v70 = 0LL;
        }
        v71 = CProjectedShadow::GenerateSurfaceBrush(this, v69, v70, &v79, &CProjectedShadow::s_cp2xBlurSurface);
        v5 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x438u, 0LL);
          return v5;
        }
        v68 = CProjectedShadow::s_cp2xBlurSurface;
      }
      v73 = CProjectedShadow::AdjustSurfaceBrush((struct CComposition **)this, a2, v68);
      v5 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x43Cu, 0LL);
        return v5;
      }
      v8 = CProjectedShadow::s_cp2xBlurNineGrid;
      v9 = CProjectedShadow::s_cp2xBlurSurface;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 2);
      v32 = 3;
      break;
    default:
      goto LABEL_61;
  }
  v10 = BlurForBoundary;
  v11 = CProjectedShadow::GetBlurForBoundary(v30, v32);
LABEL_61:
  v51 = (struct CBrush **)((char *)this + 344);
  v78 = (float)(*((float *)this + 24) - v10) / (float)(v11 - v10);
  if ( *((struct CBrush **)this + 42) != v8 || *v51 != v9 )
  {
    v52 = *((_QWORD *)this + 47);
    if ( v52 )
    {
      *(_DWORD *)(v52 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v52 + 16, 0x18u);
      *(_BYTE *)(v52 + 200) = 1;
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 47);
    }
  }
  if ( !*((_QWORD *)this + 47) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v8, v9);
    v5 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, CrossFadeGraph, 0x454u, 0LL);
      return v5;
    }
    *((_QWORD *)this + 42) = v8;
    *v51 = v9;
  }
  v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, _BYTE *, _BYTE *))(**((_QWORD **)this + 48) + 32LL))(
          *((_QWORD *)this + 48),
          0LL,
          69LL,
          (char *)this + 352,
          v76,
          v77);
  v5 = v55;
  if ( v55 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x45Eu, 0LL);
  }
  else
  {
    v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, _BYTE *, _BYTE *))(**((_QWORD **)this + 48)
                                                                                         + 32LL))(
            *((_QWORD *)this + 48),
            1LL,
            18LL,
            &v78,
            v76,
            v77);
    v5 = v57;
    if ( v57 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x45Fu, 0LL);
  }
  return v5;
}
