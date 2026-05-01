/*
 * XREFs of BindCtx_RegisterFolderEnumMode @ 0x1801601B0
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x180160CAC (SimpleToRealIDListWithContext.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$get@$00V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@YA$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x1800EE390 (--$get@$00V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_nu.c)
 *     ?Release@CDummyUnknown@@UEAAKXZ @ 0x1801505E0 (-Release@CDummyUnknown@@UEAAKXZ.c)
 *     BindCtx_RegisterObjectParam @ 0x180160290 (BindCtx_RegisterObjectParam.c)
 */

__int64 __fastcall BindCtx_RegisterFolderEnumMode(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v5; // rax
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned int v8; // ebx

  *a3 = 0LL;
  v5 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  if ( v5 )
  {
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)v5);
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)(v7 + 8));
    std::get<1,std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((__int64)(v7 + 16));
    *((_QWORD *)v7 + 4) = 0LL;
    *(_QWORD *)v7 = &CDummyUnknown::`vftable'{for `IOleWindow'};
    *((_QWORD *)v7 + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
    *((_QWORD *)v7 + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
    *((_DWORD *)v7 + 6) = 1;
    *((_DWORD *)v7 + 14) = 1;
    *(GUID *)(v7 + 40) = GUID_NULL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = BindCtx_RegisterObjectParam(a1, v6, v7, a3);
    CDummyUnknown::Release((CDummyUnknown *)v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
