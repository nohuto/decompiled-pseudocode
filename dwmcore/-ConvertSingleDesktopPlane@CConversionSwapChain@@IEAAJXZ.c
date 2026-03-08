/*
 * XREFs of ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18029E1E4
 * Callers:
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18029F040 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18029F0F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18029E400 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleDesktopPlane(CConversionSwapChain *this)
{
  unsigned int v2; // ebx
  void (__fastcall ***v3)(_QWORD, _DWORD *); // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD **); // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  FastRegion::Internal::CRgnData *v16; // rcx
  _QWORD *v18; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-11h]
  _DWORD *v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+70h] [rbp+7h]
  _DWORD v25[6]; // [rsp+80h] [rbp+17h] BYREF
  _BYTE v26[16]; // [rsp+98h] [rbp+2Fh] BYREF

  v2 = 0;
  v3 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 16LL)
                                               + *((_QWORD *)this + 47)
                                               + 8LL);
  (**v3)(v3, v19);
  v4 = v19[0];
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 188) = v4;
  *((_DWORD *)this + 189) = v19[1];
  if ( **((_DWORD **)this + 84) )
  {
    v5 = *((_QWORD *)this + 47);
    v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 16LL);
    v7 = *(_QWORD *)(v6 + 8);
    v18 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(v7 + 48);
    v9 = (**(__int64 (__fastcall ***)(__int64, _DWORD *))v5)(v5, v25);
    v10 = v8(v6 + 8, v9, &v18);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x296u, 0LL);
    }
    else
    {
      v12 = (void (__fastcall ***)(_QWORD, _BYTE *))((char *)v18 + *(int *)(v18[1] + 12LL) + 8);
      (**v12)(v12, v26);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 84),
        (struct FastRegion::CRegion::Iterator *)v20);
      while ( (unsigned __int64)v22 < v21 )
      {
        v25[1] = *v22;
        v25[3] = v22[2];
        v13 = 2 * v24;
        v25[0] = *(_DWORD *)(v23 + 4 * v13);
        v25[2] = *(_DWORD *)(v23 + 4 * v13 + 4);
        v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
        v15 = CConversionSwapChain::ConvertSingleResource(
                this,
                v14,
                v19,
                v26,
                (char *)this + 744,
                1,
                (char *)this + 744,
                v25);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, 0x2A7u, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v20);
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  }
  return v2;
}
