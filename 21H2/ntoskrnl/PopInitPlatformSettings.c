/*
 * XREFs of PopInitPlatformSettings @ 0x140B2D708
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopLogSleepDisabled @ 0x140810E2C (PopLogSleepDisabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 PopInitPlatformSettings()
{
  int SystemInformation; // eax
  int v1; // edi
  _DWORD *Pool2; // rax
  _BYTE *v3; // rbx
  int v4; // edx
  int v5; // eax
  _DWORD v7[6]; // [rsp+38h] [rbp-28h] BYREF

  v7[4] = 0;
  v7[3] = 0;
  v7[0] = 1094930505;
  v7[1] = 1;
  v7[2] = 1346584902;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v7);
  v1 = SystemInformation;
  if ( SystemInformation != -1073741789 )
  {
    v3 = 0LL;
    if ( SystemInformation >= 0 )
      goto LABEL_28;
LABEL_32:
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 0LL, 0x206D654Du);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
    goto LABEL_32;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = -16;
  v1 = ZwQuerySystemInformation(76LL, (__int64)Pool2);
  if ( v1 < 0 )
    goto LABEL_32;
  if ( v3[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v3[61];
  if ( (unsigned __int8)off_140C01EB0[0]() )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v4 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v4) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v4) = 23;
    }
    PopLogSleepDisabled(18, v4, 0LL, 0LL);
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
  v5 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v5 = 0;
    PopFirmwarePlatformRole = 0;
  }
  PopPlatformRole = v5;
  v1 = 0;
LABEL_28:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x206D654Du);
  return (unsigned int)v1;
}
