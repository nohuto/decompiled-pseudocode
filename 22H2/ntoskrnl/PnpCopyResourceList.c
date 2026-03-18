/*
 * XREFs of PnpCopyResourceList @ 0x14096C978
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14096F2BC (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x1407906DC (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
