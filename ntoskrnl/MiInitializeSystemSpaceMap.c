/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140B3A390
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     MiInitializePteInfo @ 0x140B3B548 (MiInitializePteInfo.c)
 */

PVOID MiInitializeSystemSpaceMap()
{
  PVOID result; // rax
  void *v1; // rbx
  unsigned int v2; // edi

  result = MiAllocatePool(64, 144LL * (unsigned int)(unsigned __int16)KeNumberNodes, 0x20206D4Du);
  v1 = result;
  if ( result )
  {
    qword_140C681C0 = 0LL;
    P = 0LL;
    v2 = MiInitializePteInfo(
           (unsigned int)&unk_140C68030,
           12,
           0,
           5,
           qword_140C6A238,
           0x8000000000LL,
           16,
           (__int64)result);
    if ( !v2 )
      ExFreePoolWithTag(v1, 0);
    return (PVOID)v2;
  }
  return result;
}
