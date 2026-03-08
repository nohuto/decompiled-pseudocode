/*
 * XREFs of ?GetDisplayPortAddress@KernelDriver@@UEBAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1C0217890
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1C02178B0 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 */

__int64 __fastcall KernelDriver::GetDisplayPortAddress(KernelDriver *this, struct _DXGKARG_GETDPADDRESS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)this + 3), a2);
}
