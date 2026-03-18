/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1C00176F8
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C000DFA0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C000E620 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0016F40 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoResetPdoPort @ 0x1C0031320 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003BD38 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003F534 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0057150 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v7 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 5056));
  v8 = *(_DWORD *)(v7 + 4172);
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v8;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *(unsigned int *)(v7 + 4172);
  *(_QWORD *)(v7 + 1344) = a2;
  return result;
}
