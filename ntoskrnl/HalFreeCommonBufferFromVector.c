/*
 * XREFs of HalFreeCommonBufferFromVector @ 0x14050CB20
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalFreeCommonBufferFromVector(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 24);
  if ( a3 >= v3 )
    KeBugCheckEx(0x1DCu, 3uLL, v3, a3, 0LL);
  v4 = *(_QWORD *)(a2 + 64);
  result = 2LL * a3;
  if ( !*(_QWORD *)(v4 + 16LL * a3) )
    KeBugCheckEx(0x1DCu, 4uLL, a3, 0LL, 0LL);
  *(_QWORD *)(v4 + 16LL * a3) = 0LL;
  return result;
}
