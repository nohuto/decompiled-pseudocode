/*
 * XREFs of xxxGetSysMenuPtr @ 0x1C0067210
 * Callers:
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     NtUserGetSysMenuOffset @ 0x1C01F6910 (NtUserGetSysMenuOffset.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v11; // rdx
  __int64 SysDesktopMenu; // rax
  __int64 v13; // rdx
  __int64 *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v14 = (__int64 *)gSmartObjNullRef;
  v15 = *(_QWORD *)(v2 + 1472);
  *(_QWORD *)(v2 + 1472) = &v15;
  v4 = a1[5];
  v16 = 0LL;
  if ( (*(_BYTE *)(v4 + 30) & 8) == 0 )
  {
    v13 = 0LL;
    goto LABEL_20;
  }
  v5 = a1[20];
  if ( v5 != *v14 )
  {
    if ( v14 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v14 + 2) )
    {
      if ( *((_BYTE *)v14 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v14);
    }
    if ( v5 )
    {
      v14 = *(__int64 **)(v5 + 152);
      ++*((_DWORD *)v14 + 2);
    }
    else
    {
      v14 = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v14) )
  {
    v11 = *(_QWORD *)(a1[3] + 56LL);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)&v14, v11);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v14) )
    {
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v16 = 0LL;
        v13 = SysDesktopMenu;
LABEL_20:
        SmartObjStackRefBase<tagMENU>::operator=((__int64)&v14, v13);
      }
    }
  }
  v6 = v16;
  if ( !v16 )
    v6 = *v14;
  v7 = 0LL;
  v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v8 )
    v7 = *v8;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v14);
  v9 = *(_QWORD **)(v7 + 1472);
  if ( v9 )
    *(_QWORD *)(v7 + 1472) = *v9;
  return v6;
}
