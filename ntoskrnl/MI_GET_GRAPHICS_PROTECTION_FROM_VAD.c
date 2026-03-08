/*
 * XREFs of MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14031F770
 * Callers:
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_GET_GRAPHICS_PROTECTION_FROM_VAD(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x2200000) != 0x2200000 )
    return 0LL;
  v3 = 2048 << ((v1 >> 28) & 7);
  if ( (v1 & 0x4000000) != 0 )
    v3 |= 0x20000u;
  v4 = v3 | 0x40000;
  if ( (v1 & 0x8000000) == 0 )
    return v3;
  return v4;
}
