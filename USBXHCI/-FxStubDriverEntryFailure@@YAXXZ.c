/*
 * XREFs of ?FxStubDriverEntryFailure@@YAXXZ @ 0x1C0020250
 * Callers:
 *     FxDriverEntryWorker @ 0x1C001CDB4 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverEntryFailure(void)
{
  GUID *v0; // [rsp+20h] [rbp-28h] BYREF
  int v1; // [rsp+28h] [rbp-20h]
  _QWORD v2[3]; // [rsp+2Ch] [rbp-1Ch] BYREF

  if ( off_1C0064788 != &__KMDF_CLASS_BIND_START )
  {
    memset(v2, 0, 12);
    v0 = &GUID_WDF_LOADER_INTERFACE_DRIVER_ENTRY_FAILURE;
    v1 = 24;
    if ( (int)WdfLdrQueryInterface(&v0) >= 0 )
      (*(void (__fastcall **)(void *, PWDF_DRIVER_GLOBALS))((char *)v2 + 4))(&WdfBindInfo, WdfDriverGlobals);
  }
}
