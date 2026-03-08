/*
 * XREFs of PopDirectedDripsUmDirectedFxSetMode @ 0x14099C804
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x14099C9A0 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxSetMode(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 >= 0xC )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopDirectedDripsUmLock);
    v3 = 0;
    PopDirectedDripsUmTestPermissive = *(_BYTE *)(a2 + 8) != 0;
    PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
