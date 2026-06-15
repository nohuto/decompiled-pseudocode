/*
 * XREFs of sub_180079800 @ 0x180079800
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180079800(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~4u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2832));
  }
}
