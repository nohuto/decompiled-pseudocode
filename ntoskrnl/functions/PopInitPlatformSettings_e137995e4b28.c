__int64 PopInitPlatformSettings()
{
  int SystemInformation; // eax
  int v1; // ebx
  _DWORD *Pool2; // rax
  _BYTE *v3; // rdi
  char v4; // al
  int v5; // eax
  int v7; // edx
  _DWORD v8[6]; // [rsp+38h] [rbp-28h] BYREF

  v8[4] = 0;
  v8[3] = 0;
  v8[0] = 1094930505;
  v8[1] = 1;
  v8[2] = 1346584902;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v8);
  v1 = SystemInformation;
  if ( SystemInformation != -1073741789 )
  {
    v3 = 0LL;
    if ( SystemInformation >= 0 )
      goto LABEL_22;
LABEL_26:
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 0LL, 0x206D654Du);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
    goto LABEL_26;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = -16;
  v1 = ZwQuerySystemInformation(76LL, (__int64)Pool2);
  if ( v1 < 0 )
    goto LABEL_26;
  if ( v3[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v3[61];
  if ( (unsigned __int8)off_140C01C70[0]() )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v7 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v7) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v7) = 23;
    }
    PopLogSleepDisabled(18, v7, 0LL, 0LL);
  }
  v4 = PopPlatformAoAc;
  if ( PopPlatformAoAc )
  {
    if ( !(_DWORD)InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
      goto LABEL_16;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  v4 = 0;
  PopPlatformAoAc = 0;
LABEL_16:
  if ( !v4 )
    KiForceIdleDisabled = 1;
  v5 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v5 = 0;
    PopFirmwarePlatformRole = 0;
  }
  PopPlatformRole = v5;
  v1 = 0;
LABEL_22:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x206D654Du);
  return (unsigned int)v1;
}
