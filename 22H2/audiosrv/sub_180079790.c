/*
 * XREFs of sub_180079790 @ 0x180079790
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180079790(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~2u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2856));
  }
}
