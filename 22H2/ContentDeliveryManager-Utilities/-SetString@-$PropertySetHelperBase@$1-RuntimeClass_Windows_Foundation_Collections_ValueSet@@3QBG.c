/*
 * XREFs of ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180034B28
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800311D4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180074DFC (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x180077CA0 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180077D00 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v15; // rdi
  HSTRING_HEADER *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-21h] BYREF
  const WCHAR *v24[2]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER v25; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+80h] [rbp+Fh]
  HSTRING_HEADER v27; // [rsp+88h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v24[1] = (const WCHAR *)-2LL;
  v23 = a3;
  v24[0] = a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v4);
    return v4;
  }
  v21 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v5 + 144LL);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v23);
  v8 = v6(v5, v7[1].Reserved.Reserved1, &v21);
  v4 = v8;
  v26 = 0LL;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v8);
LABEL_5:
    v9 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v4;
  }
  v20[0] = 0;
  v22 = 0LL;
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
          *(_QWORD *)a1,
          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
          &v22);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 352LL;
    goto LABEL_9;
  }
  v13 = v22;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v22 + 80LL);
  v15 = v21;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, v24);
  v10 = v14(v13, v16[1].Reserved.Reserved1, v15, v20);
  v4 = v10;
  v28 = 0LL;
  if ( v10 < 0 )
  {
    v11 = 353LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v10);
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_5;
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0;
}
