/*
 * XREFs of ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C005B300
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C00D52C8 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C00D5710 (-LoadWin32PoolTrackingSettings@@YAXXZ.c)
 *     ?StopWin32PoolTracking@@YAXXZ @ 0x1C01464F4 (-StopWin32PoolTracking@@YAXXZ.c)
 */

__int64 InitializeWin32PoolTracking(void)
{
  __int64 Pool2; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rax
  bool v4; // al
  _DWORD *v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx

  Pool2 = ExAllocatePool2(262LL, 80LL);
  v1 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_BYTE *)(Pool2 + 72) = 1;
    gpLeakTrackingAllocator = (PVOID)Pool2;
    if ( gSessionId == gServiceSessionId && !gServiceSessionId )
    {
      v4 = IsWin32kRefreshed();
      if ( gpxsGlobals && (*((_DWORD *)gpxsGlobals + 8) = v4, gpxsGlobals) && !v4 )
        LoadWin32PoolTrackingSettings();
      else
        StopWin32PoolTracking();
    }
    v2 = gpxsGlobals;
    if ( gpxsGlobals && !*((_DWORD *)gpxsGlobals + 8) && *((_DWORD *)gpxsGlobals + 9) )
    {
      v5 = gpLeakTrackingAllocator;
      do
      {
        v6 = *(_DWORD *)(v2[5] + 4LL * v1);
        v7 = (unsigned int)v5[11];
        if ( (_DWORD)v7 != 10 )
        {
          v5[v7] = v6;
          ++v5[11];
          v5[10] |= v6;
        }
        v2 = gpxsGlobals;
        ++v1;
      }
      while ( v1 < *((_DWORD *)gpxsGlobals + 9) );
    }
    return 1LL;
  }
  else
  {
    gpLeakTrackingAllocator = &unk_1C029A720;
    return 0LL;
  }
}
