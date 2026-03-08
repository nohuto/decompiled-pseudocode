/*
 * XREFs of PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x14099C770
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x14099C9A0 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxRemoveTestDevice(unsigned int a1, __int64 a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a1 < 0xC )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = 2LL * v3;
  if ( v4 > 0xFFFFFFFF || (unsigned int)v4 > a1 - 12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Buffer[0] = 1;
    v8 = a2 + 12;
    Buffer[1] = v3;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopDirectedDripsUmLock);
    v5 = 0;
    if ( RtlDeleteElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer) )
      _InterlockedDecrement(&PopDirectedDripsUmTestDeviceCount);
    else
      v5 = -1073741275;
    PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
  }
  return v5;
}
