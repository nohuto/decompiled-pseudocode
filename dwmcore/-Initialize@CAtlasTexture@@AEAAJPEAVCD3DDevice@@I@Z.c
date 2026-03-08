/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1800240C4
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180024034 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180024234 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180024284 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034C80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FE6F4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDevice *a2, int a3)
{
  __int64 v3; // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  _DWORD v15[4]; // [rsp+40h] [rbp-40h] BYREF
  const char *v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+70h] [rbp-10h]
  char v22; // [rsp+74h] [rbp-Ch]
  __int64 v23; // [rsp+A8h] [rbp+28h] BYREF
  int v24; // [rsp+B8h] [rbp+38h] BYREF
  int v25; // [rsp+BCh] [rbp+3Ch]

  v3 = *((_QWORD *)a2 + 112);
  v23 = 0LL;
  v15[2] = 0;
  v20 = 0;
  v18 = v3;
  v19 = DisplayId::None;
  v21 = 0;
  v15[0] = 87;
  v15[1] = 1;
  v24 = 2048;
  v25 = a3;
  v22 = 0;
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v23);
  v17 = 17;
  v16 = "DWM Atlas surface";
  v7 = CD3DDevice::CreateRenderTargetBitmap(a2, &v16, &v24, v15, &v18, 0, &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x47u, 0LL);
  }
  else
  {
    v10 = *(int *)(*(_QWORD *)(v23 + 8) + 8LL) + v23 + 8;
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v10 + 40LL))(v10, this);
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=((char *)this + 8, &v23);
    *((_DWORD *)this + 6) = a3 - 1;
    *((_DWORD *)this + 7) = a3 - 1;
    v11 = DefaultHeap::Alloc(saturated_mul((unsigned int)(a3 - 1), 8uLL));
    v12 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v11;
    if ( v12 )
      operator delete(v12);
    v13 = (void *)*((_QWORD *)this + 2);
    if ( v13 )
    {
      memset_0(v13, 0, 8LL * *((unsigned int *)this + 6));
      CAtlasTexture::GenerateWhitePixel(this);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x58u, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v23);
  return v9;
}
