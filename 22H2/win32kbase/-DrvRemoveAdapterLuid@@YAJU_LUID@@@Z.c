/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C007EAF4
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C007E9E4 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00C3560 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0146904 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C007EBD8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // rsi
  int v2; // r15d
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r10
  void *v6; // r11
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r14
  int v10; // eax
  int v12; // eax
  unsigned int v13; // edi
  struct _LUID v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v1 = gpGdiSharedMemory;
  v2 = 0;
  v3 = 0LL;
  v4 = *((unsigned int *)gpGdiSharedMemory + 393257);
  if ( (_DWORD)v4 )
  {
    while ( !(unsigned __int8)operator==(&v14, &gpAdapterLuids[v3], v4) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= (unsigned int)v4 )
        goto LABEL_4;
    }
    v7 = gpDevicesPerLuid;
    v8 = &gpDevicesPerLuid[v3];
    if ( gpDevicesPerLuid[v3]-- == 1 )
    {
      v2 = 1;
      if ( v1[393257] - (_DWORD)v3 != 1 )
      {
        v13 = v1[393257] - v3 - 1;
        memmove(v6, (const void *)(v5 + 8LL * (unsigned int)(v3 + 1)), 8LL * v13);
        memmove(v8, &v7[(unsigned int)(v3 + 1)], v13);
      }
    }
  }
LABEL_4:
  v10 = v1[393257];
  if ( (_DWORD)v3 == v10 )
    return 3221225524LL;
  if ( v2 )
  {
    ++v1[393256];
    v12 = v10 - 1;
    v1[393257] = v12;
    gpAdapterLuids[v12] = 0LL;
    gpDevicesPerLuid[v1[393257]] = 0;
  }
  return 0LL;
}
