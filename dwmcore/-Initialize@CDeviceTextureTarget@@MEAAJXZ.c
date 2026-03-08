/*
 * XREFs of ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18003D290
 * Callers:
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003C9CC (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x18029C4F0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x18003D314 (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800EAB60 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceTextureTarget::Initialize(CDeviceTextureTarget *this)
{
  __int64 v1; // rax
  struct ID3D11RenderTargetView **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  CD3DDevice *v6; // rbx
  int RenderTargetView; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  v1 = *((_QWORD *)this + 3);
  v2 = (struct ID3D11RenderTargetView **)((char *)this + 264);
  v4 = *((_QWORD *)this + 33);
  v5 = *(_QWORD *)(v1 + 24);
  *v2 = 0LL;
  v6 = (CD3DDevice *)((v5 - 16) & -(__int64)(v5 != 0));
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  RenderTargetView = CD3DDevice::CreateRenderTargetView(v6, *((struct ID3D11Resource **)this + 15), 0LL, v2);
  v9 = RenderTargetView;
  if ( RenderTargetView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, RenderTargetView, 0x3Cu, 0LL);
  }
  else
  {
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)this + 3), this);
    return 0;
  }
  return v9;
}
