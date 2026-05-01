/*
 * XREFs of ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180203770
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180202FD8 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800575A4 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EdpHelpers::GetProcessImageName(DWORD dwProcessId, _QWORD *a2, unsigned __int16 **a3)
{
  unsigned int LastError; // edi
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rdx
  const char *v8; // r9
  DWORD dwSize; // [rsp+20h] [rbp-238h] BYREF
  __int64 v11; // [rsp+28h] [rbp-230h] BYREF
  WCHAR ExeName[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  LastError = 0;
  *a2 = 0LL;
  v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v6 = v5;
  if ( !v5 )
  {
    v7 = 141LL;
LABEL_7:
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_9;
  }
  dwSize = 260;
  if ( !QueryFullProcessImageNameW(v5, 0, ExeName, &dwSize) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x91,
                  (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
                  v8);
    goto LABEL_9;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v11,
    (char *)ExeName,
    dwSize,
    v8);
  if ( !v11 )
  {
    v7 = 148LL;
    goto LABEL_7;
  }
  *a2 = v11;
LABEL_9:
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return LastError;
}
