/*
 * XREFs of HalpAllocateEarlyPages @ 0x140503580
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 */

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
