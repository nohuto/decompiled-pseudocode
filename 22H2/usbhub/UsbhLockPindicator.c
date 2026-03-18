/*
 * XREFs of UsbhLockPindicator @ 0x1C002FD6C
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x1C00300BC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x1C0030188 (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C0030220 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00302EC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00303D4 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

__int64 __fastcall UsbhLockPindicator(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx

  v6 = FdoExt(*(_QWORD *)(a1 + 8));
  KeWaitForSingleObject(v6 + 1280, Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 112) = 2017742416;
  *(_DWORD *)(a1 + 116) = a3;
  v7 = ((unsigned __int8)*(_DWORD *)(a2 + 2828) + 1) & 7;
  *(_DWORD *)(a2 + 2828) = v7;
  v7 *= 32LL;
  *(_DWORD *)(v7 + a2 + 2488) = a3;
  *(_DWORD *)(v7 + a2 + 2492) = *(_DWORD *)(a2 + 2824);
  return *(unsigned int *)(a2 + 2824);
}
