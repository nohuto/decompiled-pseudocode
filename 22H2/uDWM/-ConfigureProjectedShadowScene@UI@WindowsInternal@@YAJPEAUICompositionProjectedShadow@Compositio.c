/*
 * XREFs of ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800BBAC4
 * Callers:
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800BC180 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F194 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::UI::ConfigureProjectedShadowScene(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
         a1,
         &GUID_10906888_fb73_5eb4_a225_56b9268fae46,
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 19LL;
LABEL_30:
    v7 = (unsigned int)v4;
    goto LABEL_31;
  }
  if ( !a2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 24LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 25LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 26LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 27LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 28LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 29LL;
      goto LABEL_30;
    }
    goto LABEL_32;
  }
  if ( a2 == 1 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 33LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 34LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 35LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 36LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 37LL;
      goto LABEL_30;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 38LL;
      goto LABEL_30;
    }
LABEL_32:
    v5 = 0;
    goto LABEL_33;
  }
  v5 = -2147024809;
  v6 = 42LL;
  v7 = 2147942487LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ProjectedShadowSceneHelpers.h",
    (const char *)v7);
LABEL_33:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  return v5;
}
