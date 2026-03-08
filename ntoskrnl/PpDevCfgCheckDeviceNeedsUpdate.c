/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x14095F918
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiDevCfgFreeDeviceContext @ 0x14078AD4C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x140876144 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140959960 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, void *a2, unsigned int *a3)
{
  int inited; // ebx
  __int64 v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
