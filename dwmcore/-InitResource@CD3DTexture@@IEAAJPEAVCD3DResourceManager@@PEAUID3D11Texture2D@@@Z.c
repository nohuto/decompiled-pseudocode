/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802BC260
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802BC140 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // edi
  int v4; // r14d
  unsigned int v5; // ebp
  int v9; // edx
  __int64 v10; // rcx
  _DWORD v12[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 40) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v12);
      v9 = GetPixelFormatSize(v12[4]) >> 3;
      if ( !v9 )
        break;
      ++v5;
      v4 += v9 * v12[0] * v12[1];
      if ( v5 >= *((_DWORD *)this + 40) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003292288, 0x85u, 0LL);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 16) = v4;
    *((_BYTE *)this + 70) = 1;
    *((_QWORD *)this + 3) = a2;
    CD3DResourceManager::RegisterResource(a2, this);
    *((_QWORD *)this + 12) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
