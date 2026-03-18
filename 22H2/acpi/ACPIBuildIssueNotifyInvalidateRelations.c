/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelations @ 0x1C000D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPendingInvalidate @ 0x1C00145A4 (ACPIPendingInvalidate.c)
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelations(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  while ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( (v3 & 8) == 0 )
    {
      if ( (v3 & 0x200) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFBFFFFFFFFFFuLL);
        if ( !(unsigned __int8)ACPIPendingInvalidate(a2) )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a2 + 784), BusRelations);
      }
      break;
    }
    a2 = *(_QWORD *)(a2 + 792);
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
