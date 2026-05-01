/*
 * XREFs of ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800120FC
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180073520 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800C0780 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18000FF14 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x180010D7C (--$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z.c)
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x180010E24 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180010EB8 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x180073BDC (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     ?AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800BF3C8 (-AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801A7AE8 (-GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ.c)
 *     ??9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z @ 0x18023A104 (--9Wrappers@WRL@Microsoft@@YA_NAEBVHString@012@AEBQEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ShowInternal(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  HSTRING *AddressOf; // rax
  int appended; // eax
  unsigned int v15; // ebx
  char v16; // al
  __int64 v17; // rcx
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64, HSTRING, _QWORD); // rax
  int v21[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v23; // [rsp+50h] [rbp+20h] BYREF

  LODWORD(v23) = GetSearchboxTaskbarMode((TabletModeHelpers *)a1);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>((int *)&v23);
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTabletMode<bool &>((char *)(a1 + 212));
  *(_QWORD *)v21 = 0LL;
  LOBYTE(v23) = 0;
  v8 = *(_QWORD *)(a1 + 152);
  if ( v8 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 72LL))(v8, &v23) >= 0 && (_BYTE)v23 )
  {
    v9 = SearchAppDesktopExperienceView::Relaunch(a1, (__int64)a2, a4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x698,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9,
        v21[0]);
LABEL_6:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    {
      v23 = 0LL;
      v16 = Microsoft::WRL::Wrappers::operator!=(v21, &v23);
      v17 = *(_QWORD *)(a1 + 152);
      v18 = v16 == 0;
      v19 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v17 + 88LL);
      if ( v18 )
      {
        v10 = v19(v17, a2, a3);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v12 = 1706LL;
          goto LABEL_17;
        }
      }
      else
      {
        v10 = v19(v17, *(HSTRING *)v21, a3);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v12 = 1702LL;
          goto LABEL_17;
        }
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 152) + 88LL))(
              *(_QWORD *)(a1 + 152),
              a2,
              a3);
      v11 = retaddr;
      if ( v10 < 0 )
      {
        v12 = 1711LL;
LABEL_17:
        wil::details::in1diag3::_Log_Hr(
          v11,
          (void *)v12,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v10,
          v21[0]);
      }
    }
    v15 = 0;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    goto LABEL_6;
  AddressOf = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)v21);
  appended = SearchAppDesktopExperienceView::AppendSessonIdToArgs((SearchAppDesktopExperienceView *)a1, a2, AddressOf);
  v15 = appended;
  if ( appended >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69E,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)appended,
    v21[0]);
LABEL_19:
  ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)v21);
  return v15;
}
