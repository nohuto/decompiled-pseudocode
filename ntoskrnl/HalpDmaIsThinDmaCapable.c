/*
 * XREFs of HalpDmaIsThinDmaCapable @ 0x14038D350
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmaCapable(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 448);
  if ( v2 < 0x40 )
    v3 = (1LL << v2) - 1;
  else
    v3 = -1LL;
  return (*(_DWORD *)(a1 + 520) & 0xFFFFFFFD) == 0
      && *(_BYTE *)(a1 + 445)
      && *(_BYTE *)(a1 + 441)
      && *(_BYTE *)(a1 + 442)
      && v3 >= HalpMaximumPhysicalMemoryAddress;
}
