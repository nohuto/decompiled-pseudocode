/*
 * XREFs of VmPreallocateForRangeCreate @ 0x1409D9C10
 * Callers:
 *     <none>
 * Callees:
 *     VmpAllocateMemoryRanges @ 0x1409DA1C4 (VmpAllocateMemoryRanges.c)
 *     VmpProcessContextSetup @ 0x1409DA930 (VmpProcessContextSetup.c)
 */

__int64 __fastcall VmPreallocateForRangeCreate(__int64 *a1, __int64 a2)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 MemoryRanges; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process[2].Affinity.StaticBitmap[5];
  if ( !v4 )
  {
    result = VmpProcessContextSetup(a2);
    if ( (int)result < 0 )
      return result;
    v4 = Process[2].Affinity.StaticBitmap[5];
  }
  MemoryRanges = VmpAllocateMemoryRanges(1LL);
  if ( !MemoryRanges )
    return 3221225626LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 80));
  *a1 = v4 ^ MemoryRanges;
  return 0LL;
}
