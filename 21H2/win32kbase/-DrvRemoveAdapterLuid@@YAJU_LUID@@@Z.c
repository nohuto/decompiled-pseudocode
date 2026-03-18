/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0069E9C
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0069D5C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C01735B0 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C006A490 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // rsi
  int v2; // r15d
  __int64 v3; // rbp
  unsigned int v4; // r8d
  __int64 v5; // r10
  void *v6; // r11
  char *v7; // r12
  char *v8; // r14
  int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  struct _LUID v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v1 = gpGdiSharedMemory;
  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)gpGdiSharedMemory + 393257) )
  {
    while ( !(unsigned __int8)operator==(&v14, (char *)gpAdapterLuids + 8 * v3) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_4;
    }
    v7 = (char *)gpDevicesPerLuid;
    v8 = (char *)gpDevicesPerLuid + v3;
    if ( (*((_BYTE *)gpDevicesPerLuid + v3))-- == 1 )
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
    *((_QWORD *)gpAdapterLuids + v12) = 0LL;
    *((_BYTE *)gpDevicesPerLuid + (unsigned int)v1[393257]) = 0;
  }
  return 0LL;
}
