/*
 * XREFs of ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1801509D4
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180150C78 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x1801513F0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18005EA88 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x180150BAC (-_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z @ 0x1801553D4 (-GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18015E6E4 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CTaskbandPin::_GetApplication(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        char *a3,
        struct IShellItem **a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  int ShellItem; // ebx
  CTaskbandPin *v10; // rcx
  struct IShellItem **v11; // rcx
  const unsigned __int16 *v12; // rdx
  void *v13; // rcx
  const unsigned __int16 *v14; // r8
  unsigned __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-E0h]
  struct IShellItem *v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR szShortPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  ShellItem = -2147467259;
  if ( CPinnedList::_IsLocalHardDisk(this, (const unsigned __int16 *)a3) )
  {
    ShellItem = StringCchCopyW((char *)szShortPath, 260LL, a3);
    if ( ShellItem >= 0 )
    {
      if ( a6 && !GetLongPathNameW(szShortPath, szShortPath, 0x104u) )
        ResultFromKnownLastError();
      ShellItem = (*(__int64 (__fastcall **)(struct IApplicationResolver *, WCHAR *, struct IShellItem **, unsigned __int16 **))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    szShortPath,
                    v18,
                    a5);
      if ( ShellItem >= 0 )
      {
        if ( a4 )
        {
          *a4 = v18[0];
          v18[0] = 0LL;
        }
        v11 = v18;
        goto LABEL_25;
      }
      ShellItem = CTaskbandPin::_GetShellItem(v10, szShortPath, v18);
      if ( ShellItem >= 0 )
      {
        ShellItem = (*(__int64 (__fastcall **)(struct IApplicationResolver *, struct IShellItem *))(*(_QWORD *)a2 + 80LL))(
                      a2,
                      v18[0]);
        if ( ShellItem >= 0 && a4 )
        {
          *a4 = v18[0];
          v18[0] = 0LL;
        }
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v18);
        if ( ShellItem >= 0 )
        {
          if ( !a5 )
            goto LABEL_26;
          ShellItem = CPinnedList::GenerateAppID(szShortPath, v12, v14, a5);
          if ( ShellItem >= 0 )
          {
LABEL_27:
            if ( a6 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( szShortPath[v15] );
              return (unsigned int)_AllocStringWorker<CTCoAllocPolicy>(
                                     v13,
                                     (__int64)v12,
                                     szShortPath,
                                     v15,
                                     v17,
                                     (void **)a6);
            }
            return (unsigned int)ShellItem;
          }
          if ( !a4 )
          {
LABEL_26:
            if ( ShellItem < 0 )
              return (unsigned int)ShellItem;
            goto LABEL_27;
          }
          v11 = a4;
LABEL_25:
          wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v11);
          goto LABEL_26;
        }
      }
    }
  }
  return (unsigned int)ShellItem;
}
