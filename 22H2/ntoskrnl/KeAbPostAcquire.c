/*
 * XREFs of KeAbPostAcquire @ 0x140372140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeAbPostAcquire(__int64 a1)
{
  *(_BYTE *)(a1 + 18) = 1;
}
