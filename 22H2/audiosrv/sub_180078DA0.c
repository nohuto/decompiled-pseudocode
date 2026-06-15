/*
 * XREFs of sub_180078DA0 @ 0x180078DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_180078DA0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x400) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x400u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 2384));
  }
}
