/*
 * XREFs of PnpQueryDeviceRelations @ 0x140688584
 * Callers:
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x14084B8CC (PiQueryDeviceRelations.c)
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140202E04 (PnpSendIrp.c)
 *     memset @ 0x14042CFC0 (memset.c)
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
