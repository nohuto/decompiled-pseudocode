/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023E978
 * Callers:
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800E3F84 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801874B4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180189584 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801F1B00 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023EB00 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x180258BAC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C95C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180042D4C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  struct CD2DResourceManager *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct IDeviceTarget *v17; // rcx
  unsigned int v18; // ebx
  void *v20; // [rsp+20h] [rbp-91h]
  unsigned int v21; // [rsp+20h] [rbp-91h]
  unsigned __int64 v22[2]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v23; // [rsp+60h] [rbp-51h] BYREF
  int v24; // [rsp+70h] [rbp-41h]
  __int64 v25; // [rsp+74h] [rbp-3Dh]
  int v26; // [rsp+7Ch] [rbp-35h]
  _BYTE v27[16]; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v28; // [rsp+90h] [rbp-21h]
  char v29; // [rsp+A0h] [rbp-11h]

  v22[0] = 0LL;
  v25 = 0LL;
  v26 = 0;
  *a7 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v27);
  if ( (v29 & 0x20) == 0 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802F0CF8, 2u, -2147024809, 0x60Du, 0LL);
    goto LABEL_13;
  }
  v22[1] = __PAIR64__(a3, v28);
  *(_QWORD *)&v23 = __PAIR64__(a3, v28);
  v13 = 1;
  *((_QWORD *)&v23 + 1) = 0x42C0000042C00000LL;
  if ( (v29 & 8) == 0 )
    v13 = 3;
  v14 = *(struct CD2DResourceManager **)(a1 + 224);
  v24 = v13;
  LODWORD(v20) = a4;
  v15 = CDeviceTextureTarget::Create(v14, a2, (__int64)v27, &v23, v20, a5, a6, 0, v22);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1572;
    goto LABEL_12;
  }
  if ( v22[0] )
    v17 = (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v22[0] + 8) + 24LL) + v22[0] + 8);
  else
    v17 = 0LL;
  v15 = CRenderTargetBitmap::Create(v17, a7);
  v12 = v15;
  if ( v15 < 0 )
  {
    v21 = 1576;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802F0CF8, 2u, v15, v21, 0LL);
  }
LABEL_13:
  v18 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v12, 0);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v22);
  return v18;
}
