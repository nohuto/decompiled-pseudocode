/*
 * XREFs of _anonymous_namespace_::GetPromptText @ 0x1801496EC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x18014D0D4 (_anonymous_namespace_--TruncateDisplayName.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18049DABC (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall anonymous_namespace_::GetPromptText(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v27; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+38h] [rbp-41h]
  _QWORD v29[4]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v30[32]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v31; // [rsp+80h] [rbp+7h] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int128 v33; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v34; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v27 = a1;
  v33 = 0uLL;
  v34 = 0LL;
  v31 = 0uLL;
  v32 = 0LL;
  v4 = a2 + 7;
  v5 = a2[9];
  if ( v5 )
  {
    v16 = a2 + 7;
    if ( a2[10] >= 8uLL )
      v16 = (_QWORD *)*v4;
    v27 = v16;
    v28 = v5;
    v17 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v29, &v27);
    if ( v17[3] >= 8uLL )
      v17 = (_QWORD *)*v17;
    v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            &v33,
            &_ImageBase,
            14504LL,
            v17);
    v19 = retaddr;
    if ( v18 < 0 )
    {
LABEL_30:
      wil::details::in1diag3::Throw_Hr(
        v19,
        250LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    std::wstring::_Tidy_deallocate(v29);
    v20 = v4[2];
    if ( v4[3] >= 8uLL )
      v4 = (_QWORD *)*v4;
    v27 = v4;
    v28 = v20;
    anonymous_namespace_::TruncateDisplayName(v30, &v27);
    v21 = v2[2];
    if ( v2[3] >= 8uLL )
      v2 = (_QWORD *)*v2;
    v27 = v2;
    v28 = v21;
    v22 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v29, &v27);
    if ( v22[3] >= 8uLL )
      v22 = (_QWORD *)*v22;
    v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            &v31,
            &_ImageBase,
            14512LL,
            v22);
    if ( v23 >= 0 )
    {
      std::wstring::_Tidy_deallocate(v29);
      v15 = v30;
      goto LABEL_26;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      255LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_28;
  }
  v6 = a2[2];
  v7 = a2;
  if ( a2[3] >= 8uLL )
    v7 = (_QWORD *)*a2;
  v27 = v7;
  v28 = v6;
  v8 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v29, &v27);
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
         &v33,
         &_ImageBase,
         14506LL,
         v8);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v10,
      243LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v9);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v14,
      245LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_30;
  }
  std::wstring::_Tidy_deallocate(v29);
  v11 = v2[2];
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  v27 = v2;
  v28 = v11;
  v12 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v29, &v27);
  if ( v12[3] >= 8uLL )
    v12 = (_QWORD *)*v12;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
          &v31,
          &_ImageBase,
          14513LL,
          v12);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_29;
  v15 = v29;
LABEL_26:
  std::wstring::_Tidy_deallocate(v15);
  a1[1] = *((_QWORD *)&v31 + 1);
  a1[2] = v32;
  v24 = v31;
  v31 = 0uLL;
  v32 = 0LL;
  *a1 = v24;
  a1[4] = *((_QWORD *)&v33 + 1);
  a1[5] = v34;
  v25 = v33;
  v33 = 0uLL;
  v34 = 0LL;
  a1[3] = v25;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v31);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
  return a1;
}
