/*
 * XREFs of ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B5C0
 * Callers:
 *     ?Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180172100 (-Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1801401A0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152D74 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015530C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159B8C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z @ 0x180159D6C (-LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B980 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     _CacheAppIDInIDList @ 0x18015D3BC (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18015DC38 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::Resolve(
        CPinnedList *this,
        HWND a2,
        unsigned int a3,
        const struct _ITEMIDLIST *a4,
        struct _ITEMIDLIST **a5)
{
  struct CPinnedList *v8; // r14
  const struct _ITEMIDLIST *v10; // rax
  ITEMIDLIST *v11; // r15
  int v12; // ebx
  const ITEMIDLIST **PidlOrAppID; // rax
  LPITEMIDLIST *v14; // rsi
  struct IShellLinkW *v15; // rdi
  struct _ITEMIDLIST *v16; // rcx
  struct IShellLinkW *v17; // [rsp+28h] [rbp-30h] BYREF
  struct _ITEMIDLIST *v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF

  *a5 = 0LL;
  v8 = (CPinnedList *)((char *)this - 16);
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16) )
    return 2147942405LL;
  v10 = (const struct _ITEMIDLIST *)SHLogILFromFSIL(a4);
  v11 = (ITEMIDLIST *)v10;
  if ( v10 )
    a4 = v10;
  v19 = 0LL;
  v12 = CPinList::Load((struct IStream **)&v19, v8);
  if ( v12 >= 0 )
  {
    PidlOrAppID = CPinList::FindPidlOrAppID((HDSA *)&v19, a4, 0, 0LL);
    v14 = (LPITEMIDLIST *)PidlOrAppID;
    if ( PidlOrAppID )
    {
      v12 = CPinList::LoadShellLink((CPinList *)&v19, (struct PINENTRY *)PidlOrAppID, &v17);
      if ( v12 >= 0 )
      {
        v15 = v17;
        v12 = ((__int64 (__fastcall *)(struct IShellLinkW *, HWND, _QWORD))v17->lpVtbl->Resolve)(v17, a2, a3);
        if ( v12 )
        {
          if ( v12 >= 0 )
            v12 = -2147023673;
        }
        else
        {
          v12 = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, struct IShellLinkW **))v15->lpVtbl->QueryInterface)(
                  v15,
                  &GUID_00000109_0000_0000_c000_000000000046,
                  &v17);
          if ( v12 >= 0 )
          {
            v12 = 1;
            if ( !((unsigned int (__fastcall *)(struct IShellLinkW *))v17->lpVtbl->GetIDList)(v17) )
            {
              v12 = ((__int64 (__fastcall *)(struct IShellLinkW *, struct _ITEMIDLIST **))v15->lpVtbl->GetIDList)(
                      v15,
                      &v18);
              if ( v12 >= 0 )
              {
                if ( v12 )
                  v12 = -2147467259;
                if ( v12 >= 0 )
                {
                  v12 = CacheAppIDInIDList(v18);
                  if ( v12 >= 0 )
                  {
                    ILFree(*v14);
                    v16 = v18;
                    *v14 = v18;
                    v12 = SHILClone(v16, a5);
                  }
                }
              }
            }
            ((void (__fastcall *)(struct IShellLinkW *))v17->lpVtbl->Release)(v17);
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v15->lpVtbl->Release)(v15);
      }
    }
    else
    {
      v12 = -2147023728;
    }
    if ( !v12 && (int)CPinList::Save((CPinList *)&v19, v8) >= 0 )
      CPinnedList::_DoNotifyPinListChange(v8, 0LL, 0);
  }
  ILFree(v11);
  CPinList::~CPinList((CPinList *)&v19);
  return (unsigned int)v12;
}
