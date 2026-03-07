__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C13BE8;
  qword_140C13BF0 = (__int64)&qword_140C13BE8;
  qword_140C13BE8 = (__int64)&qword_140C13BE8;
  return result;
}
