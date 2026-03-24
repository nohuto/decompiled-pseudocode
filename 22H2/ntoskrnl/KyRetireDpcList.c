/*
 * XREFs of KyRetireDpcList @ 0x140405E20
 * Callers:
 *     KiDispatchInterrupt @ 0x140405BD0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x140246020 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140405C10LL);
}
