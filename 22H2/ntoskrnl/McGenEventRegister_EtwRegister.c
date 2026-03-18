/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x140375468
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14032EE94 (CcInitializeVolumeCacheMap.c)
 *     CarEtwRegister @ 0x1405D2A78 (CarEtwRegister.c)
 *     PnpDiagInitialize @ 0x140B4300C (PnpDiagInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
