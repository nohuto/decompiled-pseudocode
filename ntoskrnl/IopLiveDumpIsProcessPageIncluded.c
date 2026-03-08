/*
 * XREFs of IopLiveDumpIsProcessPageIncluded @ 0x140A98844
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A98F10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     IopLiveDumpLookupProcessFilter @ 0x140A988E4 (IopLiveDumpLookupProcessFilter.c)
 */

__int64 __fastcall IopLiveDumpIsProcessPageIncluded(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v4; // r11
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r11

  v2 = *(_DWORD *)(a1 + 80);
  if ( (v2 & 0x8000) == 0 )
    return 1LL;
  v4 = a2[2];
  v5 = 1;
  v6 = (*a2 >> 9) & 0xFFFFFFFFFFFFLL;
  if ( v6 )
  {
    if ( (unsigned __int64)(v4 - 1) <= 0x7FFFFFFEFFFELL && (*(_DWORD *)(a1 + 40) & 4) == 0 )
      return 0;
    v7 = IopLiveDumpLookupProcessFilter(a1, v6);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 32) == 2
        && (v8 - 1 <= 0x7FFFFFFEFFFELL || v8 >= 0xFFFF800000000000uLL && (v2 & 0x10000) != 0) )
      {
        return 0;
      }
    }
  }
  return v5;
}
