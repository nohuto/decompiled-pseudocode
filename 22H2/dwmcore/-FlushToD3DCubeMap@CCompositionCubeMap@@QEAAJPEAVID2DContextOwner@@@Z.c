/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801B8C5C
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B8EDC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BB420 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B570 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005FC34 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800BBE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800E0278 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x1801B8E98 (-GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA-AU_LUID@@XZ.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023D978 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  CDeviceManager *v5; // rcx
  int ExistingDevice; // eax
  __int64 v7; // rcx
  char v8; // al
  unsigned int v9; // r15d
  struct CD3DDevice *v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // r12
  int CurrentRenderingRealization; // eax
  __int64 v14; // rcx
  struct _LUID v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  struct _LUID v21; // [rsp+A0h] [rbp+48h] BYREF
  struct ID2DContextOwner *v22; // [rsp+A8h] [rbp+50h]
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+B0h] [rbp+58h] BYREF
  struct CD3DDevice *v24; // [rsp+B8h] [rbp+60h] BYREF

  v22 = a2;
  LOBYTE(v2) = 0;
  v4 = 0;
  v24 = 0LL;
  if ( *((int *)this + 28) < 0 )
    goto LABEL_21;
  CCompositionSurfaceBitmap::GetAdapterLuid(*(CCompositionSurfaceBitmap **)(32LL * *((unsigned int *)this + 28)
                                                                          + *((_QWORD *)this + 10)
                                                                          + 8));
  if ( !*((_BYTE *)this + 144) )
    goto LABEL_21;
  ExistingDevice = CDeviceManager::GetExistingDevice(v5, v21, &v24);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ExistingDevice, 0x162u, 0LL);
    goto LABEL_21;
  }
  v8 = *((_BYTE *)this + 160);
  v9 = 6;
  if ( !v8 )
    v9 = *((_DWORD *)this + 26);
  v10 = v24;
  v11 = 0;
  if ( !v9 )
  {
LABEL_14:
    if ( v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v10 + 75) + 432LL))(
        *((_QWORD *)v10 + 75),
        *((_QWORD *)this + 17));
    *((_BYTE *)this + 144) = v2;
    goto LABEL_21;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v12 + *((_QWORD *)this + 10) + 8);
    if ( !v2 )
      goto LABEL_12;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v21);
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v2 + 64),
                                    (struct IBitmapRealization **)&v21);
    v4 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
      break;
    v23 = 0LL;
    v15 = v21;
    v2 = *(_QWORD *)(**(_QWORD **)&v21 + 48LL);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v23);
    v16 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v22 + 40LL))(v22);
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v2)(v15, v16, &v23);
    LOBYTE(v2) = 0;
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x16Eu, 0LL);
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v23);
      goto LABEL_19;
    }
    v19 = (**v23)(v23);
    CD3DDevice::CopySubresourceRegion(
      (_DWORD)v10,
      v19,
      0,
      32 * v11 + *((_QWORD *)this + 10) + 16,
      *((_QWORD *)this + 16),
      v11,
      0,
      0,
      0);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v21);
LABEL_12:
    ++v11;
    v12 += 32LL;
    if ( v11 >= v9 )
    {
      v8 = *((_BYTE *)this + 160);
      goto LABEL_14;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentRenderingRealization, 0x16Au, 0LL);
LABEL_19:
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)&v21);
LABEL_21:
  ReleaseInterface<CD3DDevice>(&v24);
  return v4;
}
