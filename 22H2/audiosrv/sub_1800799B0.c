/*
 * XREFs of sub_1800799B0 @ 0x1800799B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1agent@Concurrency@@UEAA@XZ @ 0x180119074 (--1agent@Concurrency@@UEAA@XZ.c)
 */

void __fastcall sub_1800799B0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~0x80u;
    Concurrency::agent::~agent((Concurrency::agent *)(a2 + 3024));
  }
}
