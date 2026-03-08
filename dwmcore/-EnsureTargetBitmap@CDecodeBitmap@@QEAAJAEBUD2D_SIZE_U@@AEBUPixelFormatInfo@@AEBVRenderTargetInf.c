/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B16CC
 * Callers:
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AEDC0 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800353DC (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18003542C (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800354BC (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x180035670 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800356D0 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180035750 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800357D0 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x18003B980 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003C8F4 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x18003D378 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        CDecodeBitmap *this,
        struct D3D11_SUBRESOURCE_DATA *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4)
{
  unsigned int v4; // esi
  struct D2D_SIZE_U Size; // rcx
  struct _LUID v10; // rdx
  int Device; // eax
  __int64 v12; // rcx
  CD3DDevice *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct IDeviceTarget *v16; // rdx
  CD3DDevice *v17; // rcx
  struct IDeviceTextureTarget *v19; // [rsp+30h] [rbp-30h] BYREF
  const char *v20; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+40h] [rbp-20h]
  CD3DDevice *v22[2]; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  if ( *((_QWORD *)this + 17) )
  {
    Size = CRenderTargetBitmap::GetSize((CDecodeBitmap *)((char *)this + 240), v22);
    if ( LODWORD(a2->pSysMem) == *(_DWORD *)Size.width
      && HIDWORD(a2->pSysMem) == *(_DWORD *)(*(_QWORD *)&Size + 4LL)
      && *(_DWORD *)a3 == *CRenderTargetBitmap::GetPixelFormatInfo((__int64)this + 216, v22)
      && *((_BYTE *)a4 + 20) == CRenderTargetBitmap::IsHardwareProtected((CDecodeBitmap *)((char *)this + 192)) )
    {
      CRenderTargetBitmap::SetAlphaMode((CDecodeBitmap *)((char *)this + 120), *((_DWORD *)a3 + 1));
      CRenderTargetBitmap::SetColorSpace((CDecodeBitmap *)((char *)this + 120), *((_DWORD *)a3 + 2));
      CRenderTargetBitmap::SetDisplayId((__int64)this + 120, *((_DWORD *)a4 + 2));
      CRenderTargetBitmap::SetSDRBoost((CDecodeBitmap *)((char *)this + 120), *((float *)a4 + 4));
    }
    else
    {
      CRenderTargetBitmap::ReleaseDeviceTarget(this);
    }
  }
  if ( !*((_QWORD *)this + 17) )
  {
    v10 = *(struct _LUID *)a4;
    v22[0] = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v10, v22);
    v4 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x5Du, 0LL);
      v17 = v22[0];
      if ( v22[0] )
        goto LABEL_19;
    }
    else
    {
      v13 = v22[0];
      v19 = 0LL;
      v20 = "DWM Rendertarget (DecodeBitmap)";
      v21 = 31;
      v14 = CD3DDevice::CreateDeviceTextureTarget(v22[0], (const struct CResourceTag *)&v20, a2, a3, a4, &v19);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x64u, 0LL);
      }
      else
      {
        if ( v19 )
          v16 = (struct IDeviceTextureTarget *)((char *)v19 + *(int *)(*((_QWORD *)v19 + 1) + 24LL) + 8);
        else
          v16 = 0LL;
        CRenderTargetBitmap::Initialize(this, v16);
        *((_BYTE *)this + 152) = 0;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
      if ( v13 )
      {
        v17 = v13;
LABEL_19:
        CD3DDevice::Release(v17);
      }
    }
  }
  return v4;
}
