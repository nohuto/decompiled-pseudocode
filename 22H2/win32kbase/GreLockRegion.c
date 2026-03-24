/*
 * XREFs of GreLockRegion @ 0x1C00CBA80
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C002EE50 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLock(a1, 4) != 0;
}
