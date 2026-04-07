/*
 * XREFs of ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180093AF8
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000FF40 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::CreateSolidColorBrush(
        struct IDCompositionDesktopDevicePartner *a1,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionBrush **); // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
    v4 = (**(__int64 (__fastcall ***)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64 *))a1)(
           a1,
           &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v4);
LABEL_9:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
      return v5;
    }
    v11 = 0LL;
    v6 = v12;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0LL, &v11);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 528LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
      goto LABEL_9;
    }
    v7 = (**v11)(v11, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, a2);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 529LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
  }
  return 0LL;
}
