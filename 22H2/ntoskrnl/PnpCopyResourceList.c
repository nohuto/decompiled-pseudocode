/*
 * XREFs of PnpCopyResourceList @ 0x1408B25F0
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x1408B518C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x14075020C (PnpDetermineResourceListSize.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpCopyResourceList(_DWORD *Src)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  v2 = PnpDetermineResourceListSize(Src);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x75737050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, Src, v3);
  return v5;
}
