/*
 * XREFs of ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x18015111C
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180150DE8 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180151560 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1801595A0 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskbandPin::_ProcessDestinationFolder(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        const struct _ITEMIDLIST *a3,
        __int64 a4,
        struct IShellItem **a5,
        unsigned __int16 **a6)
{
  HRESULT v8; // edi
  BOOL v9; // ebx
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-48h] BYREF
  void *ppv; // [rsp+38h] [rbp-40h] BYREF

  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  v8 = SHCreateItemFromIDList(a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  if ( v8 >= 0 )
  {
    v8 = DetermineFolderDestinationParentAppID(a2, ppv, a5, a6, 0LL);
    if ( v8 >= 0 )
    {
      if ( (unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
      {
        v8 = SHGetIDListFromObject((IUnknown *)*a5, &ppidl);
        if ( v8 < 0 || (v9 = CPinnedList::IsPinned((CTaskbandPin *)((char *)this + 16), ppidl) == 0, ILFree(ppidl), !v9) )
        {
          wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)a5);
          if ( a6 )
          {
            CoTaskMemFree(*a6);
            *a6 = 0LL;
          }
          v8 = -2147024891;
        }
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  return (unsigned int)v8;
}
