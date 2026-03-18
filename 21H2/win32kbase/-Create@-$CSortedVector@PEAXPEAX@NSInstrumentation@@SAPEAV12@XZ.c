/*
 * XREFs of ?Create@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0179F20
 * Callers:
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C017A254 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<void *,void *>::Create()
{
  _QWORD *Pool2; // rbx
  _QWORD *result; // rax
  __int64 v2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 56LL);
  if ( !Pool2 )
    return 0LL;
  v2 = ExAllocatePool2(262LL, 0x2000LL);
  if ( !v2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  Pool2[5] = 0LL;
  Pool2[6] = v2;
  result = Pool2;
  Pool2[4] = 512LL;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_DWORD *)Pool2 + 7) = 0;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  return result;
}
