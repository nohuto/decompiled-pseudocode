__int64 LinkNodeInitGlobalState()
{
  qword_1C006E6B8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
