/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0230E00
 * Callers:
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  __int64 ThreadWin32Thread; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagMENUWND *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD v30[2]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+58h] [rbp-9h]
  __int128 v33; // [rsp+60h] [rbp-1h] BYREF
  __int64 v34; // [rsp+70h] [rbp+Fh]
  _QWORD v35[2]; // [rsp+78h] [rbp+17h] BYREF
  _QWORD v36[3]; // [rsp+88h] [rbp+27h] BYREF
  __int128 v37; // [rsp+A0h] [rbp+3Fh] BYREF
  __int64 v38; // [rsp+B0h] [rbp+4Fh]

  v34 = 0LL;
  v32 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v37 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v30[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v30[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v30[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v30[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v30[0] + 24LL);
    if ( v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v33 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v33;
      *((_QWORD *)&v33 + 1) = v3;
      HMLockObject(v3);
      xxxSendMessage((ULONG_PTR)v3);
      v5 = *(_DWORD *)(a2 + 8);
      if ( (v5 & 0x100) != 0 && (v5 & 4) != 0 && (**(_DWORD **)v30[0] & 1) == 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v30[0] + 16LL);
        v7 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v31 = *(_QWORD *)(v7 + 416);
        *(_QWORD *)(v7 + 416) = &v31;
        *((_QWORD *)&v31 + 1) = v6;
        HMLockObject(v6);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v30[0] + 16LL));
        ThreadUnlock1(v9, v8, v10);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v12, v11, v13) )
      {
        if ( !(unsigned int)xxxDestroyWindow(v3) )
        {
          v14 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v14 )
            xxxMNDestroyHandler(v14);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v30[0] + 24LL);
      **(_DWORD **)v30[0] &= ~0x20u;
    }
    v15 = *(_QWORD *)v30[0];
    if ( (**(_DWORD **)v30[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v15 + 56);
    }
    else
    {
      v35[1] = *(_QWORD *)(v15 + 16);
      v35[0] = *(_QWORD *)(*(_QWORD *)v30[0] + 64LL) + 56LL;
      HMAssignmentLock(v35, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v30[0] + 80LL) != -1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 64LL) + 8LL);
      if ( v16 )
      {
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v31 = *(_QWORD *)(v17 + 416);
        *(_QWORD *)(v17 + 416) = &v31;
        *((_QWORD *)&v31 + 1) = v16;
        HMLockObject(v16);
        v18 = *(_QWORD *)(*(_QWORD *)v30[0] + 16LL);
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v33 = *(_QWORD *)(v19 + 416);
        *(_QWORD *)(v19 + 416) = &v33;
        *((_QWORD *)&v33 + 1) = v18;
        HMLockObject(v18);
        ThreadLock(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL), (__int64 *)&v37);
        LODWORD(v18) = *(_DWORD *)(*(_QWORD *)v30[0] + 80LL);
        SmartObjStackRefBase<tagMENU>::Init(v36, *(_QWORD *)(*(_QWORD *)v30[0] + 40LL));
        v36[2] = 0LL;
        xxxSendMenuSelect(v16, *(_QWORD *)(*(_QWORD *)v30[0] + 16LL), (unsigned int)v36, v18, a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
        ThreadUnlock1(v21, v20, v22);
        ThreadUnlock1(v24, v23, v25);
        ThreadUnlock1(v27, v26, v28);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30);
}
