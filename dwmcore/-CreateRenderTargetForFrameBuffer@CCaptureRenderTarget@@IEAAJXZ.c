/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801E971C
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801EAE30 (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x180034828 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18003B3A8 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1801E8E34 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801EA070 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180289A80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x180289F3C (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  __int64 *v1; // r15
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct IDXGIResource *CurrentFrameBuffer; // rax
  __int64 v8; // r8
  struct IDXGIResource *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r14d
  struct _LUID v13; // rdx
  int Device; // eax
  __int64 v15; // rcx
  float v16; // xmm6_4
  CD3DDevice *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  CD3DDevice *v20; // rcx
  __int64 v21; // r8
  int StereoRenderTargetBitmap; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct IDXGIResource *v25; // rax
  __int64 v26; // rcx
  struct IDXGIResource **v27; // r14
  __int64 v28; // rdx
  _QWORD *v29; // r15
  unsigned int v30; // eax
  int v31; // ebx
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v41; // [rsp+40h] [rbp-29h] BYREF
  CD3DDevice *v42; // [rsp+48h] [rbp-21h] BYREF
  struct IDXGIResource *v43; // [rsp+50h] [rbp-19h] BYREF
  __int128 v44; // [rsp+58h] [rbp-11h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v46; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v48; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = (__int64 *)((char *)this + 1912);
  v48 = 0LL;
  v2 = *((_QWORD *)this + 239);
  v46 = 0LL;
  v3 = 0LL;
  v47 = 0LL;
  while ( 1 )
  {
    if ( v2 == v1[1] )
      goto LABEL_7;
    if ( *(struct IDXGIResource **)v2 == CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
      break;
    v2 += 24LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v46, *(_QWORD *)(v2 + 8));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v47, *(_QWORD *)(v2 + 16));
  v6 = v46;
  v3 = v47;
  if ( v46 )
    goto LABEL_29;
LABEL_7:
  CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  v48 = 0LL;
  v9 = CurrentFrameBuffer;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v10 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
          v9,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v48);
  LODWORD(v45) = v10;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = (struct _LUID)*((_QWORD *)this + 235);
    v42 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v13, &v42);
    LODWORD(v45) = Device;
    v12 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Device, 0x2BCu, 0LL);
      v20 = v42;
      if ( !v42 )
        goto LABEL_51;
      goto LABEL_49;
    }
    if ( IsDXGIColorSpaceHDR(*((_DWORD *)this + 30)) )
    {
      v16 = *((float *)this + 475);
      if ( v16 == 0.0 )
        v16 = *((float *)this + 476);
    }
    else
    {
      v16 = 0.0;
    }
    if ( *((_BYTE *)this + 1898) )
    {
      v17 = v42;
      v21 = *((unsigned int *)this + 29);
      v41 = 0LL;
      StereoRenderTargetBitmap = CD3DDevice::CreateStereoRenderTargetBitmap(v42, v48, v21);
      LODWORD(v45) = StereoRenderTargetBitmap;
      v12 = StereoRenderTargetBitmap;
      if ( StereoRenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, StereoRenderTargetBitmap, 0x2D1u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v41);
        goto LABEL_18;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v46, 0LL);
      v24 = ((__int64 (__fastcall *)(_QWORD))*MEMORY[0])(0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v47, v24);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v41);
      v3 = v47;
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v46);
      v17 = v42;
      v18 = CD3DDevice::CreateRenderTargetBitmap(
              v42,
              v48,
              *((unsigned int *)this + 29),
              *((unsigned int *)this + 30),
              DisplayId::All,
              LODWORD(v16),
              &v46);
      LODWORD(v45) = v18;
      v12 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2C7u, 0LL);
LABEL_18:
        if ( !v17 )
          goto LABEL_51;
        v20 = v17;
LABEL_49:
        CD3DDevice::Release(v20);
        goto LABEL_51;
      }
    }
    v44 = 0LL;
    v25 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    v6 = v46;
    v43 = v25;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((__int64 *)&v44, v46);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=((__int64 *)&v44 + 1, v3);
    if ( v1[1] == *v1 )
    {
      v26 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL) + 8LL;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 40LL))(
        v26,
        ((unsigned __int64)this + 1864) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    }
    v27 = (struct IDXGIResource **)v1[1];
    if ( v27 == (struct IDXGIResource **)v1[2] )
    {
      std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        v1,
        v1[1],
        &v43);
    }
    else
    {
      v28 = v44;
      *v27 = v43;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
        v27 + 1,
        v28);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
        v27 + 2,
        *((__int64 *)&v44 + 1));
      v1[1] += 24LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v44 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v44);
    if ( v17 )
      CD3DDevice::Release(v17);
LABEL_29:
    v29 = (_QWORD *)((char *)this + 1760);
    v45 = v6;
    v30 = *((_DWORD *)this + 446);
    v31 = -2147024362;
    v32 = v30 + 1;
    if ( v30 + 1 >= v30 )
    {
      v12 = 0;
      if ( v32 > *((_DWORD *)this + 445) )
      {
        v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1760, 8, 1, &v45);
        v12 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v34, 0xC0u, 0LL);
      }
      else
      {
        v33 = *((unsigned int *)this + 446);
        *(_QWORD *)(*v29 + 8 * v33) = v6;
        *((_DWORD *)this + 446) = v32;
      }
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    LODWORD(v45) = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v12, 0x2E9u, 0LL);
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 1898) )
    {
      v35 = *((unsigned int *)this + 446);
      v45 = v3;
      v36 = v35 + 1;
      if ( (int)v35 + 1 < (unsigned int)v35 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024362, 0xB5u, 0LL);
        v12 = -2147024362;
LABEL_45:
        LODWORD(v45) = v12;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v31, 0x2ECu, 0LL);
        goto LABEL_51;
      }
      v31 = 0;
      if ( v36 > *((_DWORD *)this + 445) )
      {
        v38 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1760, 8, 1, &v45);
        v31 = v38;
        v12 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xC0u, 0LL);
          goto LABEL_45;
        }
      }
      else
      {
        *(_QWORD *)(*v29 + 8 * v35) = v3;
        *((_DWORD *)this + 446) = v36;
      }
      v12 = v31;
      LODWORD(v45) = v31;
    }
    v46 = 0LL;
    v47 = 0LL;
    goto LABEL_51;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2B9u, 0LL);
LABEL_51:
  if ( v12 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v12, 0, &v45);
    v12 = v45;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v46);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v48);
  return (unsigned int)v12;
}
