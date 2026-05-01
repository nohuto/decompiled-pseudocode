/*
 * XREFs of ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x1802C3C18
 * Callers:
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x1802C14CC (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 * Callees:
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180057014 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1802B8C64 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@0@Z @ 0x1802B8ED0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1802B8ED0.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1802BBC04 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1802BBCBC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1802BC6F4 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1802C6C5C (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
_OWORD *__fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView(
        _OWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  const char *v7; // r9
  int v8; // eax
  const void *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  const char *v13; // r9
  LPVOID pv; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-1B0h] BYREF
  _DWORD v17[6]; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v20[128]; // [rsp+68h] [rbp-170h] BYREF
  _BYTE v21[104]; // [rsp+E8h] [rbp-F0h] BYREF
  __int128 v22; // [rsp+150h] [rbp-88h] BYREF
  __int128 v23; // [rsp+160h] [rbp-78h]
  _QWORD v24[4]; // [rsp+170h] [rbp-68h] BYREF
  _QWORD v25[4]; // [rsp+190h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v16[1] = a1;
  v16[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v16);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1326LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  Win32ApplicationViewHelpers::GetAppViewFileName(&pv);
  if ( !pv )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1329LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)0x80070057LL);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(&v18);
  v4 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v19, (__int64)L"!HWND.");
  v5 = std::basic_ostream<unsigned short>::operator<<(v4, std::hex);
  std::basic_ios<unsigned short>::fill(v5 + *(int *)(*(_QWORD *)v5 + 4LL), 48LL);
  v6 = std::setw(&v22, 8LL);
  (*(void (__fastcall **)(__int64, _QWORD))v6)(v5 + *(int *)(*(_QWORD *)v5 + 4LL), *(_QWORD *)(v6 + 8));
  std::basic_ostream<unsigned short>::operator<<(v5, LODWORD(v16[0]));
  std::basic_ostream<unsigned short>::seekp(v19, 0LL, 2LL);
  std::basic_ostream<unsigned short>::tellp(v19, v17);
  v8 = 130 - v17[2] - v17[0];
  if ( v8 <= 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1339LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v7);
  v9 = pv;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)pv + v10) );
  v11 = v8;
  if ( v8 >= v10 )
    v11 = v10;
  std::basic_stringbuf<unsigned short>::str(v20, v24);
  v12 = std::wstring::wstring((__int64)v25, v9, v11);
  std::operator+<unsigned short>((__int64)&v22, v12, v24);
  std::wstring::_Tidy_deallocate(v25);
  std::wstring::_Tidy_deallocate(v24);
  if ( (unsigned __int64)v23 > 0x82 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1346LL,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      v13);
  *a1 = v22;
  a1[1] = v23;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 7LL;
  LOWORD(v22) = 0;
  std::wstring::_Tidy_deallocate(&v22);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v21);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v21);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
