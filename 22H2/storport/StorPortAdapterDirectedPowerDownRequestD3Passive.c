/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C0040700
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C00404D4 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3Passive(
        PDEVICE_OBJECT DeviceObject,
        volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1452, 0);
  StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}
