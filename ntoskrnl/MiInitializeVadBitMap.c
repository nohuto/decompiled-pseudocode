/*
 * XREFs of MiInitializeVadBitMap @ 0x1407293F0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiInitializeVadCellBitMap @ 0x140729460 (MiInitializeVadCellBitMap.c)
 */

__int64 MiInitializeVadBitMap()
{
  int v0; // edx
  unsigned __int64 v1; // rdi
  _KPROCESS *Process; // rcx
  __int64 v3; // rbx
  unsigned __int64 *v4; // rsi

  v0 = 0;
  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = Process[1].ActiveProcessors.StaticBitmap[28] + 48;
  v4 = (unsigned __int64 *)(Process[1].ActiveProcessors.StaticBitmap[28] + 264);
  if ( *v4 )
  {
    do
    {
      v0 = MiInitializeVadCellBitMap(v3, 0LL);
      if ( v0 < 0 )
        break;
      ++v1;
      v3 += 72LL;
    }
    while ( v1 < *v4 );
  }
  return (unsigned int)v0;
}
