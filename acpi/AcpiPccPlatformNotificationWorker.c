/*
 * XREFs of AcpiPccPlatformNotificationWorker @ 0x1C0034220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiPccPlatformNotificationWorker(
        PVOID IoObject,
        void (__fastcall **Context)(_QWORD),
        PIO_WORKITEM IoWorkItem)
{
  IoFreeWorkItem(IoWorkItem);
  Context[33](Context[34]);
}
