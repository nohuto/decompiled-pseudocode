/*
 * XREFs of PnpDereferenceNotify @ 0x1406F59C0
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14028F5FC (PnpUnregisterPlugPlayNotification.c)
 *     PnpProcessDeferredRegistrations @ 0x1406895A4 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14095372C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x14096A3D0 (PipKsrNotifyDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *(PVOID **)P;
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(*((PVOID *)P + 6));
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v6 = (void *)*((_QWORD *)P + 11);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *((_QWORD *)P + 11) = 0LL;
      }
    }
    v5 = (void *)*((_QWORD *)P + 3);
    if ( v5 )
    {
      ZwClose(v5);
      *((_QWORD *)P + 3) = 0LL;
    }
    ExDeleteResourceLite(*((PERESOURCE *)P + 9));
    ExFreePoolWithTag(*((PVOID *)P + 9), 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
