/*
 * XREFs of UsbhPortCycle @ 0x1C004D4D0
 * Callers:
 *     UsbhReset2CycleDevice @ 0x1C004E400 (UsbhReset2CycleDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhPortCycle(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-20h]

  v6 = PdoExt(a3);
  v7 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v10);
  }
  Log(a1, 1024, 1883461955, a2, a3);
  if ( *((_BYTE *)v6 + 2740) )
  {
    if ( v7[702] == 2 )
    {
      v8 = *((_QWORD *)v6 + 349);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = 0;
        IofCompleteRequest(*((PIRP *)v6 + 349), 0);
      }
    }
  }
  else
  {
    v6[355] |= 0x20000u;
    UsbhPortDisconnect(a1, a2, a3);
    UsbhSignalResumeEvent(a1, a2);
    UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 0);
  }
  return 0LL;
}
