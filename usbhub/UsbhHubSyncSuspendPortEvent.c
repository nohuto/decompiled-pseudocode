/*
 * XREFs of UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000F290 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0001380 (UsbhUnlatchPdo.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhSuspendPort @ 0x1C0018E8C (UsbhSuspendPort.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     Usbh_PcLogEntry @ 0x1C0036580 (Usbh_PcLogEntry.c)
 *     UsbhGetPortStatusBits @ 0x1C00386E0 (UsbhGetPortStatusBits.c)
 */

__int64 __fastcall UsbhHubSyncSuspendPortEvent(__int64 a1, __int64 a2, __int64 a3)
{
  char PortStatusBits; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int16 v9; // bx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+8Ch] [rbp+14h]
  int v18; // [rsp+90h] [rbp+18h] BYREF

  v17 = HIDWORD(a2);
  PortStatusBits = 0;
  v16 = 0;
  FdoExt(a1);
  Log(a1, 512, 1885697579, a3, *(unsigned __int16 *)(a3 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a3 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x57u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v15,
      0LL);
  }
  v8 = *(_DWORD *)(a3 + 400);
  if ( (UsbhQueryPortState(a1, *(_WORD *)(a3 + 4), (__int64)&v16, &v18) & 0xC0000000) != 0xC0000000 )
  {
    v9 = v16;
    if ( (v16 & 1) != 0 )
    {
      v10 = UsbhLatchPdo(a1, *(_WORD *)(a3 + 4), 0LL, 0x7350444Fu);
      v13 = v10;
      if ( v10 )
        PortStatusBits = UsbhGetPortStatusBits(v12, v11, &v16, v10);
      *(_WORD *)(a3 + 420) = v9;
      Usbh_PcLogEntry(a1, a3, v13, 0x10000000, 0, v9, PortStatusBits, 0);
      if ( v13 )
        UsbhUnlatchPdo(a1, v13, 0LL, 0x7350444Fu);
      if ( (UsbhSuspendPort(a1, *(_WORD *)(a3 + 4)) & 0xC0000000) != 0xC0000000 )
        return 5;
    }
  }
  return v8;
}
