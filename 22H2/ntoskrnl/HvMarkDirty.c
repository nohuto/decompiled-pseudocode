/*
 * XREFs of HvMarkDirty @ 0x14087BD50
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 * Callees:
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, unsigned int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
