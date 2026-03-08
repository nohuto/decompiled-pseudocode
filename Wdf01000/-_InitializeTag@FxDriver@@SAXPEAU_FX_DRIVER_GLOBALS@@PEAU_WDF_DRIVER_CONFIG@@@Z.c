/*
 * XREFs of ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C0040578
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 */

void __fastcall FxDriver::_InitializeTag(_FX_DRIVER_GLOBALS *FxDriverGlobals, _WDF_DRIVER_CONFIG *a2)
{
  char *DriverName; // rdx
  size_t v4; // r8

  DriverName = FxDriverGlobals->Public.DriverName;
  v4 = -1LL;
  do
    ++v4;
  while ( DriverName[v4] );
  if ( v4 >= 3 )
  {
    if ( ((*DriverName - 87) & 0xDF) != 0
      || ((FxDriverGlobals->Public.DriverName[1] - 68) & 0xDF) != 0
      || ((FxDriverGlobals->Public.DriverName[2] - 70) & 0xDF) != 0 )
    {
      goto LABEL_10;
    }
    v4 -= 3LL;
    DriverName = &FxDriverGlobals->Public.DriverName[3];
  }
  if ( v4 <= 2 )
  {
    FxDriverGlobals->Tag = 1917089862;
    return;
  }
LABEL_10:
  if ( v4 > 4 )
    v4 = 4LL;
  memmove(&FxDriverGlobals->Tag, DriverName, v4);
  FxDriverGlobals->Public.DriverTag = FxDriverGlobals->Tag;
}
