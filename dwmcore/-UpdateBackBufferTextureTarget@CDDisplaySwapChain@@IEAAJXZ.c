/*
 * XREFs of ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x1802885B0
 * Callers:
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x180287488 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z @ 0x180287E60 (-PostPresent@CDDisplaySwapChain@@MEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x180100D88 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::UpdateBackBufferTextureTarget(CDDisplaySwapChain *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int DeviceTextureTarget; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx

  v1 = (__int64 *)((char *)this + 128);
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(
      v4,
      ((unsigned __int64)this + 216) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v5 = *v1;
    *v1 = 0LL;
    if ( v5 )
    {
      v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    v8 = *v1;
    *v1 = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                            v7,
                            *(_QWORD *)(32LL * *((unsigned int *)this + 106) + *((_QWORD *)this + 50) + 16),
                            *((_DWORD *)this + 109),
                            *((_DWORD *)this + 110),
                            *((_DWORD *)this + 24),
                            *((_DWORD *)this + 26),
                            1,
                            v1);
    v12 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180383C70, 2u, DeviceTextureTarget, 0xD9u, 0LL);
    }
    else
    {
      v13 = *(int *)(*(_QWORD *)(*v1 + 8) + 8LL) + *v1 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v13 + 40LL))(
        v13,
        ((unsigned __int64)this + 216) & -(__int64)(this != 0LL));
    }
  }
  else
  {
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180383C70, 2u, -2003304307, 0xDFu, 0LL);
  }
  return v12;
}
