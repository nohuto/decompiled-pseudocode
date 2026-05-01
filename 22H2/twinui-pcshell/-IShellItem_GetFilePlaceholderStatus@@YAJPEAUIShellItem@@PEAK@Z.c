/*
 * XREFs of ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x180160720
 * Callers:
 *     ?_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z @ 0x180160AA8 (-_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R_lambda_5a36663ea628b1a598e3b64b72faa27d_@@QEBAJXZ @ 0x18015FD4C (--R_lambda_5a36663ea628b1a598e3b64b72faa27d_@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1804D678C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1804DC588 (--$GetAsUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall IShellItem_GetFilePlaceholderStatus(struct IShellItem *a1, unsigned int *a2)
{
  int v4; // eax
  int As; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  PROPERTYKEY v9; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF
  bool *v12; // [rsp+80h] [rbp+20h] BYREF

  *a2 = 7;
  LOBYTE(v11) = 1;
  v12 = (bool *)&v11;
  _lambda_5a36663ea628b1a598e3b64b72faa27d_::operator()(&v12, (const unsigned __int16 **)a2);
  if ( (_BYTE)v11
    && !((unsigned int (__fastcall *)(struct IShellItem *, __int64, __int64 *))a1->lpVtbl->GetAttributes)(
          a1,
          0x40000000LL,
          &v11) )
  {
    v11 = 0LL;
    v4 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
           (unsigned int)&v11,
           (_DWORD)a1,
           8,
           (unsigned int)&PKEY_FilePlaceholderStatus,
           1);
    As = v4;
    if ( v4 < 0 )
    {
      v6 = (unsigned int)v4;
      v7 = 202LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\itemutil.h",
        (const char *)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return (unsigned int)As;
    }
    v9 = PKEY_FilePlaceholderStatus;
    As = wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(&v11, &v9, a2);
    if ( As == -2147023728 )
    {
      *a2 = 7;
      As = 0;
    }
    if ( As < 0 )
    {
      v6 = (unsigned int)As;
      v7 = 203LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return 0LL;
}
