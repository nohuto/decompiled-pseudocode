/*
 * XREFs of VfSuspectExcludedDriversAllocateEntry @ 0x140AD7C10
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x140B93B7C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B93D2C (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall VfSuspectExcludedDriversAllocateEntry(unsigned __int16 *a1, ULONG a2)
{
  __int64 Pool2; // rax
  __int64 v4; // rbx
  size_t v5; // r8
  const void *v6; // rdx

  Pool2 = ExAllocatePool2(64LL, a1[1] + 32LL, a2);
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = *a1;
    *(_WORD *)(Pool2 + 18) = a1[1];
    v6 = (const void *)*((_QWORD *)a1 + 1);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
    *(_WORD *)(Pool2 + 16) = v5;
    memmove((void *)(Pool2 + 32), v6, v5);
  }
  return v4;
}
