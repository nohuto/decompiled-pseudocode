/*
 * XREFs of PopInitPlatformSettings @ 0x140A72334
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FAC40 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopLogSleepDisabled @ 0x14077EDCC (PopLogSleepDisabled.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  NTSTATUS v1; // ebx
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  int v4; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  v0 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  if ( v1 != -1073741789 )
    goto LABEL_28;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x206D654Du);
  v0 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v1 = -1073741670;
    goto LABEL_32;
  }
  *PoolWithTag = 1094930505;
  PoolWithTag[1] = 1;
  PoolWithTag[2] = 1346584902;
  PoolWithTag[3] = ReturnLength - 16;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
  if ( v1 < 0 )
LABEL_32:
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
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
    if ( !InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
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
  v1 = 0;
LABEL_28:
  if ( v1 < 0 )
    goto LABEL_32;
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)v1;
}
