/*
 * XREFs of _anonymous_namespace_::CreateTemporaryLogoFile @ 0x180148E7C
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x18014961C (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x180148B44 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::CreateTemporaryLogoFile(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // rcx
  HRESULT v5; // eax
  wil::details::in1diag3 *v6; // rcx
  HRESULT v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  LPCWSTR *v24; // rdi
  const struct _tlgProvider_t *v25; // rax
  __int64 v26; // r9
  __int64 (__fastcall *v28[2])(_QWORD); // [rsp+30h] [rbp-29h] BYREF
  __int64 v29; // [rsp+40h] [rbp-19h] BYREF
  __int64 v30; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-9h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+7h] BYREF
  IStream *ppstm; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+70h] [rbp+17h] BYREF
  LPCWSTR pszFile[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v28[0] = (__int64 (__fastcall *)(_QWORD))L".png";
  v28[1] = (__int64 (__fastcall *)(_QWORD))4;
  anonymous_namespace_::CreateTemporaryFile((__int64)&v35, (const void **)v28);
  ppstm = 0LL;
  v4 = (const WCHAR *)pszFile;
  if ( si128.m128i_i64[1] >= 8uLL )
    v4 = pszFile[0];
  v5 = SHCreateStreamOnFileW(v4, 0x42u, &ppstm);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_28;
  ppv = 0LL;
  v7 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v8,
      71LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v7);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v11,
      74LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v32 = 0LL;
  v9 = *(_QWORD *)ppv;
  v32 = 0LL;
  v10 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v9 + 112))(ppv, &v32);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_30;
  v12 = (*(__int64 (__fastcall **)(__int64, IStream *))(*(_QWORD *)v32 + 112LL))(v32, ppstm);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      75LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v12);
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v15,
      78LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v31 = 0LL;
  v13 = *(_QWORD *)ppv;
  v31 = 0LL;
  v14 = (*(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD, __int64 **))(v13 + 64))(
          ppv,
          &GUID_ContainerFormatPng,
          0LL,
          &v31);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_32;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v31 + 24))(v31, v32, 2LL);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      79LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v16);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v19,
      82LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v30 = 0LL;
  v17 = *v31;
  v30 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v17 + 80))(v31, &v30, 0LL);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_34;
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 24LL))(v30, 0LL);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      83LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v30 + 88LL))(v30, a2, 0LL);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      84LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 96LL))(v30);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      85LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v23 = (*(__int64 (__fastcall **)(__int64 *))(*v31 + 88))(v31);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      86LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v23);
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v6,
      68LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_29;
  }
  v24 = pszFile;
  if ( si128.m128i_i64[1] >= 8uLL )
    v24 = (LPCWSTR *)pszFile[0];
  v25 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v25 > 5u )
  {
    v29 = (__int64)v24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v25,
      (unsigned __int8 *)dword_1805A1CF8,
      0LL,
      v26,
      (const WCHAR **)&v29);
  }
  *(_QWORD *)a1 = v35;
  v35 = -1LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)pszFile;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(pszFile[0]) = 0;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppstm);
  std::wstring::_Tidy_deallocate(pszFile);
  if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v29 = v35;
    v28[0] = (__int64 (__fastcall *)(_QWORD))anonymous_namespace_::DeleteAndCloseFileHandle;
    wistd::invoke<int (*)(void *),void * &>(v28, &v29);
  }
  return a1;
}
