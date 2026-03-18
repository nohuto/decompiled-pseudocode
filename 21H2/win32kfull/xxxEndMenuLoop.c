/*
 * XREFs of xxxEndMenuLoop @ 0x1C022D580
 * Callers:
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct tagWND *v7; // rbx
  __int64 v8; // rcx
  int v9; // edx
  char v10; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, a2);
  if ( (**(_DWORD **)v16[0] & 8) != 0 )
  {
    if ( (**(_DWORD **)v16[0] & 0x80000) == 0 )
      xxxMNCancel(a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (v3 & 0x20) != 0 )
    {
      v19 = 0LL;
      v18 = 0LL;
      ThreadLock(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL), (__int64 *)&v18);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v16[0] + 8LL), 0);
      ThreadUnlock1(v5, v4, v6);
      v3 = *(_DWORD *)(a1 + 8);
    }
    if ( (v3 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) )
  {
    v7 = *(struct tagWND **)(*(_QWORD *)v16[0] + 8LL);
    v8 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 432LL);
    if ( v8 == gpqForeground && *(struct tagWND **)(v8 + 120) == v7 )
    {
      v9 = 1;
      v10 = 1;
    }
    else
    {
      v9 = 0;
      v10 = 2;
    }
    v17[2] = 0LL;
    if ( ((*(unsigned __int8 *)(*((_QWORD *)v7 + 5) + 16LL) >> 6) & 1) != v9 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v17;
      v17[1] = v7;
      HMLockObject(v7);
      xxxDWP_DoNCActivate(v7, v10, 1LL);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
}
