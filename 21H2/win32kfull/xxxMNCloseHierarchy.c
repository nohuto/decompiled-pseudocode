/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0237D20
 * Callers:
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C024A3F4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0250A2C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0111C80 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0167A80 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235CC8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C024C3EC (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C025140C (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  __int64 ThreadWin32Thread; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct tagMENUWND *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v22[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h]
  __int128 v25; // [rsp+60h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1h]
  __int128 v27; // [rsp+78h] [rbp+7h] BYREF
  __int64 v28; // [rsp+88h] [rbp+17h]
  _QWORD v29[2]; // [rsp+98h] [rbp+27h] BYREF
  _QWORD v30[4]; // [rsp+A8h] [rbp+37h] BYREF

  v26 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v22[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v22[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v22[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v22[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v22[0] + 24LL);
    if ( v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v25 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v25;
      *((_QWORD *)&v25 + 1) = v3;
      HMLockObject(v3);
      xxxSendMessage((unsigned __int64)v3, 0x1E4u, 0LL, 0LL);
      v5 = *(_DWORD *)(a2 + 8);
      if ( (v5 & 0x100) != 0 && (v5 & 4) != 0 && (**(_DWORD **)v22[0] & 1) == 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v22[0] + 16LL);
        v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v23 = *(_QWORD *)(v7 + 416);
        *(_QWORD *)(v7 + 416) = &v23;
        *((_QWORD *)&v23 + 1) = v6;
        HMLockObject(v6);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v22[0] + 16LL));
        ThreadUnlock1(v8);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v9) )
      {
        if ( !(unsigned int)xxxDestroyWindow((unsigned __int64)v3) )
        {
          v10 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v10 )
            xxxMNDestroyHandler(v10);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v22[0] + 24LL);
      **(_DWORD **)v22[0] &= ~0x20u;
    }
    if ( (**(_DWORD **)v22[0] & 1) != 0 )
    {
      HMAssignmentUnlock(*(_QWORD *)v22[0] + 56LL);
    }
    else
    {
      v11 = *(_QWORD *)v22[0];
      v29[0] = *(_QWORD *)(*(_QWORD *)v22[0] + 64LL) + 56LL;
      v29[1] = *(_QWORD *)(v11 + 16);
      HMAssignmentLock(v29);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v22[0] + 80LL) != -1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 64LL) + 8LL);
      if ( v12 )
      {
        v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v23 = *(_QWORD *)(v13 + 416);
        *(_QWORD *)(v13 + 416) = &v23;
        *((_QWORD *)&v23 + 1) = v12;
        HMLockObject(v12);
        v14 = *(_QWORD *)(*(_QWORD *)v22[0] + 16LL);
        v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v25 = *(_QWORD *)(v15 + 416);
        *(_QWORD *)(v15 + 416) = &v25;
        *((_QWORD *)&v25 + 1) = v14;
        HMLockObject(v14);
        v16 = *(_QWORD *)(*(_QWORD *)v22[0] + 40LL);
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v27 = *(_QWORD *)(v17 + 416);
        *(_QWORD *)(v17 + 416) = &v27;
        *((_QWORD *)&v27 + 1) = v16;
        if ( v16 )
          HMLockObject(v16);
        SmartObjStackRefBase<tagMENU>::Init(v30, *(_QWORD *)(*(_QWORD *)v22[0] + 40LL));
        v30[2] = 0LL;
        xxxSendMenuSelect(
          v12,
          *(_QWORD *)(*(_QWORD *)v22[0] + 16LL),
          (unsigned int)v30,
          *(_DWORD *)(*(_QWORD *)v22[0] + 80LL),
          a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
        ThreadUnlock1(v18);
        ThreadUnlock1(v19);
        ThreadUnlock1(v20);
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v22);
}
