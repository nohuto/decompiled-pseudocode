/*
 * XREFs of IovAllocateWorkItem @ 0x140ABDF20
 * Callers:
 *     <none>
 * Callees:
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 */

__int64 __fastcall IovAllocateWorkItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+48h] [rbp-10h]
  int v6; // [rsp+4Ch] [rbp-Ch]

  v6 = 0;
  v4 = 1LL;
  v5 = 32;
  result = VfHandlePoolAlloc(NonPagedPool, LowPoolPriority, (__int64)&v4, 1, a2);
  if ( result )
  {
    *(_QWORD *)(result + 56) = 0LL;
    *(_QWORD *)(result + 40) = a1;
    *(_DWORD *)(result + 64) = 1;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 16) = IopProcessWorkItem;
    *(_QWORD *)(result + 24) = result;
  }
  return result;
}
