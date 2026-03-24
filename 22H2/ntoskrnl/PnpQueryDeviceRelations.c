/*
 * XREFs of PnpQueryDeviceRelations @ 0x1407433D8
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x1407432C8 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x140748844 (PiQueryPowerRelations.c)
 *     PnpProcessRelation @ 0x14074950C (PnpProcessRelation.c)
 *     PiQueryDeviceRelations @ 0x1408B40CC (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140361498 (PnpSendIrp.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}
