/*
 * XREFs of CmpInitializeNameCache @ 0x14081347C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

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
