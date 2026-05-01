/*
 * XREFs of ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180067D20
 * Callers:
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x180079634 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FC0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z @ 0x1800C544C (-Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801A7800 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180240864 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180248E30 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18027CF34 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043E810 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x180068C48 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x180068EB4 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180068F2C (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@$BJA@AA @ 0x180161350 (--_9type@-$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@winrt@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v7; // rcx
  int PropertyValueFactory; // eax
  int v9; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v10; // rbx
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::IPropertyValueStatics *v14; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Foundation::IPropertyValue *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF

  v17 = a3;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v7, &v14);
  v9 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
  }
  else
  {
    v17 = 0LL;
    v10 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 =  winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,void>::type::`vcall'{144,{flat}}(
            v10,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v11);
    }
    else
    {
      v15 = 0LL;
      v12 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v17, &v15);
      v9 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v12);
      }
      else
      {
        v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v15);
        if ( v9 >= 0 )
          v9 = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v9;
}
