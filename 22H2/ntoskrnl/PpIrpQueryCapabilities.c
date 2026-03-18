/*
 * XREFs of PpIrpQueryCapabilities @ 0x14079BE48
 * Callers:
 *     IoGetDeviceProperty @ 0x140792EB0 (IoGetDeviceProperty.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14079BDE4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiControlGetDevicePowerData @ 0x14096D930 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(_QWORD *a1, _DWORD *a2)
{
  _QWORD v5[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, 0x48uLL);
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, 0LL);
}
