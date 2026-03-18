/*
 * XREFs of UsbhSetPcqEventStatus @ 0x1C00348C0
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000CF9C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x1C000D224 (Usbh_PCE_HardwareWake_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000D6AC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0011DA0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0012D50 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00164A0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x1C001B420 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00331D8 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhSignalSuspendEvent @ 0x1C00349E0 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_Close_Action @ 0x1C0034E08 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C003502C (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C00355C8 (Usbh_PCE_SD_Resume_Action.c)
 *     UsbhiSignalResumeEvent @ 0x1C0035BCC (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0035C0C (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 */

void __fastcall UsbhSetPcqEventStatus(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r11d
  __int64 v6; // r10
  _DWORD *v7; // r8
  int v8; // r11d
  int v9; // r11d

  Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v7 = (_DWORD *)(v6 + 32 * (*(unsigned int *)(v6 + 2400) + 43LL));
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7[7] = a4;
      }
      else
      {
        v7[6] = a4;
      }
    }
    else
    {
      v7[5] = a4;
    }
  }
  else
  {
    v7[4] = a4;
  }
}
