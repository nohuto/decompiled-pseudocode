_QWORD *CmpInitializeNameCache()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = (_QWORD *)ExAllocatePool2(256LL, 0x8000LL, 1631800643LL);
  CmpNameCacheTable = result;
  if ( !result )
    KeBugCheckEx(0x67u, 3uLL, 2uLL, 0LL, 0LL);
  v1 = 2048LL;
  do
  {
    *result = 0LL;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
