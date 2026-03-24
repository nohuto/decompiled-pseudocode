/*
 * XREFs of PiClearDeviceObjectList @ 0x14074A718
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x14074A660 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x14074A6C8 (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x1408B2920 (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
