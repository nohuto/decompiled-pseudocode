/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x1803C5B7C
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1803B8EA8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803B8FB8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x1803D0B28 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803D0CB8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803D0E2C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1B08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180108AF4 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802499A4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?0PEAGX@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180267A30 (--$-0PEAGX@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$allocato.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803D28F8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  _WORD *v6; // rax
  _QWORD *v7; // rdx
  KeyboardHosting::TabTipAdapter *v8; // rdi
  _WORD *v9; // rax
  unsigned int v10; // r8d
  _QWORD *v11; // rax
  HSTRING Reserved1; // rbx
  unsigned int v13; // r8d
  void **v14; // rax
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  int v17[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v18[3]; // [rsp+28h] [rbp-81h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-69h]
  void *Src[4]; // [rsp+48h] [rbp-61h] BYREF
  HSTRING_HEADER v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h]
  HSTRING_HEADER v23; // [rsp+88h] [rbp-21h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-9h]
  _WORD v25[24]; // [rsp+B2h] [rbp+9h] BYREF
  _WORD v26[3]; // [rsp+E2h] [rbp+39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  std::wstring::wstring((__int64)Src, L"ViewVisibilityUpdated_");
  v6 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v25, a2);
  std::wstring::wstring((__int64)v18, v6, v25);
  v7 = v18;
  if ( v19 >= 8 )
    v7 = (_QWORD *)v18[0];
  std::wstring::append(Src, v7, v18[2]);
  std::wstring::_Tidy_deallocate(v18);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v26, v3);
  std::wstring::wstring((__int64)v18, v9, v26);
  v11 = v18;
  if ( v19 >= 8 )
    v11 = (_QWORD *)v18[0];
  *(_QWORD *)v17 = v11;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)v17, v10)[1].Reserved.Reserved1;
  v14 = Src;
  if ( Src[3] >= (void *)8 )
    v14 = (void **)Src[0];
  *(_QWORD *)v17 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)v17, v13);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, (HSTRING)v15[1].Reserved.Reserved1, Reserved1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC87,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v22 = 0LL;
  v24 = 0LL;
  std::wstring::_Tidy_deallocate(v18);
  std::wstring::_Tidy_deallocate(Src);
}
