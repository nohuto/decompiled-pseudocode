/*
 * XREFs of sub_1800785E0 @ 0x1800785E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_1800785E0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x200) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x200u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 312));
  }
}
