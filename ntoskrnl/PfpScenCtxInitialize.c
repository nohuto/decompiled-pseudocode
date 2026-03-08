/*
 * XREFs of PfpScenCtxInitialize @ 0x140845AD4
 * Callers:
 *     PfInitializeSuperfetch @ 0x140B619EC (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
