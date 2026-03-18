/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0061074 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     MNFreePopup @ 0x1C021BD14 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]

  v18 = 0LL;
  v17 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v15[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 24LL) )
    {
      v2 = *(_QWORD *)v15[0];
      if ( *(_QWORD *)(*(_QWORD *)v15[0] + 16LL) )
        v3 = *(_QWORD *)(v2 + 16);
      else
        v3 = *(_QWORD *)(v2 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
      *((_QWORD *)&v17 + 1) = v3;
      HMLockObject(v3);
      xxxSendMessage(v3);
      ThreadUnlock1(v6, v5, v7);
    }
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 40LL)
      && *(int *)(*(_QWORD *)v15[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v15[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 40LL)
                                                           + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v15[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v15[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v15[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v15[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v15[0] + 8LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v15[0] + 8LL);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v17 = *(_QWORD *)(v9 + 416);
      *(_QWORD *)(v9 + 416) = &v17;
      *((_QWORD *)&v17 + 1) = v8;
      HMLockObject(v8);
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v15[0] + 8LL));
      ThreadUnlock1(v11, v10, v12);
    }
    **(_DWORD **)v15[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v15[0] + 16LL) )
    {
      v13 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v15[0] + 16LL));
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = 0LL;
        if ( *(_QWORD *)(v13 + 16) && *(_QWORD *)(v13 + 16) != *(_QWORD *)v15[0] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        *(_QWORD *)(v14 + 16) = *(_QWORD *)v15[0];
      }
    }
    if ( (**(_DWORD **)v15[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v15[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, *(_QWORD *)v15[0]);
      MNFreePopup(v16);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15);
}
