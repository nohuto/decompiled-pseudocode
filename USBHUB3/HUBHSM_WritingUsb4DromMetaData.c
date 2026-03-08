/*
 * XREFs of HUBHSM_WritingUsb4DromMetaData @ 0x1C000A380
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     FWUPDATE_SetMMIO @ 0x1C0040B50 (FWUPDATE_SetMMIO.c)
 */

__int64 __fastcall HUBHSM_WritingUsb4DromMetaData(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // ecx

  v1 = *(_DWORD **)(a1 + 960);
  v2 = v1[670] - v1[674];
  if ( v2 > 0x10 )
    LOBYTE(v2) = 16;
  v1[677] = 4 * (v1[674] & 0x1FFF | ((v2 & 0x1F) << 13));
  if ( (int)FWUPDATE_SetMMIO(v1) < 0 )
    HUBSM_AddEvent(v1 + 316, 2004LL);
  return 1000LL;
}
