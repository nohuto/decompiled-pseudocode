/*
 * XREFs of ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180071BC0
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x18006BC4C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x18006C1C8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18006C730 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18006CDDC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006DF74 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_9989ec116c7a722ef40.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071F0C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180074B50 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180078254 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800064C4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(int a1)
{
  _QWORD *v1; // rax
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = &unk_18019B7A0;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( v1 == (_QWORD *)&unk_18019B850 )
    {
      v3 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v3);
      JUMPOUT(0x180071C0ELL);
    }
  }
  return v1[1];
}
