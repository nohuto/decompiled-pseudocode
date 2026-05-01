/*
 * XREFs of ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800570D4
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180037550 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180143A28 (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800575A4 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801B103C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetWeakProcessAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  NTSTATUS v4; // eax
  int ReturnLength; // [rsp+20h] [rbp-248h]
  ULONG v7; // [rsp+30h] [rbp-238h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-230h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-218h] BYREF
  unsigned __int16 v10; // [rsp+54h] [rbp-214h]
  _BYTE v11[506]; // [rsp+56h] [rbp-212h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v8[1] = -2LL;
  *a2 = 0LL;
  v7 = 0;
  v4 = NtQueryInformationProcess(this, ProcessExecuteFlags|ProcessUserModeIOPL, &ProcessInformation, 0x200u, &v7);
  if ( v4 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x191,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
             (const char *)(unsigned int)v4,
             ReturnLength);
  if ( (ProcessInformation & 0x1000) == 0 )
    return 0LL;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    v8,
    v11,
    (unsigned __int64)v10 >> 1);
  *a2 = v8[0];
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)0x8007000ELL,
    ReturnLength);
  return 2147942414LL;
}
