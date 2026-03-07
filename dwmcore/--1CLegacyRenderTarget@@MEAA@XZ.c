void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  CRegion *v6; // rcx
  char *v7; // rcx
  CResource *v8; // rcx
  __int64 v9; // rdx
  CResource *v10; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v11; // rcx
  char updated; // al
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 18632;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 18648;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 18672;
  CLegacyRenderTarget::ReleaseSwapChain(this);
  if ( *((_QWORD *)this + 2335) )
  {
    if ( *((_BYTE *)this + 18672) )
    {
      if ( *((_BYTE *)this + 18673) )
      {
        v11 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2336);
        if ( v11 )
          PubSebiUpdateLevelEventRpc(v11, 0);
      }
      updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2335), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zqq_EventWriteTransfer(v14, v13, v15, 0, updated);
      *((_BYTE *)this + 18672) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2335));
    *((_QWORD *)this + 2335) = 0LL;
  }
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2336);
  if ( v5 )
  {
    PubSebUnregisterRpc(v5);
    *((_QWORD *)this + 2336) = 0LL;
  }
  v6 = (CRegion *)*((_QWORD *)this + 2332);
  if ( v6 )
    CRegion::`scalar deleting destructor'(v6, 1u);
  FastRegion::CRegion::FreeMemory((CLegacyRenderTarget *)((char *)this + 18584));
  v7 = (char *)*((_QWORD *)this + 2322);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 200));
  v8 = (CResource *)*((_QWORD *)this + 24);
  if ( v8 )
    CResource::InternalRelease(v8);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
  {
    v16 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 22);
  v10 = (CResource *)*((_QWORD *)this + 21);
  if ( v10 )
    CResource::InternalRelease(v10);
  CRenderTarget::~CRenderTarget(this);
}
