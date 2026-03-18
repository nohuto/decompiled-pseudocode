/*
 * XREFs of ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006A51C
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C006A490 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r10
  struct _LUID v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // r9
  __int64 v5; // r9
  unsigned int v6; // r11d
  struct _LUID v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = gpGdiSharedMemory;
  v2 = a1;
  v3 = *((_DWORD *)gpGdiSharedMemory + 393257);
  if ( v3 >= gcMaximumAdapterCount )
    return 3221225612LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( !operator==(&v8, (_DWORD *)gpAdapterLuids + 2 * v4) )
    {
      v4 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v4 >= v6 )
        goto LABEL_6;
    }
    ++*((_BYTE *)gpDevicesPerLuid + v5);
  }
  else
  {
LABEL_6:
    *((struct _LUID *)gpAdapterLuids + v4) = v2;
    ++*((_BYTE *)gpDevicesPerLuid + v4);
    ++v1[393257];
    ++v1[393256];
  }
  return 0LL;
}
