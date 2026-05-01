/*
 * XREFs of ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18015D990
 * Callers:
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x1801525C4 (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180152CFC (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18015326C (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180157F6C (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinList::_CreateTombstone(
        CPinList *this,
        struct CPinnedList *a2,
        const unsigned __int16 *a3,
        LPCITEMIDLIST *a4)
{
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  HRESULT v10; // eax
  __int64 v11; // rdx
  LPITEMIDLIST v12; // rax
  __int64 v13; // rdx
  struct _ITEMIDLIST *v14; // rax
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _ITEMIDLIST *v17; // [rsp+28h] [rbp-D8h] BYREF
  char v18; // [rsp+30h] [rbp-D0h]
  struct _ITEMIDLIST *Src; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR *ppwsz; // [rsp+40h] [rbp-C0h] BYREF
  int v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _FILETIME v24; // [rsp+60h] [rbp-A0h]
  WCHAR psz[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
  if ( !ppwsz )
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 2687LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v8);
    goto LABEL_20;
  }
  v10 = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a2 + 104LL))(a2, psz, 260LL);
  v7 = v10;
  if ( v10 < 0 )
  {
    v9 = 2690LL;
LABEL_7:
    v8 = (unsigned int)v10;
    goto LABEL_8;
  }
  v10 = SHStrDupW(psz, ppwsz);
  v7 = v10;
  if ( v10 < 0 )
  {
    v9 = 2691LL;
    goto LABEL_7;
  }
  Src = 0LL;
  if ( !*a3 )
  {
    v12 = ILClone(*a4);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(&Src, v12);
    if ( !Src )
    {
      v7 = -2147024882;
      v11 = 2701LL;
      goto LABEL_14;
    }
LABEL_15:
    SystemTimeAsFileTime = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v23[0] = 16;
    v23[1] = -1091633108;
    v24 = SystemTimeAsFileTime;
    *(_QWORD *)v21 = 0LL;
    *(_QWORD *)v16 = v21;
    v17 = 0LL;
    v18 = 1;
    v7 = ILCloneWithHiddenID(Src, (const struct _HIDDENITEMID *)v23, &v17);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v16);
    if ( v7 >= 0 )
    {
      v13 = *(_QWORD *)v21;
      *(_QWORD *)v21 = 0LL;
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &Src,
        v13);
      ILFree((LPITEMIDLIST)*a4);
      v14 = Src;
      Src = 0LL;
      *a4 = v14;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA95,
        (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
    }
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v21, 0LL);
    goto LABEL_19;
  }
  *(_QWORD *)v16 = &Src;
  v17 = 0LL;
  v18 = 1;
  v7 = CBackupLocationManager::CreateTombstoneLnk((CBackupLocationManager *)ppwsz, *a4, &v17);
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v16);
  if ( v7 >= 0 )
    goto LABEL_15;
  v11 = 2696LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v7);
LABEL_19:
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(&Src, 0LL);
LABEL_20:
  if ( ppwsz )
    CBackupLocationManager::`scalar deleting destructor'((LPVOID *)ppwsz);
  return (unsigned int)v7;
}
