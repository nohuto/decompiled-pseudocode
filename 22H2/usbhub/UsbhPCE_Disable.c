/*
 * XREFs of UsbhPCE_Disable @ 0x1C0034EE0
 * Callers:
 *     UsbhQueueDriverOvercurrent @ 0x1C0030970 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0030AF0 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00369F0 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhCancelEnumeration @ 0x1C00023E0 (UsbhCancelEnumeration.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002F39C (WPP_RECORDER_SF_dq.c)
 *     UsbhBusUnlatchPdo @ 0x1C004D510 (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhPCE_Disable(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ebp
  unsigned int v11; // edx
  int v12; // r9d
  int v13; // [rsp+28h] [rbp-20h]

  v4 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = v4;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x42u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13,
      a3);
  }
  Log(a1, 512, 1346711602, 0LL, v4);
  result = UsbhGetPortData(a1, v4);
  v9 = result;
  if ( result )
  {
    UsbhDispatch_PortChangeQueueEventEx(a1, result, 2, a3, 0LL, 0, 0LL, 0LL);
    result = UsbhLatchPdo(a1, *(_WORD *)(v9 + 4), 0LL, 0x7050444Fu);
    v10 = result;
    if ( result )
    {
      v11 = *(_DWORD *)(v9 + 400);
      *(_QWORD *)(v9 + 376) = v9 + 24;
      *(_DWORD *)(v9 + 416) = 1;
      result = UsbhCancelEnumeration(a1, v11, v9, result);
      *(_QWORD *)(v9 + 376) = 0LL;
      if ( *(_DWORD *)(v9 + 416) )
        return UsbhBusUnlatchPdo(a1, v10, v9, v12, 0LL);
      else
        *(_DWORD *)(v9 + 400) = 0;
    }
  }
  return result;
}
