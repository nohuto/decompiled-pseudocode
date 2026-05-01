/*
 * XREFs of ?SHSimpleIDListFromAttributesAndFlags@@YAJPEBGKW4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015B748
 * Callers:
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18015EBF4 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18015D330 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SHSimpleIDListFromAttributesAndFlags(const WCHAR *a1, __int64 a2, __int64 a3, LPITEMIDLIST *a4)
{
  struct IBindCtx *v6; // rcx
  HRESULT v7; // ebx
  IBindCtx *pbc; // [rsp+30h] [rbp-288h] BYREF
  _WIN32_FIND_DATAW v10; // [rsp+40h] [rbp-278h] BYREF

  memset_0(&v10.ftCreationTime, 0, 0x24CuLL);
  v10.dwFileAttributes = 128;
  *a4 = 0LL;
  if ( *a1 )
  {
    v7 = _CreateFileSysBindCtx(v6, &v10, &pbc);
    if ( v7 >= 0 )
    {
      v7 = SHParseDisplayName(a1, pbc, a4, 0, 0LL);
      ((void (__fastcall *)(IBindCtx *))pbc->lpVtbl->Release)(pbc);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
