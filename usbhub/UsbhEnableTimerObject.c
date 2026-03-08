/*
 * XREFs of UsbhEnableTimerObject @ 0x1C0008770
 * Callers:
 *     UsbhSshExitSx @ 0x1C0003CCC (UsbhSshExitSx.c)
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000ABD0 (UsbhSshSetPortsBusyState.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C000B390 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C002F8E0 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C002F9D0 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00428B0 (UsbhDriverNotFoundWorker.c)
 *     UsbhHubStart @ 0x1C0043560 (UsbhHubStart.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0054DA0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0058E20 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C00594D4 (UsbhSshEnabled.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C00018CC (UsbhReferenceListRemove.c)
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 v9; // rsi
  KIRQL v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  KIRQL v28; // r15
  __int64 v29; // rdi
  unsigned int *p_SortKey; // rcx
  KIRQL v31; // dl
  __int64 Pool2; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  ULONG TimeIncrement; // eax
  int v37; // r10d

  v6 = a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 )
LABEL_47:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v9);
  if ( !a2 )
    return;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 3728));
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 827616869;
      *(_QWORD *)(v12 + 24) = a3;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = a2;
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 829451877;
        *(_QWORD *)(v14 + 24) = a5;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v6;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v16 = 846229093;
          *(_QWORD *)(v16 + 16) = a6;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 24) = 0LL;
        }
      }
    }
  }
  if ( dword_1C006B690 )
  {
    v17 = *(_DWORD **)(a1 + 64);
    if ( !v17 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v17 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v17);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
  }
  *(_DWORD *)(a2 + 28) = a6;
  *(_QWORD *)(a2 + 40) = a5;
  *(_DWORD *)(a2 + 16) = a3;
  *(_DWORD *)(a2 + 12) = a3;
  v18 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 24) = v6;
  if ( v18 )
  {
    if ( v18 == 2 )
    {
      Log(a1, 0x2000, 1701729331, a2, v9 + 3744);
      *(_DWORD *)(a2 + 4) = v37;
    }
    goto LABEL_46;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 844394085;
      *(_QWORD *)(v20 + 24) = v9 + 3744;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = a2;
    }
  }
  *(_DWORD *)(a2 + 4) = 1;
  v21 = *(_QWORD **)(v9 + 3752);
  v22 = (_QWORD *)(a2 + 56);
  if ( *v21 != v9 + 3744 )
    __fastfail(3u);
  *v22 = v9 + 3744;
  v22[1] = v21;
  *v21 = v22;
  *(_QWORD *)(v9 + 3752) = v22;
  v23 = *(int *)(v9 + 3736);
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 64);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
      *(_DWORD *)v25 = 1414819172;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_QWORD *)(v25 + 16) = a1;
      *(_QWORD *)(v25 + 24) = v23;
    }
  }
  if ( *(_DWORD *)(v9 + 3736) != 2 )
  {
LABEL_46:
    v31 = v10;
    p_SortKey = (unsigned int *)(v9 + 3728);
    goto LABEL_35;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 64);
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
      *(_DWORD *)v27 = 809382500;
      *(_QWORD *)(v27 + 8) = 0LL;
      *(_QWORD *)(v27 + 16) = a1;
      *(_QWORD *)(v27 + 24) = 2LL;
    }
  }
  *(_DWORD *)(v9 + 3736) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 3728), v10);
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v29 = *(_QWORD *)(a1 + 64);
  if ( !v29 )
    goto LABEL_47;
  if ( *(_DWORD *)v29 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( !*(_BYTE *)(v29 + 2480) )
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    p_SortKey = &WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    v31 = v28;
LABEL_35:
    KeReleaseSpinLock((PKSPIN_LOCK)p_SortKey, v31);
    return;
  }
  Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 1397515890;
    v33 = v29 + 2512;
    *(_DWORD *)(Pool2 + 40) = 1380799588;
    *(_QWORD *)(Pool2 + 16) = v9 + 3848;
    *(_QWORD *)(Pool2 + 8) = a1;
    v34 = (_QWORD *)(Pool2 + 24);
    v35 = *(_QWORD **)(v33 + 8);
    if ( *v35 != v33 )
      __fastfail(3u);
    *v34 = v33;
    v34[1] = v35;
    *v35 = v34;
    *(_QWORD *)(v33 + 8) = v34;
  }
  else
  {
    ++*(_DWORD *)(v29 + 2528);
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v28);
  TimeIncrement = KeQueryTimeIncrement();
  if ( KeSetTimer((PKTIMER)(v9 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v9 + 3784)) )
    UsbhReferenceListRemove(a1, v9 + 3848);
}
