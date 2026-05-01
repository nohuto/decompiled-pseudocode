/*
 * XREFs of ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18015D4A0
 * Callers:
 *     ?SHSimpleIDListFromAttributesAndFlags@@YAJPEBGKW4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015B8B8 (-SHSimpleIDListFromAttributesAndFlags@@YAJPEBGKW4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1801603DC (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 *     ?SHCreateFileSysBindCtxFromAttributes@@YAJPEAUIBindCtx@@KPEAPEAU1@@Z @ 0x180160A70 (-SHCreateFileSysBindCtxFromAttributes@@YAJPEAUIBindCtx@@KPEAPEAU1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CFileSysBindData@@QEAA@XZ @ 0x180152950 (--0CFileSysBindData@@QEAA@XZ.c)
 *     BindCtx_SetMode @ 0x180153F00 (BindCtx_SetMode.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _CreateFileSysBindCtx(struct IBindCtx *a1, const struct _WIN32_FIND_DATAW *a2, struct IBindCtx **a3)
{
  int v5; // ebx
  CFileSysBindData *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  CFileSysBindData *v9; // rdi
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v5 = -2147024882;
  v6 = (CFileSysBindData *)operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v9 = CFileSysBindData::CFileSysBindData(v6);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v5 = (**(__int64 (__fastcall ***)(CFileSysBindData *, GUID *, __int64 *))v9)(
           v9,
           &GUID_01e18d10_4d8b_11d2_855d_006008059367,
           &v11);
    (*(void (__fastcall **)(CFileSysBindData *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v5 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64, const struct _WIN32_FIND_DATAW *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    v5 = BindCtx_SetMode(v8, v7, a3);
    if ( v5 >= 0 )
      ((void (__fastcall *)(_QWORD, const wchar_t *, __int64))(*a3)->lpVtbl->RegisterObjectParam)(
        *a3,
        L"File System Bind Data",
        v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v5;
}
