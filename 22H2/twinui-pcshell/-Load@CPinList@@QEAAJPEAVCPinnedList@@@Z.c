/*
 * XREFs of ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180153310 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180156DF0 (-GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180156EA0 (-GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x180159430 (-IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159790 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B450 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x180153184 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180154DDC (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z @ 0x1801582B0 (-IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     DSA_Create @ 0x1804E76DC (DSA_Create.c)
 *     DSA_GetItemPtr @ 0x1804E77C0 (DSA_GetItemPtr.c)
 */

__int64 __fastcall CPinList::Load(struct IStream **this, struct CPinnedList *a2)
{
  HDSA v4; // rax
  int v5; // ebx
  int i; // eax
  __int64 v7; // rax
  int j; // esi
  struct _DSA *v9; // rcx
  int v10; // eax
  union _LARGE_INTEGER *ItemPtr; // rax
  IStream *v12; // rcx
  union _LARGE_INTEGER *v13; // r14
  int k; // ebx
  struct _DSA *v15; // rcx
  int v16; // eax
  PVOID v17; // rax
  struct IEnumFullIDList *v19; // [rsp+30h] [rbp-20h] BYREF
  LPITEMIDLIST pidl; // [rsp+38h] [rbp-18h] BYREF

  v4 = DSA_Create(32, 4);
  *this = v4;
  if ( v4 )
  {
    v5 = CPinnedList::EnumAllObjects(a2, &v19);
    if ( v5 >= 0 )
    {
      for ( i = ((__int64 (__fastcall *)(struct IEnumFullIDList *, __int64, LPITEMIDLIST *))v19->lpVtbl->Next)(
                  v19,
                  1LL,
                  &pidl);
            !i;
            i = ((__int64 (__fastcall *)(struct IEnumFullIDList *, __int64, LPITEMIDLIST *))v19->lpVtbl->Next)(
                  v19,
                  1LL,
                  &pidl) )
      {
        if ( (int)CPinList::AppendPidl((CPinList *)this, a2, pidl) < 0 )
        {
          ILFree(pidl);
          v5 = -2147024882;
          break;
        }
        ILFree(pidl);
      }
      ((void (__fastcall *)(struct IEnumFullIDList *))v19->lpVtbl->Release)(v19);
      if ( v5 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct CPinnedList *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, 0LL);
        this[1] = (struct IStream *)v7;
        if ( v7 )
        {
          for ( j = 0; ; ++j )
          {
            v9 = *this;
            v10 = *this ? *(_DWORD *)v9 : 0;
            if ( j >= v10 )
              break;
            ItemPtr = (union _LARGE_INTEGER *)DSA_GetItemPtr(v9, j);
            v12 = this[1];
            pidl = 0LL;
            v13 = ItemPtr;
            if ( IStream_Read(v12, &pidl, 4u) < 0 )
              goto LABEL_22;
            if ( (int)IStream_GetPos(this[1], v13 + 2) < 0 )
              goto LABEL_22;
            v5 = (*(__int64 (__fastcall **)(struct IStream *, LPITEMIDLIST, __int64))(*(_QWORD *)this[1] + 40LL))(
                   this[1],
                   pidl,
                   1LL);
            if ( v5 < 0 )
              goto LABEL_22;
            v13[3].LowPart = (unsigned int)pidl;
          }
        }
        else
        {
          v5 = -2147467259;
        }
        if ( v5 < 0 )
        {
LABEL_22:
          for ( k = 0; ; ++k )
          {
            v15 = *this;
            v16 = *this ? *(_DWORD *)v15 : 0;
            if ( k >= v16 )
              break;
            v17 = DSA_GetItemPtr(v15, k);
            *((_DWORD *)v17 + 6) = 0;
            wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v17 + 1);
          }
        }
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
