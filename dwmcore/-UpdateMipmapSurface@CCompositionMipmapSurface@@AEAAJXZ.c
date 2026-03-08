/*
 * XREFs of ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1802211DC
 * Callers:
 *     ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x180220C70 (-OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18001891C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800D4E90 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18021FB18 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::UpdateMipmapSurface(CCompositionMipmapSurface *this)
{
  unsigned int v2; // r14d
  CDeviceManager *v3; // rcx
  int ExistingDevice; // eax
  __int64 v5; // rcx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  int CurrentRenderingRealization; // eax
  __int64 v11; // rcx
  struct IBitmapRealization *v12; // rbx
  __int64 (__fastcall *v13)(struct IBitmapRealization *, __int64 *, __int64 (__fastcall ****)(_QWORD)); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+5Ch] [rbp-14h]
  int v23; // [rsp+64h] [rbp-Ch]
  struct CD3DDevice *v24; // [rsp+B0h] [rbp+40h] BYREF
  struct IBitmapRealization *v25; // [rsp+B8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+C0h] [rbp+50h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 160) )
    return v2;
  *((_BYTE *)this + 160) = 0;
  if ( !*((_QWORD *)this + 21) )
    return v2;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v24);
  ExistingDevice = CDeviceManager::GetExistingDevice(v3, *(struct _LUID *)((char *)this + 120), &v24);
  v2 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ExistingDevice, 0x175u, 0LL);
    goto LABEL_16;
  }
  v6 = 0;
  if ( !*((_DWORD *)this + 34) )
  {
LABEL_11:
    (*(void (__fastcall **)(CCompositionMipmapSurface *, _QWORD, CCompositionMipmapSurface *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 12);
    v8 = 32LL * v6;
    v9 = *(_QWORD *)(v7 + v8);
    if ( !v9 || !*(_BYTE *)(v7 + v8 + 24) )
      goto LABEL_10;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v9 + 72),
                                    &v25);
    v2 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
      break;
    v12 = v25;
    v26 = 0LL;
    v22 = 0LL;
    v23 = 0;
    v20 = *((_QWORD *)this + 15);
    v21 = DisplayId::None;
    v13 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64 *, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v25 + 48LL);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
    v14 = v13(v12, &v20, &v26);
    v2 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x183u, 0LL);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
      goto LABEL_13;
    }
    v16 = *((_QWORD *)this + 12);
    v17 = *(_QWORD *)(*((_QWORD *)this + 21) + 112LL);
    v18 = (**v26)(v26);
    CD3DDevice::CopySubresourceRegion((__int64)v24, v18, 0, (int *)(v8 + v16 + 8), v17, v6, 0, 0, 0);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
LABEL_10:
    if ( ++v6 >= *((_DWORD *)this + 34) )
      goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CurrentRenderingRealization, 0x17Cu, 0LL);
LABEL_13:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
LABEL_16:
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v24);
  return v2;
}
