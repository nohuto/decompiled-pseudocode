/*
 * XREFs of HUBHSM_ReadingUsb4DromStatus @ 0x1C0009FD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     FWUPDATE_GetMMIO @ 0x1C0040C24 (FWUPDATE_GetMMIO.c)
 */

__int64 __fastcall HUBHSM_ReadingUsb4DromStatus(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (int)FWUPDATE_GetMMIO(v1, 17LL, v1 + 2704) < 0 )
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  return 1000LL;
}
