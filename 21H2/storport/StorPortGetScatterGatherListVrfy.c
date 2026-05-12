/*
 * XREFs of StorPortGetScatterGatherListVrfy @ 0x1C007F2D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidRemapScatterGatherList @ 0x1C007F008 (RaidRemapScatterGatherList.c)
 */

PVOID __fastcall StorPortGetScatterGatherListVrfy(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v6; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = **(_QWORD **)(a1 - 16);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_DWORD *)(a2 + 24);
    v4 = *(_QWORD *)(a2 + 96);
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 12);
    v4 = *(_QWORD *)(a2 + 48);
  }
  if ( !*(_BYTE *)(v2 + 4514) || (*(_BYTE *)(v2 + 4515) & 4) == 0 || (v3 & 0xC0) == 0 )
    return *(PVOID *)(v4 + 112);
  if ( KeGetCurrentIrql() > 2u )
    return *(PVOID *)(v4 + 112);
  if ( !RaidRemapScatterGatherList(*(unsigned int **)(v4 + 112), v4) )
    return *(PVOID *)(v4 + 112);
  v6 = *(_QWORD *)(v4 + 120);
  if ( (*(_BYTE *)(v6 + 10) & 5) != 0 )
    return *(PVOID *)(v6 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)v6, 0, MmCached, 0LL, 0, 0x40000010u);
}
