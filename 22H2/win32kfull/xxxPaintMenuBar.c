/*
 * XREFs of xxxPaintMenuBar @ 0x1C0101DB0
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C0101C80 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C0043460 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0101FD0 (xxxSendUAHMenuMessage.c)
 *     xxxMenuBarCompute @ 0x1C0102284 (xxxMenuBarCompute.c)
 *     ThreadLockMenuNoModify @ 0x1C01024BC (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, LONG a3, int a4, LONG a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 **v26[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h]
  __int128 v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v31 = 0LL;
  v11 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v26, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
  {
    v12 = v27;
    if ( !v27 )
      v12 = (__int64)*v26[0];
    ThreadLockMenuNoModify(v12, &v30);
    v13 = (*v26[0])[5];
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v13 + 40) |= 0x10u;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v15 = (*v26[0])[10];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v28 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v28;
    *((_QWORD *)&v28 + 1) = v15;
    if ( v15 )
      HMLockObject(v15);
    if ( a1 != (*v26[0])[10] || !*((_DWORD *)*v26[0] + 16) || (v17 = (__int64)*v26[0], !*((_DWORD *)*v26[0] + 17)) )
      xxxMenuBarCompute((unsigned int)v26, a1, a5, a3, v14);
    if ( gihmodUserApiHook >= 0 && v15 && (unsigned int)xxxSendUAHInitMenuMessage(v15, v26, (__int64)a2) )
    {
      v18 = v27;
      if ( !v27 )
        v18 = (__int64)*v26[0];
      xxxSendUAHMenuMessage(v15, 145LL, v18, a2);
    }
    ThreadUnlock1(v17);
    if ( v27 )
      v19 = v27;
    else
      v19 = (__int64)*v26[0];
    if ( (unsigned int)MNIsUAHMenu(v19) )
    {
      if ( !v20 )
        v20 = (__int64)*v26[0];
      xxxMenuDraw(a2, v20, 0LL);
    }
    else
    {
      if ( *(_QWORD *)((*v26[0])[5] + 24) )
        v23 = *(_QWORD *)((*v26[0])[5] + 24);
      else
        v23 = *(_QWORD *)(gpsi + 4936LL);
      v24 = GreSelectBrush(a2, v23);
      NtGdiPatBlt(a2, a3, a5, *((_DWORD *)*v26[0] + 16), *((_DWORD *)*v26[0] + 17), 15728673);
      v25 = v27;
      if ( !v27 )
        v25 = (__int64)*v26[0];
      xxxMenuDraw(a2, v25, 0LL);
      GreSelectBrush(a2, v24);
    }
    v11 = *((_DWORD *)*v26[0] + 17);
    v21 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 40LL);
    *(_DWORD *)(v21 + 40) &= ~0x200u;
    ThreadUnlock1(v21);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
  return v11;
}
