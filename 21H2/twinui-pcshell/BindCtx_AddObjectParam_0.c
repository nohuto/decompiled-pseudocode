/*
 * XREFs of BindCtx_AddObjectParam_0 @ 0x1801600B8
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x180160290 (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18014FE70 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BindCtx_AddObjectParam_0(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rsi
  char *v5; // rax
  unsigned int v6; // ebx
  CDummyUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v3 = a3;
  if ( a3 )
    goto LABEL_7;
  v5 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v5;
  if ( v5 )
  {
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)v5);
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)(v3 + 8));
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)(v3 + 16));
    *((_QWORD *)v3 + 4) = 0LL;
    *(_QWORD *)v3 = &CDummyUnknown::`vftable'{for `IOleWindow'};
    *((_QWORD *)v3 + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
    *((_QWORD *)v3 + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
    *((_DWORD *)v3 + 6) = 1;
    *((_DWORD *)v3 + 14) = 0;
    *(GUID *)(v3 + 40) = GUID_NULL;
  }
  else
  {
    v3 = 0LL;
  }
  v8 = (CDummyUnknown *)v3;
  if ( v3 )
  {
LABEL_7:
    v6 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, char *))(*(_QWORD *)a1 + 72LL))(
           a1,
           L"Folder Enum Mode",
           v3);
    SafeRelease<CDummyUnknown>(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
