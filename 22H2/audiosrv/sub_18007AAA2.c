/*
 * XREFs of sub_18007AAA2 @ 0x18007AAA2
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AAA2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~2u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 56));
  }
}
