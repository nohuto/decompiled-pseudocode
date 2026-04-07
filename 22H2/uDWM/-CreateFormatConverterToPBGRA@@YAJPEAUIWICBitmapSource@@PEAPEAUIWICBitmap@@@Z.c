/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18003D1E8
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18003D130 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v11 = 17LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v13 + 64LL))(
         v13,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL,
         0LL,
         0LL,
         0);
  v6 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 26LL;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 39)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
         v13,
         2LL,
         a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 28LL;
    goto LABEL_11;
  }
  if ( !*a2 )
  {
    v6 = -2147024882;
    v11 = 29LL;
    v10 = 2147942414LL;
    goto LABEL_11;
  }
  v6 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  return v6;
}
