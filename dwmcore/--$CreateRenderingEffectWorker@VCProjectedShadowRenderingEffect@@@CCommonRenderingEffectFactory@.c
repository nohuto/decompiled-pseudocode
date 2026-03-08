/*
 * XREFs of ??$CreateRenderingEffectWorker@VCProjectedShadowRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1801FE2C0
 * Callers:
 *     ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180205CD0 (-CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800927A0 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x180095C34 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B5850 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CProjectedShadowRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180205BE8 (--0CProjectedShadowRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CProjectedShadowRenderingEffect>(
        gsl::details *a1,
        _QWORD *a2)
{
  char v2; // bl
  unsigned int v3; // r15d
  __int64 v6; // rdi
  __int64 v7; // r14
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v9; // rsi
  int v10; // edx
  __int64 v11; // rcx
  CDrawListBitmap *v12; // rax
  char v13; // cl
  CDrawListBitmap *v14; // r14
  CDrawListBitmap *v15; // rdx
  void (__fastcall ***v16)(_QWORD); // rdi
  __int16 v18; // [rsp+30h] [rbp-49h] BYREF
  char v19; // [rsp+32h] [rbp-47h]
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-29h]
  __int128 v22; // [rsp+58h] [rbp-21h] BYREF
  __int64 v23; // [rsp+68h] [rbp-11h]
  _BYTE v24[8]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp+Fh] BYREF
  _BYTE v27[64]; // [rsp+90h] [rbp+17h] BYREF
  void (__fastcall ***v28)(_QWORD); // [rsp+E0h] [rbp+67h] BYREF
  __int16 v29; // [rsp+F0h] [rbp+77h]
  char v30; // [rsp+F2h] [rbp+79h]

  v2 = 0;
  v3 = 0;
  LODWORD(v28) = 0;
  if ( *(_QWORD *)a1 )
  {
    v6 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a1, 0LL);
    if ( *(_QWORD *)a1 > 1uLL )
    {
      v7 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a1, 1uLL);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0LL;
LABEL_6:
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    if ( v7 )
    {
      LOWORD(v28) = *(_WORD *)(v7 + 80);
      BYTE2(v28) = *(_BYTE *)(v7 + 82);
      v12 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v26, (const struct CDrawListBitmap *)(v7 + 56));
      v13 = 9;
      v14 = v12;
      v2 = 5;
    }
    else
    {
      LOWORD(v28) = 257;
      BYTE2(v28) = 1;
      v22 = 0LL;
      v23 = 0LL;
      v14 = (CDrawListBitmap *)&v22;
      v13 = 10;
      v2 = 6;
    }
    if ( v6 )
    {
      v15 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v24, (const struct CDrawListBitmap *)(v6 + 56));
      v29 = *(_WORD *)(v6 + 80);
      v30 = *(_BYTE *)(v6 + 82);
    }
    else
    {
      v29 = 257;
      v30 = 1;
      v20 = 0LL;
      v21 = 0LL;
      v15 = (CDrawListBitmap *)&v20;
      v2 = v13;
    }
    v18 = (__int16)v28;
    v19 = BYTE2(v28);
    LOWORD(v28) = v29;
    BYTE2(v28) = v30;
    v16 = (void (__fastcall ***)(_QWORD))CProjectedShadowRenderingEffect::CProjectedShadowRenderingEffect(
                                           v9,
                                           v15,
                                           &v28,
                                           v14,
                                           &v18);
  }
  else
  {
    v16 = 0LL;
  }
  v28 = v16;
  if ( v16 )
    (**v16)(v16);
  if ( (v2 & 8) != 0 )
  {
    v2 &= ~8u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  }
  if ( (v2 & 4) != 0 )
  {
    v2 &= ~4u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v25);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v24);
  }
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  }
  if ( (v2 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v26);
  }
  if ( v16 )
  {
    v28 = 0LL;
    *a2 = v16;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x35u, 0LL);
  }
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v28);
  return v3;
}
