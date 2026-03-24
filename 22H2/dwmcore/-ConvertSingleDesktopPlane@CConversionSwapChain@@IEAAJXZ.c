/*
 * XREFs of ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18024ED10
 * Callers:
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F1FD8 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024F8F8 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18024EEFC (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleDesktopPlane(CConversionSwapChain *this)
{
  unsigned int v2; // ebx
  void (__fastcall ***v3)(_QWORD, int *); // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD **); // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  void (__fastcall ***v12)(_QWORD, int *); // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  FastRegion::Internal::CRgnData *v16; // rcx
  void *v18; // [rsp+28h] [rbp-41h]
  _QWORD *v19; // [rsp+40h] [rbp-29h] BYREF
  int v20[2]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-11h]
  _DWORD *v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+70h] [rbp+7h]
  _DWORD v26[6]; // [rsp+80h] [rbp+17h] BYREF
  int v27[4]; // [rsp+98h] [rbp+2Fh] BYREF

  v2 = 0;
  v3 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8LL) + 16LL)
                                            + *((_QWORD *)this + 37)
                                            + 8LL);
  (**v3)(v3, v20);
  v4 = v20[0];
  *((_DWORD *)this + 166) = 0;
  *((_DWORD *)this + 167) = 0;
  *((_DWORD *)this + 168) = v4;
  *((_DWORD *)this + 169) = v20[1];
  if ( **((_DWORD **)this + 74) )
  {
    v5 = *((_QWORD *)this + 37);
    v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 16LL);
    v7 = *(_QWORD *)(v6 + 8);
    v19 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(v7 + 48);
    v9 = (**(__int64 (__fastcall ***)(__int64, _DWORD *))v5)(v5, v26);
    v10 = v8(v6 + 8, v9, &v19);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x271u, 0LL);
    }
    else
    {
      v12 = (void (__fastcall ***)(_QWORD, int *))((char *)v19 + *(int *)(v19[1] + 12LL) + 8);
      (**v12)(v12, v27);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 74),
        (struct FastRegion::CRegion::Iterator *)v21);
      while ( (unsigned __int64)v23 < v22 )
      {
        v26[1] = *v23;
        v26[3] = v23[2];
        v13 = 2 * v25;
        v26[0] = *(_DWORD *)(v24 + 4 * v13);
        v26[2] = *(_DWORD *)(v24 + 4 * v13 + 4);
        v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
        LODWORD(v18) = 1;
        v15 = CConversionSwapChain::ConvertSingleResource(
                (int)this,
                v14,
                (int)v20,
                (int)v27,
                (int)this + 664,
                v18,
                (__int64)this + 664,
                (__int64)v26);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, 0x282u, 0LL);
          break;
        }
        FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)v21);
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  }
  return v2;
}
