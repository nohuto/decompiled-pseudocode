__int64 IcInitGlobalState()
{
  qword_1C006E5D8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
