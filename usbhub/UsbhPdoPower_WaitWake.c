/*
 * XREFs of UsbhPdoPower_WaitWake @ 0x1C0020D30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0020E30 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoPower_WaitWake(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v4; // rdi
  signed __int32 v5; // ebp
  unsigned int v6; // esi

  v4 = PdoExt(BugCheckParameter3);
  FdoExt(*((_QWORD *)v4 + 148));
  UsbhEtwLogDeviceIrpEvent((__int64)v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_DISPATCH);
  v5 = _InterlockedIncrement(v4 + 588);
  v6 = UsbhIncPdoIoCount(BugCheckParameter3, BugCheckParameter4, 2004308036LL, 0LL);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogDeviceIrpEvent((__int64)v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    if ( (v4[355] & 0x100) != 0 )
    {
      if ( !v5 )
      {
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        Log(*((_QWORD *)v4 + 148), 16, 2004306249, 0LL, (__int64)BugCheckParameter4);
        IoCsqInsertIrp((PIO_CSQ)(v4 + 570), BugCheckParameter4, 0LL);
        return 259LL;
      }
      v6 = -2147483631;
    }
    else
    {
      v6 = -1073741637;
    }
    UsbhEtwLogDeviceIrpEvent((__int64)v4, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  _InterlockedDecrement(v4 + 588);
  return v6;
}
