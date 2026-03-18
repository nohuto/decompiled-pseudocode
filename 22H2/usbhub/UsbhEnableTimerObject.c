/*
 * XREFs of UsbhEnableTimerObject @ 0x1C0011C40
 * Callers:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FE00 (UsbhSshSetPortsBusyState.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhSshExitSx @ 0x1C0015B1C (UsbhSshExitSx.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00302EC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00303D4 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00432A0 (UsbhDriverNotFoundWorker.c)
 *     UsbhHubStart @ 0x1C0043F60 (UsbhHubStart.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0055B40 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0059C30 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C005A2E0 (UsbhSshEnabled.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwWrite @ 0x1C00125E0 (UsbhEtwWrite.c)
 *     UsbhReferenceListRemove @ 0x1C001B88C (UsbhReferenceListRemove.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v8; // r12
  __int64 v10; // r15
  KIRQL v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  KIRQL v30; // si
  __int64 v31; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  ULONG TimeIncrement; // eax
  KIRQL v36; // dl
  KSPIN_LOCK *v37; // rcx
  int v38; // r11d
  KIRQL v39; // [rsp+6Ch] [rbp-4Dh]

  v6 = a4;
  v8 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    goto LABEL_51;
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    v11 = v39;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 827616869;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v8;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 829451877;
          *(_QWORD *)(v15 + 24) = a5;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v6;
        }
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 846229093;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a6;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
    }
    if ( dword_1C006C5F0 )
    {
      v18 = *(_DWORD **)(a1 + 64);
      if ( !v18 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *v18 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
      v11 = v39;
    }
    *(_QWORD *)(a2 + 40) = a5;
    v19 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 28) = a6;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v38;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 844394085;
          *(_QWORD *)(v21 + 24) = v10 + 3744;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v22 = *(_QWORD **)(v10 + 3752);
      v23 = (_QWORD *)(a2 + 56);
      if ( *v22 != v10 + 3744 )
        goto LABEL_50;
      v23[1] = v22;
      *v23 = v10 + 3744;
      *v22 = v23;
      *(_QWORD *)(v10 + 3752) = v23;
      v24 = *(int *)(v10 + 3736);
      v25 = *(_DWORD *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1414819172;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = a1;
          *(_QWORD *)(v27 + 24) = v24;
          v25 = *(_DWORD *)(v10 + 3736);
        }
      }
      if ( v25 == 2 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 809382500;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = a1;
            *(_QWORD *)(v29 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v11);
        v30 = KeAcquireSpinLockRaiseToDpc(&HubG);
        qword_1C006C500 = (__int64)&dword_1C006C508;
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          if ( *(_DWORD *)v31 != 541218120 )
            UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
          if ( *(_BYTE *)(v31 + 2480) )
          {
            PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x30uLL, 0x42554855u);
            if ( !PoolWithTag )
            {
              ++*(_DWORD *)(v31 + 2528);
LABEL_36:
              qword_1C006C500 = 0LL;
              KeReleaseSpinLock(&HubG, v30);
              TimeIncrement = KeQueryTimeIncrement();
              if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
                UsbhReferenceListRemove(a1, v10 + 3848);
              return;
            }
            *PoolWithTag = 1397515890LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 1380799588LL;
            PoolWithTag[2] = v10 + 3848;
            PoolWithTag[1] = a1;
            v33 = PoolWithTag + 3;
            v34 = *(_QWORD **)(v31 + 2520);
            if ( *v34 == v31 + 2512 )
            {
              *v33 = v31 + 2512;
              v33[1] = v34;
              *v34 = v33;
              *(_QWORD *)(v31 + 2520) = v33;
              goto LABEL_36;
            }
LABEL_50:
            __fastfail(3u);
          }
          v37 = &HubG;
          qword_1C006C500 = 0LL;
          v36 = v30;
LABEL_42:
          KeReleaseSpinLock(v37, v36);
          return;
        }
LABEL_51:
        UsbhTrapFatal_Dbg(a1, 0LL);
      }
    }
    v36 = v11;
    v37 = (KSPIN_LOCK *)(v10 + 3728);
    goto LABEL_42;
  }
}
