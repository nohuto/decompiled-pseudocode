/*
 * XREFs of ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180034084 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180071A5C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180071AB0 (-ResolveCDMTaskName@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_tra.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071F0C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072304 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072C74 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 *     ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072EC4 (-GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskConditionF.c)
 *     ?GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskOptionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072F84 (-GetTaskOptionsFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA-AW4TaskOptionFlags@.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B056C (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B2680 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterWnfTrigger(
        Windows::Services::TargetedContent::Internal *a1,
        __int64 a2)
{
  ULONG v4; // ebx
  __int64 (__fastcall *v5)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rdi
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int16 v9; // di
  _QWORD *v10; // rdx
  void **v11; // rdx
  _QWORD *v12; // rsi
  char v13; // r14
  int v14; // r15d
  PVOID Reserved1; // rdi
  const WCHAR *v16; // rcx
  HSTRING_HEADER *v17; // rax
  const char *v18; // r9
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v21; // rdi
  char TaskConditionFlagsForTrigger; // [rsp+50h] [rbp-138h]
  unsigned int v23; // [rsp+50h] [rbp-138h]
  HSTRING string; // [rsp+58h] [rbp-130h] BYREF
  int v25; // [rsp+60h] [rbp-128h] BYREF
  int v26; // [rsp+64h] [rbp-124h] BYREF
  int TaskOptionsFlagsForTrigger; // [rsp+68h] [rbp-120h]
  LPVOID pv; // [rsp+70h] [rbp-118h] BYREF
  const WCHAR *v29; // [rsp+78h] [rbp-110h] BYREF
  int *v30; // [rsp+80h] [rbp-108h] BYREF
  HSTRING v31; // [rsp+88h] [rbp-100h] BYREF
  __int64 v32; // [rsp+90h] [rbp-F8h]
  __int64 v33; // [rsp+98h] [rbp-F0h]
  __int64 v34; // [rsp+A0h] [rbp-E8h] BYREF
  void *v35[3]; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+C8h] [rbp-C0h]
  void *v37[3]; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned __int64 v38; // [rsp+E8h] [rbp-A0h]
  _QWORD v39[3]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD *v40; // [rsp+108h] [rbp-80h]
  HSTRING_HEADER v41; // [rsp+110h] [rbp-78h] BYREF
  HSTRING_HEADER v42; // [rsp+130h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v33 = -2LL;
  try
  {
    v32 = a2;
    v4 = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
           a1,
           (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)a2).Data[0];
    v25 = 0;
    pv = 0LL;
    string = 0LL;
    v5 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = v5(a1, &string);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)a1 + 80LL))(
             a1,
             &v26);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v26);
        if ( (v9 & 2) == 0 && WindowsIsStringEmpty(string) || (v9 & 0x100) != 0 )
        {
LABEL_10:
          TaskOptionsFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskOptionsFlagsForTrigger((__int64)a1);
          TaskConditionFlagsForTrigger = Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger((__int64)a1);
          Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger((HSTRING)v37, (__int64)a1);
          v11 = v37;
          if ( v38 >= 8 )
            v11 = (void **)v37[0];
          Windows::Services::TargetedContent::Internal::ResolveCDMTaskName(v35, (__int64)v11);
          v12 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                  &v34,
                  (__int64 *)a2);
          v13 = v25;
          v14 = (int)pv;
          Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v41, (const WCHAR **)off_1800F5920)[1].Reserved.Reserved1;
          v16 = (const WCHAR *)v35;
          if ( v36 >= 8 )
            v16 = (const WCHAR *)v35[0];
          v29 = v16;
          v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v42, &v29);
          CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
            v17[1].Reserved.Reserved1,
            (_DWORD)Reserved1,
            v4,
            v14,
            v13,
            TaskConditionFlagsForTrigger,
            TaskOptionsFlagsForTrigger,
            (__int64)v12);
          if ( v36 >= 8 )
            operator delete(v35[0]);
          v36 = 7LL;
          v35[2] = 0LL;
          LOWORD(v35[0]) = 0;
          if ( v38 >= 8 )
            operator delete(v37[0]);
          v38 = 7LL;
          v37[2] = 0LL;
          LOWORD(v37[0]) = 0;
          WindowsDeleteString(string);
          string = 0LL;
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_36;
        }
        Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(v39, (__int64)a1);
        v30 = &v25;
        v31 = string;
        if ( v40 )
        {
          (*(void (__fastcall **)(_QWORD *, HSTRING *, LPVOID *, int **))(*v40 + 16LL))(v40, &v31, &pv, &v30);
          if ( v40 )
          {
            v10 = v39;
            LOBYTE(v10) = v40 != v39;
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v40 + 32LL))(v40, v10);
          }
          goto LABEL_10;
        }
LABEL_32:
        std::_Xbad_function_call();
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x1C8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_32;
  }
  catch ( ... )
  {
    v23 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1D8,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v18);
    v21 = *(volatile signed __int32 **)(v32 + 8);
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
    return v23;
  }
LABEL_36:
  v19 = *(volatile signed __int32 **)(a2 + 8);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return 0LL;
}
