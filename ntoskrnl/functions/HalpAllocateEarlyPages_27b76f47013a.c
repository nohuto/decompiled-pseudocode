unsigned __int64 __fastcall HalpAllocateEarlyPages(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 result; // rax

  v7 = HalpAllocPhysicalMemory(a1, 0LL, a2, 0LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  result = HalpMap(v7, a2, 1u, 0LL, a4);
  if ( !result )
    return 0LL;
  *a3 = v8;
  return result;
}
