/*
 * XREFs of PnpWatchdogFirstChanceCallback @ 0x140954B70
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x14068A980 (PnpRecordBlackbox.c)
 */

char __fastcall PnpWatchdogFirstChanceCallback(__int64 a1)
{
  char result; // al

  PnpRecordBlackbox(*(_QWORD *)(a1 + 24), *(_DWORD *)(a1 + 16));
  result = PnpWatchdogEtwWrite(a1, 0);
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
