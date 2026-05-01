/*
 * XREFs of ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180127844
 * Callers:
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801249E0 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18011AD10 (--0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV-$function@$$A6AX.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18011C08C (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x180125DD8 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180128C20 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C99E0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  wil::details::folder_change_reader_state *v10; // rsi
  wil::details::folder_change_reader_state *v11; // rbx
  unsigned int LastError; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  HANDLE FileW; // rax
  const char *v16; // r9
  void *v17; // rcx
  __int64 v18; // rdx
  PTP_IO ThreadpoolIo; // rax
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = operator new(0x10B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v10 = (wil::details::folder_change_reader_state *)wil::details::folder_change_reader_state::folder_change_reader_state(
                                                        (__int64)v7,
                                                        v8,
                                                        v9,
                                                        a5);
  else
    v10 = 0LL;
  v11 = v10;
  if ( !v10 )
  {
    LastError = -2147024882;
    v13 = 2147942414LL;
    v14 = 692LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
      (const char *)v13);
    goto LABEL_15;
  }
  FileW = CreateFileW(a2, 1u, 7u, 0LL, 3u, 0x42000000u, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)v10 + 120,
    FileW);
  v17 = (void *)*((_QWORD *)v10 + 15);
  if ( (((unsigned __int64)v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v18 = 697LL;
LABEL_10:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v18,
                  (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                  v16);
    goto LABEL_15;
  }
  ThreadpoolIo = CreateThreadpoolIo(
                   v17,
                   (PTP_WIN32_IO_CALLBACK)wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback,
                   v10,
                   0LL);
  *((_QWORD *)v10 + 21) = ThreadpoolIo;
  if ( !ThreadpoolIo )
  {
    v18 = 700LL;
    goto LABEL_10;
  }
  started = wil::details::folder_change_reader_state::StartIo(v10);
  LastError = started;
  if ( started < 0 )
  {
    v13 = (unsigned int)started;
    v14 = 701LL;
    goto LABEL_13;
  }
  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
    a1,
    v10);
  LastError = 0;
LABEL_15:
  if ( v11 )
    wil::details::folder_change_reader_state::`scalar deleting destructor'(v11);
  return LastError;
}
