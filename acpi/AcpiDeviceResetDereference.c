/*
 * XREFs of AcpiDeviceResetDereference @ 0x1C0023770
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x1C0023530 (AcpiDeviceResetCompleteResetWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

void __fastcall AcpiDeviceResetDereference(_QWORD *P)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(_QWORD); // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    ACPIInitDereferenceDeviceExtensionUnlocked(P[1]);
    v2 = P[10];
    if ( v2 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(v2 + 24);
      if ( v3 )
        v3(*(_QWORD *)(v2 + 8));
    }
    ExFreePoolWithTag(P, 0);
  }
}
