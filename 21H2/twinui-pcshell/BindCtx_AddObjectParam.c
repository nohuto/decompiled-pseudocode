/*
 * XREFs of BindCtx_AddObjectParam @ 0x180150010
 * Callers:
 *     ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x180150D1C (-_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18014FE70 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BindCtx_AddObjectParam(__int64 a1, __int64 a2, CDummyUnknown *a3)
{
  CDummyUnknown *v4; // rax
  CDummyUnknown *v5; // rdi
  unsigned int v6; // ebx
  CDummyUnknown *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v4 = (CDummyUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v8 = v4;
  if ( v4 )
  {
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)v4 + 8);
    *(_QWORD *)v5 = &CDummyUnknown::`vftable'{for `IOleWindow'};
    *((_QWORD *)v5 + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
    *((_QWORD *)v5 + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
    *((_DWORD *)v5 + 6) = 1;
    *((_QWORD *)v5 + 4) = 0LL;
    *(GUID *)((char *)v5 + 40) = GUID_NULL;
    *((_DWORD *)v5 + 14) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v8 = v5;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, CDummyUnknown *))(*(_QWORD *)a1 + 72LL))(
           a1,
           L"Don't Translate Aliases",
           v5);
    SafeRelease<CDummyUnknown>(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
