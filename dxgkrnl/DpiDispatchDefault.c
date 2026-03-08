/*
 * XREFs of DpiDispatchDefault @ 0x1C005DFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiDispatchDefault(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v2 + 20) - 2) <= 1 && *(_BYTE *)(v2 + 57) )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  }
  else
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
      PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
    return -1073741808;
  }
}
