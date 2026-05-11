/*
 * XREFs of USBHwSubmitUrbToUsbdSynch @ 0x1C002C9E0
 * Callers:
 *     USBDeviceStop @ 0x1C002C5B0 (USBDeviceStop.c)
 *     USBHwGetSetProperty @ 0x1C002CB68 (USBHwGetSetProperty.c)
 *     USBHwGetDescriptor @ 0x1C002CEA8 (USBHwGetDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C002D0F0 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D75C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DC7C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002E090 (USBHwSelectStreamingMIDIInterface.c)
 *     USBHwAbortOrResetPipe @ 0x1C002E634 (USBHwAbortOrResetPipe.c)
 * Callees:
 *     USBD_AssignUrbToIoStackLocation @ 0x1C0010B64 (USBD_AssignUrbToIoStackLocation.c)
 */

__int64 __fastcall USBHwSubmitUrbToUsbdSynch(PDEVICE_OBJECT DeviceObject, PURB Urb, USBD_HANDLE USBDHandle)
{
  PIRP v6; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rdx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp+38h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x220003u, DeviceObject, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v10 = v7->Tail.Overlay.CurrentStackLocation - 1;
  if ( USBDHandle )
    USBD_AssignUrbToIoStackLocation(USBDHandle, v10, Urb);
  else
    v10->Parameters.WMI.ProviderId = (ULONG_PTR)Urb;
  v11 = IofCallDriver(DeviceObject, v7);
  if ( v11 == 259 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 )
    {
      IoCancelIrp(v7);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      IoStatusBlock.Status = 258;
    }
  }
  else
  {
    IoStatusBlock.Status = v11;
  }
  IofCompleteRequest(v7, 0);
  return (unsigned int)IoStatusBlock.Status;
}
