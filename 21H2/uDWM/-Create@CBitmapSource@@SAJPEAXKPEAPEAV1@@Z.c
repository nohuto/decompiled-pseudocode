/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x180049960
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x1800498E0 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18002848C (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180028584 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180050AC0 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct CBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  CBitmapSource *v10; // rsi
  CBaseObject *v11; // rbx
  int v12; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  enum DXGI_FORMAT v17; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v18; // [rsp+30h] [rbp-28h]
  struct IBitmapSource *v19[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IWICBitmap *v21; // [rsp+78h] [rbp+20h] BYREF

  v19[0] = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v19);
  v6 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 39),
         a1,
         a2,
         96.0,
         96.0,
         v17,
         v18,
         v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = (unsigned int)v6;
    v15 = 85LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v14);
    v11 = 0LL;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IWICBitmap **))v19[0])(
         v19[0],
         &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
         &v21);
  v7 = v8;
  if ( v8 < 0 )
  {
    v14 = (unsigned int)v8;
    v15 = 86LL;
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v10 = (CBitmapSource *)v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v15 = 89LL;
    v14 = 2147942414LL;
    goto LABEL_16;
  }
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 96) = 0LL;
  v11 = (CBaseObject *)v9;
  *(_DWORD *)(v9 + 8) = 1;
  *(_QWORD *)v9 = &CBitmapSource::`vftable';
  *(_DWORD *)(v9 + 80) = 0x80000000;
  *(_DWORD *)(v9 + 88) = 0x80000000;
  *(_DWORD *)(v9 + 84) = 0x80000000;
  *(_DWORD *)(v9 + 92) = 0x80000000;
  v12 = CBitmapSource::Initialize((CBitmapSource *)v9);
  v7 = v12;
  if ( v12 < 0 )
  {
    v16 = 91LL;
  }
  else
  {
    v12 = CBitmapSource::Update(v10, v21);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v11 = 0LL;
      *a3 = v10;
      v7 = 0;
      goto LABEL_7;
    }
    v16 = 93LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)(unsigned int)v12);
LABEL_7:
  if ( v11 )
    CBaseObject::Release(v11);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v19);
  return v7;
}
