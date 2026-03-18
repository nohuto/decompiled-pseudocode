/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140865D60
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C13D28;
  qword_140C13D30 = (__int64)&qword_140C13D28;
  qword_140C13D28 = (__int64)&qword_140C13D28;
  return result;
}
