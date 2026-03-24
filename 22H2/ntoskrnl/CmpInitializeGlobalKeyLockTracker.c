/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407A5A14
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C47EC8;
  qword_140C47ED0 = (__int64)&qword_140C47EC8;
  qword_140C47EC8 = (__int64)&qword_140C47EC8;
  return result;
}
