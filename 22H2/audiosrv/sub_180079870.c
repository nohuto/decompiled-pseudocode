/*
 * XREFs of sub_180079870 @ 0x180079870
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180079870(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~8u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2808));
  }
}
