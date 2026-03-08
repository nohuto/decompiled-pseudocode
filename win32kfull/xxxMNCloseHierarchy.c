/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C021A0D0
 * Callers:
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00DBF58 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0237090 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C0242A9C (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagMENUWND *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD v26[2]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+68h] [rbp+7h]
  __int128 v30; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+80h] [rbp+1Fh]
  _QWORD v32[3]; // [rsp+88h] [rbp+27h] BYREF
  __int128 v33; // [rsp+A0h] [rbp+3Fh] BYREF
  __int64 v34; // [rsp+B0h] [rbp+4Fh]

  v31 = 0LL;
  v29 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v26[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v26[0] & 0x4000) != 0 )
    {
      FindTimer(*(void **)(*(_QWORD *)v26[0] + 16LL), (void *)0xFFFF, 0, 1, 0LL);
      **(_DWORD **)v26[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v26[0] + 24LL);
    if ( v3 )
    {
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 24LL), &v30);
      xxxSendMessage(v3, 0x1E4u);
      v4 = *(_DWORD *)(a2 + 8);
      if ( (v4 & 0x100) != 0 && (v4 & 4) != 0 && (**(_DWORD **)v26[0] & 1) == 0 )
      {
        ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), &v28);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v26[0] + 16LL));
        ThreadUnlock1(v6, v5, v7);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v9, v8, v10) )
      {
        if ( !(unsigned int)xxxDestroyWindow((__int64 *)v3) )
        {
          v11 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v11 )
            xxxMNDestroyHandler(v11);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v26[0] + 24LL);
      **(_DWORD **)v26[0] &= ~0x20u;
    }
    v12 = *(_QWORD *)v26[0];
    if ( (**(_DWORD **)v26[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v12 + 56);
    }
    else
    {
      v27[1] = *(_QWORD *)(v12 + 16);
      v27[0] = *(_QWORD *)(*(_QWORD *)v26[0] + 64LL) + 56LL;
      HMAssignmentLock(v27, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v26[0] + 80LL) != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v26[0] + 64LL);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        ThreadLockAlways(*(_QWORD *)(v13 + 8), &v28);
        ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), &v30);
        ThreadLock(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL), &v33);
        v15 = *(_DWORD *)(*(_QWORD *)v26[0] + 80LL);
        SmartObjStackRefBase<tagMENU>::Init(v32, *(_QWORD *)(*(_QWORD *)v26[0] + 40LL));
        v32[2] = 0LL;
        xxxSendMenuSelect(v14, *(_QWORD *)(*(_QWORD *)v26[0] + 16LL), (unsigned int)v32, v15, a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
        ThreadUnlock1(v17, v16, v18);
        ThreadUnlock1(v20, v19, v21);
        ThreadUnlock1(v23, v22, v24);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26);
}
