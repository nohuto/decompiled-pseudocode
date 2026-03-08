/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x1402FD3F8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  _WORD v3[36]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v3, -1073741637, 0, 0LL);
}
