/*
 * XREFs of ACPIThermalCancelRequest @ 0x1C003FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C00433B0 (WPP_RECORDER_SF_qqssdddd.c)
 */

void __fastcall ACPIThermalCancelRequest(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // r8
  union _LARGE_INTEGER v7; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS v8; // [rsp+78h] [rbp-30h] BYREF

  v8 = 0LL;
  v7.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v7, &v8);
  if ( ACPIInternalGetDeviceExtension(BugCheckParameter3) )
    ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v8.Minute, v8.Hour, 10);
  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, (void **)Blink->Flink != &Irp->Tail.CompletionKey + 6) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}
