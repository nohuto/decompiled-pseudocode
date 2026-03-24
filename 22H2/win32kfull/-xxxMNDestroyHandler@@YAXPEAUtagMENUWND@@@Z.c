/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235708
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MNFreePopup @ 0x1C02217B8 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-40h] BYREF
  void *const *v25[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]

  v27 = 0LL;
  v26 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v24[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 24LL) )
    {
      v3 = *(_QWORD *)v24[0];
      if ( *(_QWORD *)(*(_QWORD *)v24[0] + 16LL) )
        v4 = *(_QWORD *)(v3 + 16);
      else
        v4 = *(_QWORD *)(v3 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v26 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v26;
      *((_QWORD *)&v26 + 1) = v4;
      HMLockObject(v4);
      xxxSendMessage(v4, 0x1E4u, 0LL, 0LL);
      ThreadUnlock1(v6);
    }
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 40LL)
      && *(int *)(*(_QWORD *)v24[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v24[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 40LL)
                                                           + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v24[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v24[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v24[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v24[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v24[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v24[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v24[0] + 8LL) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v24[0] + 8LL);
      v8 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v26 = *(_QWORD *)(v8 + 416);
      *(_QWORD *)(v8 + 416) = &v26;
      *((_QWORD *)&v26 + 1) = v7;
      HMLockObject(v7);
      if ( *(_QWORD *)(*(_QWORD *)v24[0] + 40LL) )
        v9 = **(_QWORD **)(*(_QWORD *)v24[0] + 40LL);
      else
        v9 = 0LL;
      xxxSendMessage(
        *(_QWORD *)(*(_QWORD *)v24[0] + 8LL),
        0x125u,
        v9,
        (**(_DWORD **)v24[0] & 4) != 0 ? (struct _LARGE_STRING *)0x20000000 : 0);
      ThreadUnlock1(v10);
    }
    **(_DWORD **)v24[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 16LL) )
    {
      v11 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v24[0] + 16LL));
      v12 = v11;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 8) = 0LL;
        if ( *(_QWORD *)(v11 + 16) && *(_QWORD *)(v11 + 16) != *(_QWORD *)v24[0] )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1193);
        *(_QWORD *)(v12 + 16) = *(_QWORD *)v24[0];
      }
    }
    if ( (**(_DWORD **)v24[0] & 0x10000) != 0 )
    {
      v2 = *(_QWORD *)v24[0];
      **(_DWORD **)(*(_QWORD *)v24[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, *(_QWORD *)v24[0]);
      MNFreePopup(v25);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v22 )
      v14 = *v22;
  }
  if ( v24[0] != gSmartObjNullRef && !--*(_DWORD *)(v24[0] + 8LL) )
  {
    if ( *(_BYTE *)(v24[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v24[0]);
  }
  v23 = *(_QWORD **)(v14 + 1472);
  if ( v23 )
    *(_QWORD *)(v14 + 1472) = *v23;
}
