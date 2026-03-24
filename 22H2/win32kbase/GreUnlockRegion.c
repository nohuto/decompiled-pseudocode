/*
 * XREFs of GreUnlockRegion @ 0x1C00CBAB0
 * Callers:
 *     <none>
 * Callees:
 *     HmgUnlock @ 0x1C00A2804 (HmgUnlock.c)
 */

__int64 __fastcall GreUnlockRegion(unsigned int a1)
{
  return HmgUnlock(a1);
}
