/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800A911C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1800A87C4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800A8E8C (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1800A9278 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        void *a2,
        struct _LUID a3,
        int a4,
        unsigned int a5)
{
  int v6; // esi
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // ecx
  struct IGDIBitmapRealization *v13; // rdi
  char *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v19; // rcx
  char *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  struct IGDIBitmapRealization *v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+48h] BYREF

  v6 = 0;
  v23 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v10 = a5;
  if ( a4 && a5 )
  {
    v22 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v22);
    v11 = CGDIBitmapRealization::Create(a2, a3, &v22);
    v23 = v11;
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1E8u, 0LL);
      if ( !v22 )
        goto LABEL_8;
      v20 = (char *)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
    }
    else
    {
      v21 = 0LL;
      v13 = v22;
      v14 = (char *)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
      v15 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v14)(
              v14,
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v21);
      v23 = v15;
      v6 = v15;
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 40LL))(
          v21,
          ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
        v17 = *((_QWORD *)this + 55);
        *((_QWORD *)this + 55) = v13;
        if ( v17 )
        {
          v19 = v17 + 8 + *(int *)(*(_QWORD *)(v17 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1F3u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
      v20 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 4LL) + 8;
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_8;
  }
LABEL_7:
  *((_QWORD *)this + 51) = a2;
  *((struct _LUID *)this + 52) = a3;
  *((_DWORD *)this + 106) = a4;
  *((_DWORD *)this + 107) = v10;
LABEL_8:
  TranslateDXGIorD3DErrorInContext(v6, 8, &v23);
  return v23;
}
