/*
 * XREFs of ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180103100
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800CC2A8 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CD3DDevice::IsFrontBufferRenderingSupported(CD3DDevice *this, __int64 a2)
{
  char v2; // di
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 146) >= 45056 && !*((_QWORD *)this + 71) )
  {
    v4 = *((_QWORD *)this + 69);
    v7 = 0;
    if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 232LL))(v4, a2, &v7) >= 0
      && (v7 & 0x2000000) != 0 )
    {
      v5 = *((_DWORD *)this + 214);
      if ( (v5 != 4318 || *((__int64 *)this + 74) >= 0x180015000D25B5LL)
        && (CCommonRegistryData::SuperWetEnabled && *((int *)this + 147) >= 2600
         || CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist
         || v5 == 32902 && *((int *)this + 147) < 2600) )
      {
        return 1;
      }
    }
  }
  return v2;
}
