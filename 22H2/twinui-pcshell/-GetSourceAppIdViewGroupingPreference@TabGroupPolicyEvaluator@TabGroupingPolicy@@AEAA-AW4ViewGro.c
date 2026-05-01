/*
 * XREFs of ?GetSourceAppIdViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1802F2340
 * Callers:
 *     ?GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA?AW4ViewGrouping@ViewManagement@UI@Windows@@XZ @ 0x1802F2754 (-GetViewGroupingPreference@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAA-AW4ViewGrouping@ViewM.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002AEEC (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x180163E20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1)
{
  unsigned int v2; // r8d
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  char v7; // al
  const WCHAR *StringRawBuffer; // rbx
  int StringOrdinal; // eax
  const unsigned __int16 *v10; // r8
  unsigned int v11; // ebx
  struct Windows::Foundation::IPropertyValue *pvData; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 length; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h]
  DWORD pcbData; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING_HEADER v17; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  length = 0;
  string = 0LL;
  if ( !*(_QWORD *)a1 )
    goto LABEL_11;
  WindowsDeleteString(0LL);
  string = 0LL;
  length = 1;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         &v17,
                         (const WCHAR **)off_180540E90,
                         v2)[1].Reserved.Reserved1;
  string = 0LL;
  pvData = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(a1, Reserved1, &pvData);
  if ( PropVal < 0 )
    goto LABEL_3;
  v5 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)pvData);
  PropVal = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v5);
LABEL_3:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&pvData);
    goto LABEL_9;
  }
  v6 = pvData;
  if ( pvData )
  {
    pvData = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  PropVal = 0;
LABEL_9:
  if ( PropVal < 0 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v7 = 1;
LABEL_12:
  if ( !v7 )
    goto LABEL_17;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  StringOrdinal = FindStringOrdinal(0x800000u, StringRawBuffer, length, L".exe", -1, 1);
  v10 = L"Applications\\%s";
  if ( StringOrdinal == -1 )
    v10 = L"AppUserModelId\\%s";
  StringCchPrintfW(SubKey, 256LL, v10, StringRawBuffer);
  pcbData = 4;
  if ( RegGetValueW(HKEY_CLASSES_ROOT, SubKey, L"TabGroupingPreference", 0x18u, 0LL, &pvData, &pcbData)
    || (v11 = (unsigned int)pvData, (unsigned int)((_DWORD)pvData - 1) > 1) )
  {
LABEL_17:
    v11 = 0;
  }
  WindowsDeleteString(string);
  return v11;
}
