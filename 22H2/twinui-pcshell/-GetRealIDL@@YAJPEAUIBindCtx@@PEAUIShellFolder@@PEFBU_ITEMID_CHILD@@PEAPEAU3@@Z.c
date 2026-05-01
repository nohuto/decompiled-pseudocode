/*
 * XREFs of ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x180160494
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x180160B3C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     SHBindToFolderIDListParentEx_0 @ 0x1800925D7 (SHBindToFolderIDListParentEx_0.c)
 *     DisplayNameOfW @ 0x1801520EC (DisplayNameOfW.c)
 *     ?_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z @ 0x180160AA8 (-_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetRealIDL(struct IBindCtx *a1, struct IShellFolder *a2, const ITEMIDLIST *a3, LPITEMIDLIST *a4)
{
  HRESULT v8; // ebx
  int v9; // ebx
  int v10; // eax
  LPITEMIDLIST v11; // rax
  _WORD *v12; // rcx
  struct _ITEMID_CHILD *v13; // rax
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  void *ppv; // [rsp+50h] [rbp-B0h] BYREF
  LPCITEMIDLIST ppidlLast; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR v19[264]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IShellFolder *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6589b6d2_5f8d_4b9e_b7e0_23cdd9717d8c,
         &v16) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IBindCtx *, const ITEMIDLIST *, LPITEMIDLIST *))(*(_QWORD *)v16 + 24LL))(
           v16,
           a1,
           a3,
           a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return (unsigned int)v8;
  }
  if ( !a3 || !a3->mkid.cb )
    goto LABEL_18;
  v9 = 0;
  if ( SHBindToFolderIDListParentEx_0(a2, a3, 0LL, &GUID_000214e6_0000_0000_c000_000000000046, &ppv, &ppidlLast) < 0 )
    goto LABEL_22;
  v15 = 0x40000000;
  if ( (*(int (__fastcall **)(void *, __int64, LPCITEMIDLIST *, int *))(*(_QWORD *)ppv + 72LL))(
         ppv,
         1LL,
         &ppidlLast,
         &v15) >= 0 )
    v9 = v15 & 0x40000000;
  (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( !v9 )
  {
LABEL_22:
    if ( !_IsFilePlaceholder(a2, a3) )
    {
LABEL_18:
      v13 = (struct _ITEMID_CHILD *)ILCloneFirst(a3);
      *a4 = (LPITEMIDLIST)v13;
      return v13 == 0LL ? 0x8007000E : 0;
    }
  }
  v8 = DisplayNameOfW((__int64)a2, a3, 32769LL, v19);
  if ( v8 >= 0 )
  {
    v10 = IShellFolder_ParseDisplayName(a2, 0LL, a1, v19, 0LL, a4, 0LL);
    v8 = v10;
    if ( v10 == -2147467263
      || v10 >= 0
      && (v11 = *a4) != 0LL
      && v11->mkid.cb
      && (v12 = (USHORT *)((char *)&v11->mkid.cb + v11->mkid.cb)) != 0LL
      && *v12 )
    {
      ILFree(*a4);
      goto LABEL_18;
    }
  }
  return (unsigned int)v8;
}
