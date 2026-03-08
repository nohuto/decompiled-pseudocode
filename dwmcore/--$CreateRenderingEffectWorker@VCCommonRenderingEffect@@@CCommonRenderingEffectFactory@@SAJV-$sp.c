/*
 * XREFs of ??$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800939E0
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180093920 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800927A0 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x180095C34 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800DF4F0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800E5D4C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1801062B4 (--0SamplerMode@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffectWorker<CCommonRenderingEffect>(
        __int64 a1,
        _QWORD *a2)
{
  char v2; // di
  _QWORD *v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  _DWORD *Value; // rsi
  __int16 *v7; // rcx
  char *v8; // rbx
  char v9; // cl
  CDrawListBitmap *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r14
  CDrawListBitmap *v16; // rsi
  SamplerMode *v17; // rsi
  __int128 *v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // r14
  _QWORD *v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rcx
  CDrawListBitmap *v24; // r12
  __int64 v25; // r15
  __int16 *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r15
  int *v29; // rcx
  char v30; // al
  bool v31; // al
  bool v32; // al
  __int64 v33; // rsi
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char *v40; // rcx
  __int64 v41; // rcx
  CThreadContext *v42; // rax
  unsigned int v43; // ecx
  CThreadContext *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int16 v51; // [rsp+30h] [rbp-69h] BYREF
  char v52; // [rsp+32h] [rbp-67h]
  int v53; // [rsp+34h] [rbp-65h] BYREF
  __int128 *v54; // [rsp+38h] [rbp-61h]
  __int128 v55; // [rsp+40h] [rbp-59h] BYREF
  __int64 v56; // [rsp+50h] [rbp-49h]
  CDrawListBitmap *v57; // [rsp+58h] [rbp-41h]
  int *v58; // [rsp+60h] [rbp-39h]
  __int64 v59; // [rsp+68h] [rbp-31h]
  _QWORD *v60; // [rsp+70h] [rbp-29h]
  __int128 v61; // [rsp+78h] [rbp-21h] BYREF
  __int64 v62; // [rsp+88h] [rbp-11h]
  char v63[8]; // [rsp+90h] [rbp-9h] BYREF
  char v64[16]; // [rsp+98h] [rbp-1h] BYREF
  __int16 *v65; // [rsp+A8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = 0;
  v60 = a2;
  v53 = 0;
  v3 = a2;
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0LL;
    goto LABEL_3;
  }
  v4 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)a1 <= 1uLL )
  {
LABEL_3:
    v5 = 0LL;
    goto LABEL_4;
  }
  v5 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a1, 1LL);
LABEL_4:
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v42 = (CThreadContext *)operator new(0x190uLL);
    if ( !v42 || (v44 = CThreadContext::CThreadContext(v42), (Value = v44) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v44);
  }
  LODWORD(v7) = Value[61];
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    v8 = (char *)*((_QWORD *)Value + 31);
    *((_QWORD *)Value + 31) = *(_QWORD *)v8;
    Value[61] = (_DWORD)v7 - 1;
  }
  if ( !v8 )
    v8 = (char *)DefaultHeap::Alloc(0x48uLL);
  if ( v8 )
  {
    if ( v5 )
    {
      v51 = *(_WORD *)(v5 + 80);
      v52 = *(_BYTE *)(v5 + 82);
      v65 = &v51;
      v10 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v63, (const struct CDrawListBitmap *)(v5 + 56));
      v9 = 9;
      v2 = 5;
    }
    else
    {
      v51 = 257;
      v62 = 0LL;
      v52 = 1;
      v9 = 10;
      v65 = &v51;
      v10 = (CDrawListBitmap *)&v61;
      v61 = 0LL;
      v2 = 6;
    }
    v57 = v10;
    if ( v4 )
    {
      v11 = *(_QWORD *)(v4 + 56);
      v59 = v11;
      *(_QWORD *)&v55 = v11;
      if ( v11 )
      {
        v39 = v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      }
      v12 = *(_QWORD *)(v4 + 64);
      *((_QWORD *)&v55 + 1) = v12;
      if ( v12 )
      {
        v13 = v12 + *(int *)(*(_QWORD *)(v12 + 8) + 4LL) + 8LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      LOBYTE(v56) = *(_BYTE *)(v4 + 72);
      LOWORD(v53) = *(_WORD *)(v4 + 80);
      BYTE2(v53) = *(_BYTE *)(v4 + 82);
      v54 = &v55;
      v58 = &v53;
    }
    else
    {
      LOWORD(v53) = 257;
      v56 = 0LL;
      BYTE2(v53) = 1;
      v54 = &v55;
      v2 = v9;
      v55 = 0LL;
      v12 = 0LL;
      v58 = &v53;
      v59 = 0LL;
    }
    *((_DWORD *)v8 + 2) = 0;
    v14 = 2LL;
    *(_QWORD *)v8 = &CCommonRenderingEffect::`vftable';
    v15 = 2LL;
    v16 = (CDrawListBitmap *)(v8 + 16);
    do
    {
      CDrawListBitmap::CDrawListBitmap(v16);
      v16 = (CDrawListBitmap *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
    v17 = (SamplerMode *)(v8 + 64);
    do
    {
      SamplerMode::SamplerMode(v17);
      v17 = (SamplerMode *)((char *)v17 + 3);
      --v14;
    }
    while ( v14 );
    v18 = v54;
    v19 = *((_QWORD *)v8 + 2);
    v20 = *(_QWORD **)v54;
    *((_QWORD *)v8 + 2) = *(_QWORD *)v54;
    if ( v20 )
    {
      v40 = (char *)v20 + *(int *)(v20[1] + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 8LL))(v40);
      v18 = v54;
    }
    if ( v19 )
    {
      v45 = v19 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      v18 = v54;
    }
    v21 = (_QWORD *)*((_QWORD *)v18 + 1);
    v22 = *((_QWORD *)v8 + 3);
    *((_QWORD *)v8 + 3) = v21;
    if ( v21 )
    {
      v23 = (__int64)v21 + *(int *)(v21[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v18 = v54;
    }
    if ( v22 )
    {
      v46 = v22 + *(int *)(*(_QWORD *)(v22 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      v18 = v54;
    }
    v24 = v57;
    v8[32] = *((_BYTE *)v18 + 16);
    v25 = *((_QWORD *)v8 + 5);
    v26 = *(__int16 **)v24;
    *((_QWORD *)v8 + 5) = *(_QWORD *)v24;
    if ( v26 )
    {
      v37 = (__int64)v26 + *(int *)(*((_QWORD *)v26 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    }
    if ( v25 )
    {
      v47 = v25 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v27 = *((_QWORD *)v24 + 1);
    v28 = *((_QWORD *)v8 + 6);
    *((_QWORD *)v8 + 6) = v27;
    if ( v27 )
    {
      v38 = v27 + 8 + *(int *)(*(_QWORD *)(v27 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
    }
    if ( v28 )
    {
      v48 = v28 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v29 = v58;
    v8[56] = *((_BYTE *)v24 + 16);
    *((_WORD *)v8 + 32) = *(_WORD *)v29;
    v30 = *((_BYTE *)v29 + 2);
    v7 = v65;
    v8[66] = v30;
    *(_WORD *)(v8 + 67) = *v7;
    v8[69] = *((_BYTE *)v7 + 2);
    v31 = !v21
       || CCommonRegistryData::EnableCommonSuperSets
       && v20
       && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20)
       && !*(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(v54, &v65) + 8);
    v8[70] = v31;
    v32 = 1;
    if ( *((_QWORD *)v24 + 1) )
    {
      if ( !CCommonRegistryData::EnableCommonSuperSets
        || (v7 = *(__int16 **)v24) == 0LL
        || !(*(unsigned __int8 (__fastcall **)(__int16 *))(*(_QWORD *)v7 + 24LL))(v7) )
      {
        v32 = 0;
      }
    }
    v8[70] &= v32;
    v33 = v59;
    v3 = v60;
  }
  else
  {
    v12 = *((_QWORD *)&v55 + 1);
    v33 = v55;
  }
  if ( v8 )
    (**(void (__fastcall ***)(LPVOID))v8)(v8);
  if ( (v2 & 8) != 0 )
  {
    v2 &= ~8u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55);
  }
  if ( (v2 & 4) != 0 )
  {
    v2 &= ~4u;
    if ( v12 )
    {
      v34 = v12 + *(int *)(*(_QWORD *)(v12 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v33 )
    {
      v41 = v33 + *(int *)(*(_QWORD *)(v33 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    if ( *((_QWORD *)&v61 + 1) )
    {
      v49 = *((_QWORD *)&v61 + 1) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)&v61 + 1) + 8LL) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    if ( (_QWORD)v61 )
    {
      v50 = v61 + 8 + *(int *)(*(_QWORD *)(v61 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
  }
  if ( (v2 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v64);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v63);
  }
  if ( v8 )
  {
    *v3 = v8;
    return 0;
  }
  else
  {
    v35 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024882, 0x35u, 0LL);
  }
  return v35;
}
