/*
 * XREFs of PopInitPlatformSettings @ 0x140A71334
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopLogSleepDisabled @ 0x14077EB0C (PopLogSleepDisabled.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  int SystemInformation; // ebx
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  int v4; // eax
  _DWORD v6[6]; // [rsp+38h] [rbp-28h] BYREF

  v6[4] = 0;
  v0 = 0LL;
  v6[0] = 1094930505;
  v6[3] = 0;
  v6[1] = 1;
  v6[2] = 1346584902;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v6);
  if ( SystemInformation != -1073741789 )
    goto LABEL_28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x206D654Du);
  v0 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SystemInformation = -1073741670;
    goto LABEL_32;
  }
  *PoolWithTag = 1094930505;
  PoolWithTag[1] = 1;
  PoolWithTag[2] = 1346584902;
  PoolWithTag[3] = -16;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)PoolWithTag);
  if ( SystemInformation < 0 )
LABEL_32:
    KeBugCheckEx(0xA0u, 0xEuLL, SystemInformation, 0LL, 0LL);
  if ( v0[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v0[61];
  if ( (unsigned __int8)off_140C00860[0]() )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v3 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v3) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v3) = 23;
    }
    PopLogSleepDisabled(18, v3, 0LL, 0LL);
  }
  if ( PopPlatformAoAc )
  {
    if ( !(_DWORD)InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
      goto LABEL_25;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  PopPlatformAoAc = 0;
LABEL_25:
  v4 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v4 = 0;
    PopFirmwarePlatformRole = 0;
  }
  PopPlatformRole = v4;
  SystemInformation = 0;
LABEL_28:
  if ( SystemInformation < 0 )
    goto LABEL_32;
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)SystemInformation;
}
