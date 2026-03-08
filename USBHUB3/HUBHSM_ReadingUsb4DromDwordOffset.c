/*
 * XREFs of HUBHSM_ReadingUsb4DromDwordOffset @ 0x1C000A320
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     FWUPDATE_GetMMIO @ 0x1C0040C24 (FWUPDATE_GetMMIO.c)
 */

__int64 __fastcall HUBHSM_ReadingUsb4DromDwordOffset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (int)FWUPDATE_GetMMIO(
              v1,
              *(_WORD *)(v1 + 2700) & 0xF,
              *(_QWORD *)(v1 + 2688) + 4LL * *(unsigned int *)(v1 + 2700)) < 0 )
    HUBSM_AddEvent(v1 + 1264, 2004LL);
  return 1000LL;
}
