/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18005D378
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005D198 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008E000 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1803D7180 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18003CF80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z @ 0x18005D74C (-GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18005DC58 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18006AB44 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800D23A4 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B94A0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@de.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1803D73F4 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  char v4; // al
  char *v5; // r9
  __int64 v6; // r8
  char *v7; // r10
  char *v8; // rdx
  __int128 v9; // xmm9
  __int128 v10; // xmm10
  __int128 v11; // xmm11
  char *v12; // r8
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned int FloatingBottomPositionIfNecessary; // eax
  HMONITOR v20; // rax
  int PositionAndSizeOptions; // ebx
  __int64 v22; // rdx
  const char *v24; // r9
  int ForegroundAppRect; // eax
  __int128 v26; // xmm0
  char v27; // al
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int128 v30; // xmm0
  int v31; // [rsp+20h] [rbp-E0h]
  char *v32; // [rsp+48h] [rbp-B8h]
  char *v33; // [rsp+50h] [rbp-B0h]
  POINT pt; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  float v37[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  struct tagMONITORINFO mi; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *a2 = 0LL;
  v33 = (char *)this + 448;
  v4 = *((_BYTE *)this + 448);
  v5 = (char *)this + 368;
  v32 = (char *)this + 500;
  v6 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v7 = (char *)this + 336;
  v8 = (char *)this + 240;
  v38 = *((_QWORD *)this + 35);
  v9 = *(_OWORD *)((char *)this + v6 + 232);
  v10 = *(_OWORD *)((char *)this + v6 + 248);
  v39 = *((_QWORD *)this + 41);
  v11 = *(_OWORD *)((char *)this + v6 + 264);
  v12 = (char *)this + 272;
  v36 = *((_QWORD *)this + 29);
  v13 = -(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFA0uLL;
  v14 = *(_OWORD *)((char *)this + v13 + 328);
  v15 = *(_OWORD *)((char *)this + v13 + 344);
  v16 = *(_OWORD *)((char *)this + v13 + 360);
  TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
    &v36,
    v8,
    v12,
    &v39,
    v7,
    v5,
    &v38,
    (char *)this + 288,
    (char *)this + 320,
    v32,
    v33);
  v17 = *((_QWORD *)this + 27);
  *(_OWORD *)(v17 + 40) = v9;
  *(_OWORD *)(v17 + 88) = v14;
  *(_OWORD *)(v17 + 56) = v10;
  *(_OWORD *)(v17 + 104) = v15;
  *(_OWORD *)(v17 + 72) = v11;
  *(_OWORD *)(v17 + 120) = v16;
  *(_OWORD *)(v17 + 136) = *(_OWORD *)((char *)this + 328);
  *(_OWORD *)(v17 + 152) = *(_OWORD *)((char *)this + 344);
  *(_OWORD *)(v17 + 168) = *(_OWORD *)((char *)this + 360);
  v18 = `wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v36 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
                       v41);
    v18 = v36;
  }
  pt.x = 0;
  LOBYTE(pt.y) = 3;
  wil::details::ReportUsageToService(&unk_180652F28, 20652073LL, (v18 >> 10) & 1, (v18 >> 11) & 1, &pt, 1, 3);
  v35 = *((_DWORD *)this + 153);
  FloatingBottomPositionIfNecessary = KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
                                        this,
                                        v35);
  if ( (int)(FloatingBottomPositionIfNecessary + 0x80000000) >= 0 && FloatingBottomPositionIfNecessary != -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DB,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)FloatingBottomPositionIfNecessary,
      v31);
  std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
    (char *)this + 464,
    v42,
    &v35);
  if ( !*(_BYTE *)(v42[0] + 40LL) )
    goto LABEL_12;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(this, (struct Windows::Foundation::Point *)v37, v35);
  pt.x = (int)v37[0];
  pt.y = (int)v37[1];
  v20 = MonitorFromPoint(pt, 2u);
  if ( !v20 )
  {
    PositionAndSizeOptions = -2147418113;
    v22 = 739LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions,
      v31);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v20, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2E6,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v24);
LABEL_12:
  v40 = 0LL;
  ForegroundAppRect = KeyboardHosting::TabTipAdapterPolicy::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v40);
  if ( ForegroundAppRect < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)ForegroundAppRect,
      v31);
  v26 = v40;
  v27 = *((_BYTE *)this + 509);
  v28 = *((_OWORD *)this + 9);
  v29 = *((_QWORD *)this + 27);
  *((_OWORD *)this + 12) = v40;
  v43 = v26;
  v30 = *((_OWORD *)this + 11);
  v45 = v28;
  v44 = v30;
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                             v29,
                             &v45,
                             (float *)&v44,
                             (float *)&v43,
                             v27,
                             (__int64)a2);
  if ( PositionAndSizeOptions < 0 )
  {
    v22 = 749LL;
    goto LABEL_9;
  }
  return 0LL;
}
