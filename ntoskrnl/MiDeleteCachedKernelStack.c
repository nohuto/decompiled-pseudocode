/*
 * XREFs of MiDeleteCachedKernelStack @ 0x140236DFC
 * Callers:
 *     MiAdjustCachedStacks @ 0x1402364D4 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x140236C6C (MiPruneCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x1406423A0 (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteCachedKernelStack(__int64 a1)
{
  ULONG_PTR v1; // r9
  ULONG_PTR v2; // rcx
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 - 16);
  v2 = a1 - 4080;
  if ( v1 != (qword_140C69550 ^ v2) )
    KeBugCheckEx(0x1Au, 0x3472uLL, v2, v1, qword_140C69550 ^ v2);
  v3 = 8LL;
  if ( *(_DWORD *)(v2 + 4088) != 2 )
    v3 = 0LL;
  return MiDeleteKernelStack(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v3);
}
