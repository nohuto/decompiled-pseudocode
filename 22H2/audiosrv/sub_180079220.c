/*
 * XREFs of sub_180079220 @ 0x180079220
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180079220(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x200000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x200000u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2456));
  }
}
