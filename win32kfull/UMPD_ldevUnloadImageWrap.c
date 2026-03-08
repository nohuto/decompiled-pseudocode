/*
 * XREFs of UMPD_ldevUnloadImageWrap @ 0x1C02C2E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UMPD_ldevUnloadImageWrap(void *a1)
{
  if ( a1 )
    EngFreeMem(a1);
}
