/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C00205D0
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C020CF44 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02E1A94 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
