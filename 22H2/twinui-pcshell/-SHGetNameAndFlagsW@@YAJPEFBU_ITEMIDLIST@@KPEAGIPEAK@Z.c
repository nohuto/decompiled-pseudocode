/*
 * XREFs of ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180150778
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x1801513F0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154124 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18015F6F0 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z @ 0x180144AD4 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z.c)
 *     DisplayNameOfW @ 0x1801520EC (DisplayNameOfW.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SHGetNameAndFlagsW(
        LPCITEMIDLIST pidl,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  HRESULT v8; // eax
  HRESULT v9; // edi
  HRESULT v10; // esi
  struct IBindCtx *v11; // r8
  void *v12; // r12
  int v13; // r15d
  int v14; // r9d
  int AttributesFromFolderAndIDList; // eax
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+30h] [rbp-20h] BYREF
  void *ppv; // [rsp+38h] [rbp-18h] BYREF
  LPCITEMIDLIST ppidlLast; // [rsp+40h] [rbp-10h] BYREF

  if ( a3 )
    *a3 = 0;
  v8 = CoInitializeEx(0LL, 6u);
  v9 = v8;
  if ( v8 == 1 )
    goto LABEL_6;
  if ( v8 != -2147417850 )
    goto LABEL_9;
  v9 = CoInitializeEx(0LL, 4u);
  if ( v9 == 1 )
  {
LABEL_6:
    v9 = 0;
  }
  else if ( v9 == -2147417850 )
  {
    v9 = 1;
  }
LABEL_9:
  v10 = SHBindToParent(pidl, &GUID_000214e6_0000_0000_c000_000000000046, &ppv, &ppidlLast);
  if ( v10 >= 0 )
  {
    if ( a3 )
      v10 = DisplayNameOfW(ppv, ppidlLast, a2, a3);
    if ( v10 >= 0 && a5 )
    {
      v12 = ppv;
      v13 = *a5;
      v14 = *a5;
      v18 = 0;
      AttributesFromFolderAndIDList = _GetAttributesFromFolderAndIDList(
                                        (struct IShellFolder *)ppv,
                                        ppidlLast,
                                        v11,
                                        v14,
                                        &v18);
      v16 = v18;
      if ( AttributesFromFolderAndIDList >= 0
        && (v18 & 0x20C00000) == 0x20400000
        && (v13 & 0x800000) != 0
        && (SHGetObjectCompatFlags(v12, 0LL) & 0x200) != 0 )
      {
        v16 = v16 & 0xFF3FFFFF | 0x800000;
      }
      *a5 = v16;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( !v9 )
    CoUninitialize();
  return (unsigned int)v10;
}
