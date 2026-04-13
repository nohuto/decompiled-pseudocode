/*
 * XREFs of ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800A162C
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800A1058 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180039178 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _WORD *v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // r15
  PVOID Reserved1; // r12
  const WCHAR *v9; // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  char *StringRawBuffer; // rdx
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v19; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v22 = -2LL;
  if ( *(_QWORD *)(a3 + 24) < 8uLL )
    v5 = (_WORD *)a3;
  else
    v5 = *(_WORD **)a3;
  v6 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *v5 = 0;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = 0;
  v19 = L"PackageFullName";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v19)[1].Reserved.Reserved1;
  v9 = 0LL;
  v21 = 0LL;
  v18[0] = 0;
  if ( a1 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, Reserved1, v18);
    v11 = retaddr;
    if ( v10 < 0 )
    {
LABEL_25:
      wil::details::in1diag3::Throw_Hr(
        v11,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v10);
      goto LABEL_26;
    }
    if ( v18[0] )
    {
      v19 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, PVOID, const WCHAR **))(*(_QWORD *)a1 + 48LL))(a1, Reserved1, &v19);
      v13 = retaddr;
      if ( v12 < 0 )
      {
LABEL_26:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0x2A,
          (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v12);
        JUMPOUT(0x1800A1842LL);
      }
      v9 = v19;
      if ( v19 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v19 + 8LL))(v19);
        v9 = v19;
      }
      v21 = v9;
      if ( v9 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  v24 = 0LL;
  if ( !v18[0] )
    goto LABEL_15;
  v14 = (*(__int64 (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v9 + 152LL))(v9, &string);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v14);
    goto LABEL_25;
  }
  v7 = 1;
LABEL_15:
  if ( v9 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    if ( *(_WORD *)StringRawBuffer )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&StringRawBuffer[2 * v16] );
      v6 = v16;
    }
    std::wstring::assign((void **)a3, StringRawBuffer, v6);
    LOBYTE(v6) = 1;
  }
  WindowsDeleteString(string);
  return v6;
}
