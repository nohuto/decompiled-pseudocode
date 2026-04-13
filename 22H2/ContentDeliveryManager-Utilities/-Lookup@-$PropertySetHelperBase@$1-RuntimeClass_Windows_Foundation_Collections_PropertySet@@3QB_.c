/*
 * XREFs of ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18007AC68
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180077080 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUHSTRING__@@_NPEAU4@@Z @ 0x180079C94 (-GetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180079D94 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
        _QWORD *a1,
        const WCHAR *a2,
        _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(_QWORD *, PVOID, _QWORD); // rdi
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD *v12; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-48h] BYREF
  const WCHAR *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v17; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16[1] = (const WCHAR *)-2LL;
  v16[0] = a2;
  *a3 = 0LL;
  v15 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v14 = 0LL;
  v6 = v15;
  v7 = *(__int64 (__fastcall **)(_QWORD *, PVOID, _QWORD))(*v15 + 48LL);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, v16);
  v9 = v7(v6, v8[1].Reserved.Reserved1, &v14);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 281LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v9 = (**v14)(v14, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a3);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 282LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
LABEL_11:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 16LL))(v12, *v12);
  }
  return v5;
}
