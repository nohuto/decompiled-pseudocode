/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180217C78
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180215710 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180216310 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002A968 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x180098DA8 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1801E8B08 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x1801F16B0 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        FullScreenPositionerHelpers *this,
        struct IApplicationView *a2,
        void **a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int v5; // ebp
  volatile int *v7; // rbx
  int CanCastTo; // edi
  __int64 v9; // rdx
  int v10; // esi
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned __int64 v13; // r9
  int v14; // eax
  char IsFullScreenCompatQuirkedApp; // al
  BOOL v16; // ecx
  int v17; // eax
  _DWORD *v18; // rcx
  _DWORD *v19; // r9
  const struct _GUID *v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile int *v23; // [rsp+60h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v23);
  v7 = v23;
  if ( !v23 )
  {
    CanCastTo = -2147024882;
    v9 = 68LL;
LABEL_30:
    v13 = (unsigned int)CanCastTo;
    goto LABEL_31;
  }
  v10 = 1;
  *((_WORD *)v23 + 24) = 1;
  *((_DWORD *)v7 + 13) = 1;
  *((_DWORD *)v7 + 14) = 1;
  *((_DWORD *)v7 + 22) = 0;
  *((_DWORD *)v7 + 17) = 255;
  *((_DWORD *)v7 + 18) = 0;
  if ( IsPPIEdition() )
  {
    v14 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 55, 32);
    CanCastTo = v14;
    if ( v14 < 0 )
    {
      v13 = (unsigned int)v14;
      v9 = 88LL;
      goto LABEL_31;
    }
    *((_DWORD *)v7 + 19) = 0;
  }
  else
  {
    v11 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 55, (v5 ^ 1u) + 36);
    CanCastTo = v11;
    if ( v11 < 0 )
    {
      v13 = (unsigned int)v11;
      v9 = 81LL;
      goto LABEL_31;
    }
    *((_DWORD *)v7 + 19) = 32 * ((v5 ^ 1) + 2);
  }
  IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v12);
  v16 = (_BYTE)v5 && !IsFullScreenCompatQuirkedApp;
  *((_DWORD *)v7 + 20) = v16;
  *((_BYTE *)v7 + 84) = 1;
  if ( !IsFullScreenCompatQuirkedApp )
    goto LABEL_20;
  if ( (_BYTE)v5 || IsPPIEdition() )
    v10 = 0;
  v17 = ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v7, 51, v10);
  CanCastTo = v17;
  if ( v17 >= 0 )
  {
LABEL_20:
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = (void *)v7;
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      if ( InlineIsEqualGUID(v18, v19) )
      {
        *a3 = (void *)v7;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 2), v20, a3);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
        {
          v9 = 109LL;
          goto LABEL_30;
        }
      }
      (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
    CanCastTo = 0;
    goto LABEL_33;
  }
  v13 = (unsigned int)v17;
  v9 = 106LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
    (const char *)v13);
LABEL_33:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v23);
  return (unsigned int)CanCastTo;
}
