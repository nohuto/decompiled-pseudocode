/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025802C
 * Callers:
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x180257844 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x180257B58 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??0?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainRealization@@@Z @ 0x1800B7D80 (--0-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainReal.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800FD598 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180129E50 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180257428 (--$emplace_back@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18028CF80 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAUIDXGIResource@@$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // edi
  char *v3; // r14
  struct _LUID v4; // rdx
  __int64 v5; // r12
  int ExistingDevice; // eax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 *v9; // r15
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int128 v13; // kr00_16
  gsl::details *v14; // rcx
  CD3DDevice *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  CD3DDevice *v18; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+A0h] [rbp+40h] BYREF
  CD3DDevice *v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 *v26; // [rsp+B8h] [rbp+58h] BYREF

  v1 = 0;
  if ( !((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3) )
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1803B5890, 3u, -2003292412, 0x4A6u, 0LL);
    return v1;
  }
  v3 = (char *)this + 112;
  if ( ((*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v4 = *(struct _LUID *)((char *)this + 36);
    v24 = 0LL;
    v5 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(this, v4, &v24);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1803B5890, 3u, ExistingDevice, 0x480u, 0LL);
    }
    else
    {
      v8 = (__int64 *)*((_QWORD *)this + 9);
      v9 = (__int64 *)*((_QWORD *)this + 10);
      if ( v8 == v9 )
      {
LABEL_10:
        v13 = v21;
        if ( (_QWORD)v21 != *((_QWORD *)&v21 + 1) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xx_EventWriteTransfer(
              *(unsigned int *)(*(_QWORD *)this + 40LL),
              (__int64)&Pinning_CompSurfInfoPin,
              *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
              (__int64)(*((_QWORD *)&v21 + 1) - v21) >> 3);
          gsl::details::extent_type<-1>::extent_type<-1>(
            (gsl::details *)v20,
            (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3);
          if ( v20[0] == -1LL || !(_QWORD)v13 && v20[0] )
          {
            gsl::details::terminate(v14);
            __debugbreak();
          }
          v15 = v24;
          v20[1] = v13;
          v16 = CD3DDevice::PinResources(v24, v20);
          v1 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1803B5890, 3u, v16, 0x498u, 0LL);
          }
          else if ( v3 != (char *)&v21 )
          {
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)v3);
            v22 = 0LL;
            v21 = 0LL;
            *(_OWORD *)v3 = v13;
            *((_QWORD *)v3 + 2) = v5;
          }
          if ( !v15 )
            goto LABEL_28;
          v18 = v15;
          goto LABEL_27;
        }
        v1 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1803B5890, 3u, -2147467259, 0x49Eu, 0LL);
      }
      else
      {
        while ( 1 )
        {
          wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
            &v26,
            *v8);
          v10 = *v26;
          v25 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, int *))(v10 + 144))(v26, &v25, &v23);
          v1 = v11;
          if ( v11 < 0 )
            break;
          if ( !v23 )
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
              (__int64 *)&v21,
              &v25);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
          if ( ++v8 == v9 )
          {
            v5 = v22;
            goto LABEL_10;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1803B5890, 3u, v11, 0x48Au, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
      }
    }
    v18 = v24;
    if ( !v24 )
    {
LABEL_28:
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)&v21);
      return v1;
    }
LABEL_27:
    CD3DDevice::Release(v18);
    goto LABEL_28;
  }
  return v1;
}
