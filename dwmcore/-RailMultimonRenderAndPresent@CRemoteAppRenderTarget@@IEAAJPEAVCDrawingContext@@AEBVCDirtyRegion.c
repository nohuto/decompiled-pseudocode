__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3)
{
  const struct CDirtyRegion *v4; // rdi
  unsigned int v6; // ebx
  struct CDesktopTree *DesktopTree; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  void *v10; // rsi
  _QWORD *v11; // r15
  __int64 v12; // rax
  int (__fastcall ***v13)(_QWORD, GUID *, struct ISwapChain **); // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  const struct CMILMatrix *v16; // r12
  int v17; // eax
  __int128 v18; // xmm1
  struct ISwapChain *v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  __int64 v23; // rcx
  struct ISwapChain *v24; // rbx
  __int64 (__fastcall *v25)(struct ISwapChain *, _QWORD, int *); // rdi
  int *RailWindowDeviceBounds; // rax
  int v27; // eax
  __int64 v28; // rcx
  struct ISwapChain *v30; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  _BYTE v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  const struct CDirtyRegion *v34; // [rsp+58h] [rbp-A8h]
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+A0h] [rbp-60h]
  _OWORD v40[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp+0h] BYREF
  __int32 v43; // [rsp+108h] [rbp+8h]
  __int32 v44; // [rsp+10Ch] [rbp+Ch]
  int v45[4]; // [rsp+110h] [rbp+10h] BYREF

  v34 = a3;
  v4 = a3;
  v6 = 0;
  DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(*((_QWORD *)this + 12) + 64LL));
  if ( !DesktopTree )
    goto LABEL_15;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 66));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 67));
  v32 = 0LL;
  LODWORD(v42) = _mm_cvtepi32_ps(v8).m128_u32[0];
  *(float *)v8.m128i_i32 = (float)*((int *)this + 68);
  HIDWORD(v42) = _mm_cvtepi32_ps(v9).m128_u32[0];
  *(float *)v9.m128i_i32 = (float)*((int *)this + 69);
  v43 = v8.m128i_i32[0];
  v31 = 0LL;
  v44 = v9.m128i_i32[0];
  CDesktopTree::GetIntersectingMonitorTargets(DesktopTree, &v42, &v31);
  v10 = (void *)v31;
  v11 = (_QWORD *)v31;
  if ( (_QWORD)v31 == *((_QWORD *)&v31 + 1) )
    goto LABEL_13;
  while ( 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 144LL))(*v11);
    wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v42, v12);
    v30 = 0LL;
    if ( !v42 )
      goto LABEL_8;
    v13 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChain **))(*(int *)(*(_QWORD *)(v42 + 8) + 4LL) + v42 + 8);
    if ( (**v13)(v13, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v30) < 0 )
      goto LABEL_8;
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 24LL))(*v11);
    v15 = *((_QWORD *)this + 12);
    v41 = 0;
    v16 = (const struct CMILMatrix *)v14;
    CVisual::GetRootTransform(*(CVisual **)(v15 + 64), (struct CMILMatrix *)v40, 0);
    v35 = v40[0];
    v39 = v41;
    v36 = v40[1];
    v37 = v40[2];
    v38 = v40[3];
    CMILMatrix::Multiply((CMILMatrix *)&v35, v16);
    v17 = v39;
    v18 = v36;
    v19 = v30;
    *(_OWORD *)((char *)this + 184) = v35;
    v20 = v37;
    *(_OWORD *)((char *)this + 200) = v18;
    v21 = v38;
    *(_OWORD *)((char *)this + 216) = v20;
    *(_OWORD *)((char *)this + 232) = v21;
    *((_DWORD *)this + 62) = v17;
    (*(void (__fastcall **)(struct ISwapChain *, _QWORD))(*(_QWORD *)v19 + 72LL))(v19, *((unsigned int *)this + 29));
    v22 = CRemoteAppRenderTarget::RenderDirtyRegion(
            this,
            a2,
            v30,
            v4,
            (enum CRemoteAppRenderTarget::ProtectionMode *)v33);
    v6 = v22;
    if ( v22 < 0 )
      break;
    v24 = v30;
    v25 = *(__int64 (__fastcall **)(struct ISwapChain *, _QWORD, int *))(*(_QWORD *)v30 + 120LL);
    RailWindowDeviceBounds = CRemoteAppRenderTarget::GetRailWindowDeviceBounds((__int64)this, v45, v16);
    v27 = v25(v24, *((_QWORD *)this + 32), RailWindowDeviceBounds);
    v6 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x2CCu, 0LL);
      goto LABEL_12;
    }
    v4 = v34;
LABEL_8:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
    if ( ++v11 == *((_QWORD **)&v31 + 1) )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2C8u, 0LL);
LABEL_12:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
LABEL_13:
  if ( v10 )
    std::_Deallocate<16,0>(v10, (v32 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_15:
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 21);
  CMILMatrix::SetToIdentity((CRemoteAppRenderTarget *)((char *)this + 184));
  return v6;
}
