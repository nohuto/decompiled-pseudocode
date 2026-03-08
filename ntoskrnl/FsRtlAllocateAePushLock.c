/*
 * XREFs of FsRtlAllocateAePushLock @ 0x14053AB30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlAllocateAePushLock(POOL_TYPE a1, ULONG a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = a1 & 1;
  result = ExAllocatePoolWithTag(a1, 0x10uLL, a2);
  if ( result )
  {
    result[1] = 0LL;
    if ( v2 )
      *((_DWORD *)result + 2) |= 4u;
    *result = 0LL;
  }
  return result;
}
