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
