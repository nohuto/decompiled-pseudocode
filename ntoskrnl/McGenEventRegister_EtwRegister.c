/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1403895F8
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14036D0F0 (CcInitializeVolumeCacheMap.c)
 *     CarEtwRegister @ 0x1405D05C8 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PnpDiagInitialize @ 0x140B5A9D4 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
