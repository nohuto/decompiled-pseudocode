/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18027B2D8
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18027CBA0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180280AD0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180281110 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800102FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@details@wil@@QEAA.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180018B3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180018BA0 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004D5D8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800999F4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180279B5C (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x18027B9A8 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18027C224 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18027C930 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180280890 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  HMONITOR v7; // rax
  ExperienceManagerUtils *v8; // r14
  unsigned int SpeechTextInputHeight; // r12d
  int v11; // eax
  unsigned int v12; // edi
  HRESULT v13; // eax
  __int64 v14; // rdx
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v16; // rcx
  HMONITOR v17; // r8
  const wchar_t *v18; // r15
  bool v19; // di
  bool v20; // si
  bool v21; // r13
  wchar_t *v22; // rax
  __int64 v23; // r8
  struct wil::details::IFunctorHost *v24; // r8
  HMONITOR v25; // r8
  __int64 v26; // rcx
  __m128i v27; // xmm0
  HMONITOR v28; // r8
  HMONITOR v29; // r8
  HSTRING newString; // [rsp+20h] [rbp-89h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-81h] BYREF
  UINT32 length; // [rsp+30h] [rbp-79h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-71h] BYREF
  int v34; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-51h] BYREF
  struct DiagnosticsInfo v37; // [rsp+68h] [rbp-41h] BYREF
  const char *v38; // [rsp+70h] [rbp-39h]
  __int64 v39; // [rsp+78h] [rbp-31h]
  __int16 v40; // [rsp+80h] [rbp-29h]
  char v41[8]; // [rsp+88h] [rbp-21h] BYREF
  CortanaFlightingHelpers *v42; // [rsp+90h] [rbp-19h]
  int v43; // [rsp+9Ch] [rbp-Dh]
  RECT rc; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  string1 = a2;
  *a3 = 0LL;
  *(_WORD *)((char *)this + 237) = 0;
  v5 = *((float *)this + 49);
  rc.left = (int)v5;
  v6 = *((float *)this + 50);
  rc.top = (int)v6;
  rc.right = (int)(float)(v5 + *((float *)this + 51));
  rc.bottom = (int)(float)(v6 + *((float *)this + 52));
  v7 = MonitorFromRect(&rc, 0);
  v8 = (ExperienceManagerUtils *)v7;
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x754,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v7);
  WindowsDeleteString(0LL);
  string2 = 0LL;
  v11 = CortanaDesktopExperienceView::BuildAdditionalArgsString(this, v8, (HMONITOR)SpeechTextInputHeight, &string2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsConcatString(string1, string2, &newString);
    v12 = v13;
    if ( v13 < 0 )
    {
      v14 = 1883LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
LABEL_41:
      WindowsDeleteString(newString);
      newString = 0LL;
      goto LABEL_42;
    }
    v13 = WindowsDuplicateString(newString, a3);
    v12 = v13;
    if ( v13 < 0 )
    {
      v14 = 1884LL;
      goto LABEL_29;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
    v18 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
        *((_BYTE *)this + 237) = 1;
      v19 = wcsstr(v18, L"StartMode=NotificationAnimation") != 0LL;
      v20 = wcsstr(v18, L"StartMode=Attract") != 0LL;
      v21 = wcsstr(v18, L"QuerySource=LockScreen") != 0LL;
      if ( (wcsstr(v18, L"QuerySource=VoiceActivation")
         || (v22 = wcsstr(v18, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
        && ((LOBYTE(v22) = 1, *((_BYTE *)this + 296)) || *((_BYTE *)this + 255))
        || *((_BYTE *)this + 237)
        || v19
        || v20
        || v21 )
      {
        *((_BYTE *)this + 238) = 1;
      }
      if ( (_BYTE)v22 && !*((_BYTE *)this + 238) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 244) = wcsstr(v18, L"&QuerySource=StartButton") != 0LL;
      v35[0] = this;
      v35[1] = &string1;
      v37 = (struct DiagnosticsInfo)retaddr;
      v38 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp";
      v39 = 0LL;
      v40 = 1925;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetImpl'::`2'::impl,
        1u,
        v23);
      v36[0] = off_180516048;
      v36[1] = v35;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v41, 17983783, &v37);
      wil::details::RunFunctor((wil::details *)v36, (struct wil::details::IFunctor *)v41, v24);
      v16 = v42;
      if ( v42 )
        *((_DWORD *)v42 + 4) = v43;
      if ( v19 )
      {
        v13 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
        v12 = v13;
        if ( v13 < 0 )
        {
          v14 = 1936LL;
          goto LABEL_29;
        }
      }
    }
    if ( *((_BYTE *)this + 296) )
    {
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1AC,
                                       (__int64)v8,
                                       v17);
      v26 = 492LL;
    }
    else if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v16) && *((_DWORD *)this + 35) == 6 )
    {
      CortanaFeatureConfiguration::GetDWORD(0LL, &v34);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x384,
                                       (__int64)v8,
                                       v29);
      v26 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
    }
    else
    {
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x140,
                                       (__int64)v8,
                                       v28);
      if ( wcsstr(v18, L"StartMode=QFSearchBox") || wcsstr(v18, L"StartMode=NotificationAnimation") )
      {
        v27 = _mm_cvtsi32_si128(SpeechTextInputHeight);
        goto LABEL_40;
      }
      v26 = 656LL;
    }
    v27 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v26, (__int64)v8, v25));
LABEL_40:
    *((_DWORD *)this + 54) = _mm_cvtepi32_ps(v27).m128_u32[0];
    v12 = 0;
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x758,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
LABEL_42:
  WindowsDeleteString(string2);
  return v12;
}
