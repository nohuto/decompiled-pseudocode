/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x140652CD8
 * Callers:
 *     MiDecrementHugeContext @ 0x1403D0A68 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     MiFreeUltraMapping @ 0x1403C0688 (MiFreeUltraMapping.c)
 */

__int64 __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx

  if ( !a2 )
    return MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
  v2 = *(_QWORD *)(a1 + 344);
  v3 = *(_QWORD *)(v2 + 312);
  *(_QWORD *)(v2 + 312) = 0LL;
  MiFreeUltraMapping(v3);
  return MiDeleteUltraThreadContext(v2 + 184);
}
