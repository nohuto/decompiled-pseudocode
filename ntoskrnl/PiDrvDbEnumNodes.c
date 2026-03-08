/*
 * XREFs of PiDrvDbEnumNodes @ 0x14096CF60
 * Callers:
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 * Callees:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095B6D8 (PiDevCfgInitDriverDatabaseCallback.c)
 */

__int64 PiDrvDbEnumNodes()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)PiDrvDbNodeList; i != &PiDrvDbNodeList && PiDevCfgInitDriverDatabaseCallback(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
