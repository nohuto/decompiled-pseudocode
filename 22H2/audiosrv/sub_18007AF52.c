/*
 * XREFs of sub_18007AF52 @ 0x18007AF52
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_18007AF52(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x10u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 72));
  }
}
