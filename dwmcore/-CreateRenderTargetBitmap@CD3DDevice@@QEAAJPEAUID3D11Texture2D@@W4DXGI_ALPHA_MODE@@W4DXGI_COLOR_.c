/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180289A80
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108CA0 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801E971C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EBB44 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x180252660 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180289C0C (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802A74D0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C9CC (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F2F48 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct IDeviceTarget *v17; // rcx
  unsigned int v18; // ebx
  void *v20; // [rsp+20h] [rbp-81h]
  unsigned int v21; // [rsp+20h] [rbp-81h]
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  _DWORD v23[5]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v24; // [rsp+6Ch] [rbp-35h]
  int v25; // [rsp+74h] [rbp-2Dh]
  _BYTE v26[16]; // [rsp+78h] [rbp-29h] BYREF
  int v27; // [rsp+88h] [rbp-19h]
  char v28; // [rsp+98h] [rbp-9h]

  v22 = 0LL;
  v24 = 0LL;
  v25 = 0;
  *a7 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v26);
  if ( (v28 & 0x20) == 0 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180383C70, 2u, -2147024809, 0x442u, 0LL);
    goto LABEL_13;
  }
  v23[0] = v27;
  v13 = 1;
  v23[1] = a3;
  v23[2] = 1119879168;
  v23[3] = 1119879168;
  if ( (v28 & 8) == 0 )
    v13 = 3;
  v14 = *(_QWORD *)(a1 + 184);
  v23[4] = v13;
  LODWORD(v20) = a4;
  v15 = CDeviceTextureTarget::Create(v14, a2, (__int64)v26, (__int64)v23, v20, a5, a6, 0, &v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1113;
    goto LABEL_12;
  }
  if ( v22 )
    v17 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v22 + 8) + 24LL) + v22 + 8);
  else
    v17 = 0LL;
  v15 = CRenderTargetBitmap::Create(v17, a7);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1117;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180383C70, 2u, v15, v21, 0LL);
  }
LABEL_13:
  v18 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v12, 0);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  return v18;
}
