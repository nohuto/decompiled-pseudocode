/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215BAC
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MNFreePopup @ 0x1C01FF474 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]

  v15 = 0LL;
  v14 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v12, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v12[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 24LL) )
    {
      v2 = *(_QWORD *)v12[0];
      if ( *(_QWORD *)(*(_QWORD *)v12[0] + 16LL) )
        v3 = *(_QWORD *)(v2 + 16);
      else
        v3 = *(_QWORD *)(v2 + 24);
      ThreadLockAlways(v3, &v14);
      xxxSendMessage(v3);
      ThreadUnlock1(v5, v4, v6);
    }
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 40LL)
      && *(int *)(*(_QWORD *)v12[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v12[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL)
                                                           + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v12[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v12[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v12[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v12[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v12[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v12[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v12[0] + 8LL) )
    {
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL), &v14);
      xxxSendMessage(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL));
      ThreadUnlock1(v8, v7, v9);
    }
    **(_DWORD **)v12[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v12[0] + 16LL) )
    {
      v10 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v12[0] + 16LL));
      v11 = v10;
      if ( v10 )
      {
        *(_QWORD *)(v10 + 8) = 0LL;
        if ( *(_QWORD *)(v10 + 16) && *(_QWORD *)(v10 + 16) != *(_QWORD *)v12[0] )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1195);
        *(_QWORD *)(v11 + 16) = *(_QWORD *)v12[0];
      }
    }
    if ( (**(_DWORD **)v12[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v12[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, *(_QWORD *)v12[0]);
      MNFreePopup(v13);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12);
}
