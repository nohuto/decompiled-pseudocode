/*
 * XREFs of sub_18004D3B0 @ 0x18004D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D3B0(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  ++dword_18019E558;
  return (unsigned int)(v1 + 1);
}
