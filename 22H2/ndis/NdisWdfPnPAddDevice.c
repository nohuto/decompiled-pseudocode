/*
 * XREFs of NdisWdfPnPAddDevice @ 0x1C00629A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031780 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void **a3, void *a4)
{
  return ndisPnPAddDevice(a1, a2, a4, a3);
}
