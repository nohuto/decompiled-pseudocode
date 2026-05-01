/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18008824C
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     _lambda_efaffaa5f4b32d09aefa47929c9cb96f_::_lambda_invoker_cdecl_ @ 0x180088210 (_lambda_efaffaa5f4b32d09aefa47929c9cb96f_--_lambda_invoker_cdecl_.c)
 *     _lambda_40ebd5a7edad19454cb0db177a6ae919_::_lambda_invoker_cdecl_ @ 0x18009CB90 (_lambda_40ebd5a7edad19454cb0db177a6ae919_--_lambda_invoker_cdecl_.c)
 *     _lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_ @ 0x18009CBE0 (_lambda_7d62eec1b3de4cef9f9423f9a8950082_--_lambda_invoker_cdecl_.c)
 *     ?ShellModeChanged@ShellFeedsDesktopExperienceView@@EEAAJ_N@Z @ 0x1800C5A60 (-ShellModeChanged@ShellFeedsDesktopExperienceView@@EEAAJ_N@Z.c)
 *     _lambda_28679c782842d195cae8ac06fc3af96d_::_lambda_invoker_cdecl_ @ 0x180224FA0 (_lambda_28679c782842d195cae8ac06fc3af96d_--_lambda_invoker_cdecl_.c)
 *     _lambda_61803147bf409ca120dc11436b4d5efa_::_lambda_invoker_cdecl_ @ 0x180239380 (_lambda_61803147bf409ca120dc11436b4d5efa_--_lambda_invoker_cdecl_.c)
 *     ?OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x18023B4A0 (-OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z @ 0x18023B7A0 (-OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z.c)
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180243180 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 *     _lambda_b73f07922ca53c55ec272d654ca15780_::_lambda_invoker_cdecl_ @ 0x180268D80 (_lambda_b73f07922ca53c55ec272d654ca15780_--_lambda_invoker_cdecl_.c)
 *     _lambda_df558bc7901e48a4a17d91fd5caa1bf4_::_lambda_invoker_cdecl_ @ 0x180268DC0 (_lambda_df558bc7901e48a4a17d91fd5caa1bf4_--_lambda_invoker_cdecl_.c)
 *     ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1802776F0 (-PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027FF2C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E6194 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        void *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  LPVOID v10; // rbx
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( !this )
  {
    v8 = CoCreateInstance(
           &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
           0LL,
           0x404u,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           &ppv);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    v13 = 248LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_7;
  }
  v8 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, LPVOID *))this)(
         this,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 244LL;
    goto LABEL_11;
  }
LABEL_3:
  v15[0] = 0LL;
  v10 = ppv;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
          v10,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 252LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown *, __int64))(*(_QWORD *)v15[0] + 48LL))(
          v15[0],
          v5,
          a2,
          a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 253LL;
    goto LABEL_14;
  }
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v9;
}
