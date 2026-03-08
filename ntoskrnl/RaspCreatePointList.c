/*
 * XREFs of RaspCreatePointList @ 0x1403831CC
 * Callers:
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RaspCreatePointList(__int64 a1, _QWORD *a2)
{
  char *Memory; // rbx
  unsigned int i; // edx
  __int64 v6; // r9
  __int64 v7; // rax

  Memory = (char *)RaspAllocateMemory(17LL * *(unsigned __int16 *)(a1 + 24));
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, 17LL * *(unsigned __int16 *)(a1 + 24));
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 24); ++i )
  {
    v6 = 17LL * i;
    *(_DWORD *)&Memory[v6] = *(_DWORD *)(*(_QWORD *)(a1 + 50) + 4LL * i);
    *(_DWORD *)&Memory[v6 + 4] = *(_DWORD *)(*(_QWORD *)(a1 + 58) + 4LL * i);
    v7 = *(_QWORD *)(a1 + 42);
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + i) & 1) != 0 )
        Memory[v6 + 16] = 1;
    }
  }
  *a2 = Memory;
  return 0LL;
}
