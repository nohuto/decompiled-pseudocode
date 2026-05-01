/*
 * XREFs of ?SHCreateFileSysBindCtxFromAttributes@@YAJPEAUIBindCtx@@KPEAPEAU1@@Z @ 0x180160A70
 * Callers:
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x180160AE0 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18015D4A0 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall SHCreateFileSysBindCtxFromAttributes(struct IBindCtx *a1, DWORD a2, struct IBindCtx **a3)
{
  struct IBindCtx *v5; // rcx
  struct _WIN32_FIND_DATAW v7; // [rsp+20h] [rbp-268h] BYREF

  memset_0(&v7.ftCreationTime, 0, 0x24CuLL);
  v7.dwFileAttributes = a2;
  return _CreateFileSysBindCtx(v5, &v7, a3);
}
