/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x140368938
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  _WORD v3[36]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v3, -1073741637, 0, 0LL);
}
