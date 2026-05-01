/*
 * XREFs of ?CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180108FAC
 * Callers:
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008FB98 (__report_rangecheckfailure.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::CreateGUID(char *a1)
{
  HRESULT v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  GUID pguid; // [rsp+20h] [rbp-78h] BYREF
  OLECHAR sz; // [rsp+30h] [rbp-68h] BYREF
  _WORD v10[39]; // [rsp+32h] [rbp-66h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = CoCreateGuid(&pguid);
  if ( v2 < 0 )
  {
    v3 = 204LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( StringFromGUID2(&pguid, &sz, 39) <= 0 )
  {
    v2 = -2147467259;
    v3 = 205LL;
    goto LABEL_3;
  }
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( v10[v6 - 1] );
  v7 = 2 * v6 - 2;
  if ( v7 >= 0x4E )
    _report_rangecheckfailure();
  *(_WORD *)((char *)&v10[-1] + v7) = 0;
  do
    ++v5;
  while ( v10[v5] );
  std::wstring::assign(a1, v10, v5);
  return 0LL;
}
