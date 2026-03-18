/*
 * XREFs of UsbhDecHubBusy @ 0x1C0010740
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00018F0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0002DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0005CA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubProcessIsr @ 0x1C00083B0 (UsbhHubProcessIsr.c)
 *     UsbhSshResumeUpstream @ 0x1C000D344 (UsbhSshResumeUpstream.c)
 *     UsbhSshExitSx @ 0x1C000F9A0 (UsbhSshExitSx.c)
 *     UsbhSshPortsBusy @ 0x1C000FA7C (UsbhSshPortsBusy.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000FB0C (UsbhReleaseEnumBusLockEx.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     UsbhBusResume_Action @ 0x1C0013AB0 (UsbhBusResume_Action.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     UsbhSshEnterSx @ 0x1C001D88C (UsbhSshEnterSx.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C002F890 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusBusy @ 0x1C0030D38 (UsbhSshBusBusy.c)
 *     UsbhSshBusIdle @ 0x1C0030DDC (UsbhSshBusIdle.c)
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
 *     UsbhDeletePdo @ 0x1C00537BC (UsbhDeletePdo.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0054FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0055CA0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshDisabled @ 0x1C00589F0 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x1C0058C10 (UsbhSshEnabled.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // r8
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  volatile int Lock; // eax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  v7 = v5[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1667581000;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a3;
      *(_QWORD *)(v9 + 24) = Signalling;
      v7 = v5[142].Header.Signalling;
    }
  }
  if ( v7 )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v10 = a3[1];
      v11 = a3 + 1;
      if ( *(_QWORD **)(v10 + 8) != a3 + 1 || (v12 = (_QWORD *)a3[2], (_QWORD *)*v12 != v11) )
        __fastfail(3u);
      *v12 = v10;
      *(_QWORD *)(v10 + 8) = v12;
      a3[2] = a3 + 1;
      *v11 = v11;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
