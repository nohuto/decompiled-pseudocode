/*
 * XREFs of ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180127520
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180039AA0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??R?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z @ 0x18011BA60 (--R-$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x180125C68 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8D54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8D54.c)
 *     ?try_lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18035525C (-try_lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RT.c)
 */

void __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details::folder_change_reader_state *Context,
        PVOID Overlapped,
        ULONG IoResult)
{
  char *v5; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-238h] BYREF
  char v7[528]; // [rsp+30h] [rbp-228h] BYREF

  if ( IoResult )
  {
    if ( IoResult != 1022 )
      return;
    wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()((__int64)Context, 0, 0LL);
  }
  else
  {
    v5 = (char *)Context + 184;
    while ( v5 )
    {
      StringCchCopyNW(v7, 260LL, v5 + 12, (unsigned __int64)*((unsigned int *)v5 + 2) >> 1);
      wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()(
        (__int64)Context,
        *((_DWORD *)v5 + 1),
        (__int64)v7);
      if ( *(_DWORD *)v5 )
        v5 += *(unsigned int *)v5;
      else
        v5 = 0LL;
    }
  }
  wil::srwlock::try_lock_shared((char *)Context + 176, v6, Overlapped);
  if ( v6[0] && *((_QWORD *)Context + 21) )
    wil::details::folder_change_reader_state::StartIo(Context);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v6);
}
