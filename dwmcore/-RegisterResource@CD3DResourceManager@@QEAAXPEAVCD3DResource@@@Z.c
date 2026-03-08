/*
 * XREFs of ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800CFFE0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800D0218 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180284808 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180298DA8 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802BC260 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180282D7C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::RegisterResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  char *v2; // rax
  char **v4; // rcx
  char *v6; // rdx
  unsigned int v7; // edx

  v2 = (char *)this + 32;
  v4 = (char **)*((_QWORD *)this + 5);
  v6 = (char *)a2 + 32;
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v6 = v2;
  *((_QWORD *)v6 + 1) = v4;
  *v4 = v6;
  *((_QWORD *)v2 + 1) = v6;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 24LL))(a2) )
    *((_BYTE *)a2 + 69) = 1;
  if ( *((_BYTE *)a2 + 68) )
  {
    *((_BYTE *)a2 + 68) = 1;
    ++*((_DWORD *)this + 18);
    if ( *((_BYTE *)a2 + 69) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
  }
  v7 = *((_DWORD *)this + 12) + *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 12) = v7;
  if ( *((_DWORD *)this + 13) < v7 )
    *((_DWORD *)this + 13) = v7;
}
