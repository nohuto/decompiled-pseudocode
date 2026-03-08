/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140813524
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C13BE8;
  qword_140C13BF0 = (__int64)&qword_140C13BE8;
  qword_140C13BE8 = (__int64)&qword_140C13BE8;
  return result;
}
