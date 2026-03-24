/*
 * XREFs of DxgkNotifyMonitorDimming @ 0x1C0217F80
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D19A8 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall DxgkNotifyMonitorDimming(__int64 a1, unsigned __int8 a2)
{
  struct _DEVICE_OBJECT *v2; // rcx

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 216);
  if ( v2 )
    return DpiBrightnessNotifyMonitorDimming(v2, 0xFFFFFFFF, a2);
  else
    return 3221226166LL;
}
