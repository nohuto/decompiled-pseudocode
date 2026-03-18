/*
 * XREFs of IommuDeleteAtsDevice @ 0x140521F60
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpIommuDeleteDevice @ 0x1409339FC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDeleteAtsDevice(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( HalpHvIommu )
  {
    ((void (__fastcall *)(__int64, __int64))qword_140C626C8)(v2, 17LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(v2 + 384))(*(_QWORD *)(v2 + 16), *(_QWORD *)(a1 + 48));
    --*(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = 0;
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 64));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 64));
  }
  return HalpIommuDeleteDevice(a1);
}
