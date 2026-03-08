/*
 * XREFs of MiMirrorBrownPhase @ 0x140AA94BC
 * Callers:
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     PsQuitNextPartition @ 0x1405A4180 (PsQuitNextPartition.c)
 *     MiMirrorGatherBrownPages @ 0x140624848 (MiMirrorGatherBrownPages.c)
 *     MiMirrorPerformBrownWrites @ 0x1406251F8 (MiMirrorPerformBrownWrites.c)
 *     MiEmptyAllWorkingSets @ 0x1406322B8 (MiEmptyAllWorkingSets.c)
 *     MiActOnMirrorBitmap @ 0x140A2C318 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiMirrorBrownPhase(__int64 a1)
{
  int v1; // eax
  int v3; // r15d
  unsigned __int16 **i; // rcx
  unsigned __int16 *v5; // r14
  int j; // ebp
  int v7; // eax
  unsigned int v8; // r9d
  int v9; // esi
  unsigned __int16 **NextPartition; // rax
  unsigned __int16 **v11; // rdi
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0xC0) == 0 )
  {
    v13 = 0LL;
    v3 = (v1 & 0xA) == 0;
    for ( i = 0LL; ; i = v11 )
    {
      NextPartition = (unsigned __int16 **)PsGetNextPartition(i);
      v11 = NextPartition;
      if ( !NextPartition )
        break;
      v5 = *NextPartition;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v5 == MiSystemPartition )
      {
        for ( j = 0; ; ++j )
        {
          MiActOnMirrorBitmap((__int64)xmmword_140C67B10, 2);
          if ( j == v3 && !*(_BYTE *)(a1 + 20) )
          {
            *(_BYTE *)(a1 + 20) = 1;
            _InterlockedIncrement(&dword_140C6935C);
          }
          v7 = *(_DWORD *)(a1 + 8);
          if ( (v7 & 0x400) != 0 || (v7 & 4) != 0 )
          {
            v8 = *(_DWORD *)(a1 + 12);
          }
          else
          {
            if ( (v7 & 0x10) == 0 )
              MiEmptyAllWorkingSets((__int64)v5);
            v8 = 0;
          }
          MiMirrorGatherBrownPages((__int64 *)a1, (__int64)v5, *(_DWORD *)(a1 + 16), v8);
          v9 = MiMirrorPerformBrownWrites(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), &v13);
          if ( v9 < 0 )
          {
            PsQuitNextPartition(v11);
            return (unsigned int)v9;
          }
          if ( *(_BYTE *)(a1 + 20) || v13 < 0x400 )
            break;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
          continue;
        PsQuitNextPartition(v11);
        return 0LL;
      }
    }
  }
  return 0LL;
}
