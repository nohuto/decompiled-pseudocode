/*
 * XREFs of ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004C504
 * Callers:
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004C2B8 (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004DDAC (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180017C80 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18004EC48 (--1-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004ECF4 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004F9FC (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180050238 (--$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Wi.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
const WCHAR *__fastcall MobilityExperience::ActivityWrapper::GetUserActivityPayload(__int64 a1, const WCHAR *a2)
{
  char *v4; // rax
  size_t v5; // r8
  HSTRING_HEADER *Reserved1; // r8
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, PVOID, const WCHAR *); // rdi
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  _QWORD *v13; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v14[3]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER v15; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-A0h]
  void *v17[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-80h]
  _BYTE v19[112]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v14[1] = (const WCHAR *)-2LL;
  v14[2] = a2;
  wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(&v13);
  v4 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 136LL))(*(_QWORD *)(a1 + 8));
  v16 = 15LL;
  *(_QWORD *)&v15.Reserved.Reserved2[16] = 0LL;
  v15.Reserved.Reserved2[0] = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::string::assign(&v15.Reserved.Reserved1, v4, v5);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v19);
  Reserved1 = &v15;
  if ( v16 >= 0x10 )
    Reserved1 = (HSTRING_HEADER *)v15.Reserved.Reserved1;
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
    v19,
    v17,
    Reserved1,
    (char *)Reserved1 + *(_QWORD *)&v15.Reserved.Reserved2[16],
    0);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v19);
  if ( v16 >= 0x10 )
    operator delete(v15.Reserved.Reserved1);
  *(_QWORD *)a2 = 0LL;
  v7 = v13;
  v8 = *(__int64 (__fastcall **)(_QWORD *, PVOID, const WCHAR *))(*v13 + 56LL);
  *(_QWORD *)a2 = 0LL;
  v9 = (const WCHAR *)v17;
  if ( v18 >= 8 )
    v9 = (const WCHAR *)v17[0];
  v14[0] = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, v14);
  v11 = v8(v7, v10[1].Reserved.Reserved1, a2);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x297,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18004C6CDLL);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  return a2;
}
