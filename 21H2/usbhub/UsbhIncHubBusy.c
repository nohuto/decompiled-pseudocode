/*
 * XREFs of UsbhIncHubBusy @ 0x1C0011BC0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0002DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhAcquireEnumBusLock @ 0x1C000CBC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshResumeUpstream @ 0x1C000D344 (UsbhSshResumeUpstream.c)
 *     UsbhSshPortsBusy @ 0x1C000FA7C (UsbhSshPortsBusy.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshEnterSx @ 0x1C001D88C (UsbhSshEnterSx.c)
 *     UsbhSshBusBusy @ 0x1C0030D38 (UsbhSshBusBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C00380C0 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C003C838 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E67C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C003FEF8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C00404C8 (UsbhIoctlResetStuckHub.c)
 *     UsbhPortConnect @ 0x1C004C820 (UsbhPortConnect.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C004E2D8 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0054FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshDisabled @ 0x1C00589F0 (UsbhSshDisabled.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rbx
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r9
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Pool2; // rax
  __int64 v17; // rdi
  _LIST_ENTRY *p_WaitListHead; // rbx
  char *v19; // rax
  char **Blink; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  v12 = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1668172104;
      *(_QWORD *)(v14 + 16) = a5;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = Signalling;
      v12 = v9[142].Header.Signalling;
    }
  }
  if ( v12 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v17 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *(_QWORD *)(Pool2 + 24) = a3;
      *(_DWORD *)(Pool2 + 32) = a4;
      v19 = (char *)(Pool2 + 8);
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v19 = p_WaitListHead;
      *((_QWORD *)v19 + 1) = Blink;
      *Blink = v19;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v19;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v17 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
      Usbh_SSH_Event(a1, 6u, a2);
    return v17;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
