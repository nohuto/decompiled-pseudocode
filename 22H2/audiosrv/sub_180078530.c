/*
 * XREFs of sub_180078530 @ 0x180078530
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078530(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x40u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 288));
  }
}
