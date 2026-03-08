/*
 * XREFs of PnpCopyResourceList @ 0x140969958
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14096C29C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x1406F69E8 (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall PnpCopyResourceList(_DWORD *Src)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  void *Pool2; // rax
  void *v5; // rbx

  v2 = PnpDetermineResourceListSize(Src);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  Pool2 = (void *)ExAllocatePool2(256LL, v2, 1970499664LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, Src, v3);
  return v5;
}
