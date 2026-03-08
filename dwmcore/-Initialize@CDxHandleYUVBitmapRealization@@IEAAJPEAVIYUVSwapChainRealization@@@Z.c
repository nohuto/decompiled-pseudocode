/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802B0D60
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B04BC (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B05CC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x180131A4A (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801BA3FC (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B0724 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802BC55C (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct IYUVSwapChainRealization *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  struct _LUID *AdapterLuid; // rax
  int Device; // eax
  __int64 v9; // rcx
  char *v10; // r14
  __int64 v11; // rax
  CD3DDevice *v12; // rbx
  bool v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _BYTE *v17; // rax
  CD3DDevice *v18; // r8
  const void **v19; // rcx
  CD3DDevice *v20; // rcx
  CD3DDevice *v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x9Bu, 0LL);
    return v6;
  }
  v22 = 0LL;
  AdapterLuid = (struct _LUID *)CDxHandleYUVBitmapRealization::GetAdapterLuid(
                                  (CDxHandleYUVBitmapRealization *)((char *)this + 480),
                                  &v23);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *AdapterLuid, &v22);
  v6 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Device, 0xA6u, 0LL);
    v20 = v22;
    if ( !v22 )
      return v6;
LABEL_13:
    CD3DDevice::Release(v20);
    return v6;
  }
  v10 = (char *)this + 376;
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
  v11 = *((_QWORD *)a2 + 2);
  v12 = v22;
  v14 = CD3DVidMemOnlyTexture::Create(
          *(struct ID3D11Texture2D **)(v11 + 96),
          *((_DWORD *)this + 68),
          v13,
          v22,
          (struct CD3DVidMemOnlyTexture **)this + 47);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xACu, 0LL);
  }
  else
  {
    v16 = *(_QWORD *)v10;
    v17 = *(_BYTE **)(*(_QWORD *)v10 + 80LL);
    v18 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    v19 = (const void **)(*(_QWORD *)v10 + 72LL);
    v22 = v18;
    if ( v17 == *(_BYTE **)(v16 + 88) )
    {
      std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v19, v17, &v22);
    }
    else
    {
      *(_QWORD *)v17 = v18;
      *(_QWORD *)(v16 + 80) += 8LL;
    }
  }
  if ( v12 )
  {
    v20 = v12;
    goto LABEL_13;
  }
  return v6;
}
