/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E5E04
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007DB10 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     _lambda_280b45e0809411ada214328da8ed29e6_::_lambda_invoker_cdecl_ @ 0x18009B4B0 (_lambda_280b45e0809411ada214328da8ed29e6_--_lambda_invoker_cdecl_.c)
 *     _lambda_f51720ce74bc227b5f49bc6a309c1440_::_lambda_invoker_cdecl_ @ 0x1800BA3D0 (_lambda_f51720ce74bc227b5f49bc6a309c1440_--_lambda_invoker_cdecl_.c)
 *     _lambda_2216b6773a5e063d18d5c04029dbe682_::_lambda_invoker_cdecl_ @ 0x1800CC650 (_lambda_2216b6773a5e063d18d5c04029dbe682_--_lambda_invoker_cdecl_.c)
 *     _lambda_3497390cd098d46010ad730f30d1e158_::_lambda_invoker_cdecl_ @ 0x1800CC6B0 (_lambda_3497390cd098d46010ad730f30d1e158_--_lambda_invoker_cdecl_.c)
 *     _lambda_60cb15bc49b56a4841a9ce291f1dd20e_::_lambda_invoker_cdecl_ @ 0x1800CC710 (_lambda_60cb15bc49b56a4841a9ce291f1dd20e_--_lambda_invoker_cdecl_.c)
 *     _lambda_7d4110d78cc01a05f5b707b296dc697f_::_lambda_invoker_cdecl_ @ 0x1800CC780 (_lambda_7d4110d78cc01a05f5b707b296dc697f_--_lambda_invoker_cdecl_.c)
 *     _lambda_dbd9fe4bd83f68f5aca5f168865b6025_::_lambda_invoker_cdecl_ @ 0x1800CC7F0 (_lambda_dbd9fe4bd83f68f5aca5f168865b6025_--_lambda_invoker_cdecl_.c)
 *     _lambda_f08cf24048edb887003485cf4d31e322_::_lambda_invoker_cdecl_ @ 0x1800CC850 (_lambda_f08cf24048edb887003485cf4d31e322_--_lambda_invoker_cdecl_.c)
 *     _lambda_394656eb2278d455fd4307dad9bf4072_::operator() @ 0x1800CC9B8 (_lambda_394656eb2278d455fd4307dad9bf4072_--operator().c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18021FA34 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180224180 (-PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18022C050 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180234848 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1803A4D70 (-OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18008824C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(this, a2, 0LL, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
