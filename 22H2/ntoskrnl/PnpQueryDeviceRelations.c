/*
 * XREFs of PnpQueryDeviceRelations @ 0x140795430
 * Callers:
 *     PipEnumerateDevice @ 0x14079528C (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB41C (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x14084EC7C (PiQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x14086F044 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1403225B8 (PnpSendIrp.c)
 *     memset @ 0x140435400 (memset.c)
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
