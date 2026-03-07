int __fastcall HaliAcpiMachineStateInit(_BYTE *a1)
{
  bool v2; // di
  int v3; // eax
  _DWORD *v4; // rdx
  __int64 (__fastcall *v5)(unsigned int, __int64 (__fastcall *)(__int64), __int64, unsigned int, volatile signed __int32 *); // rax
  char v6; // cl
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // cl
  int v20; // eax
  unsigned int v21; // eax
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]

  v24 = 0LL;
  v2 = 0;
  InputBuffer = 0LL;
  HalpWakeupState = 1;
  v3 = HalpInterruptModel();
  *v4 = v3;
  if ( a1[9] && !HalpDisableHibernate )
    v2 = HalpIsXboxNanovisorPresent() == 0;
  v5 = HaliAcpiSleep;
  if ( *a1 )
  {
    v17 = a1[2] & 0xF;
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    v18 = a1[1] & 0xF;
    BYTE4(InputBuffer) = 1;
    v24 = v18 | (16 * (v17 | 0x510));
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvSetSleepStateProperty();
    v5 = HaliAcpiSleep;
  }
  if ( !HalpWakeVector )
    goto LABEL_22;
  if ( a1[3] )
  {
    v19 = a1[4];
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    v20 = a1[5] & 0xF;
    LODWORD(InputBuffer) = 1;
    BYTE4(InputBuffer) = 1;
    v21 = v19 & 0xF | (16 * (v20 | 0x520));
    if ( !HalpHvSleepEnlightenedCpuManager )
      v21 |= 0x12000u;
    v24 = v21;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    if ( HalpHvSleepEnlightenedCpuManager )
      LODWORD(v5) = HalpHvSetSleepStateProperty();
  }
  if ( !a1[6] )
    goto LABEL_22;
  v6 = a1[7];
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v7 = a1[8] & 0xF;
  LODWORD(InputBuffer) = 2;
  BYTE4(InputBuffer) = 1;
  v8 = v6 & 0xF | (16 * (v7 | 0x530));
  if ( !HalpHvSleepEnlightenedCpuManager )
    v8 |= 0x32000u;
  v24 = v8;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( HalpHvSleepEnlightenedCpuManager )
    LODWORD(v5) = HalpHvSetSleepStateProperty();
  if ( a1[6] )
  {
    if ( !v2 )
      goto LABEL_18;
    v9 = a1[8] & 0xF | 0x3740LL;
    BYTE4(InputBuffer) = (unsigned __int8)dword_140C61D10 >> 7;
    v10 = a1[7] & 0xF | (unsigned __int64)(16 * v9);
    LODWORD(InputBuffer) = 6;
    v24 = v10;
    *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
    ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  }
  else
  {
LABEL_22:
    if ( !v2 )
      goto LABEL_18;
  }
  v11 = a1[10] & 0xF;
  BYTE4(InputBuffer) = (unsigned __int8)dword_140C61D10 >> 7;
  v12 = a1[11] & 0xF;
  LODWORD(InputBuffer) = 3;
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v13 = v11 | (16 * (v12 | 0x540));
  if ( !HalpHvSleepEnlightenedCpuManager )
    v13 |= 0x10000u;
  v24 = v13;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
LABEL_18:
  if ( !a1[12] )
  {
    if ( !HalFirmwareTypeEfi )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (HalpPlatformFlags & 1) == 0 )
  {
LABEL_33:
    HalpShutdownContext = 0;
    v24 = 0LL;
    *(_QWORD *)&InputBuffer = 4LL;
    *((_QWORD *)&InputBuffer + 1) = HalpLegacyShutdown;
    LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
    goto LABEL_34;
  }
  v14 = a1[13] & 0xF;
  v15 = a1[14] & 0xF;
  LODWORD(InputBuffer) = 4;
  BYTE4(InputBuffer) = 0;
  v16 = v14 | (16 * (v15 | 0x850));
  *((_QWORD *)&InputBuffer + 1) = HaliAcpiSleep;
  v24 = v16;
  HalpShutdownContext = v16;
  LODWORD(v5) = ZwPowerInformation(SystemPowerStateHandler, &InputBuffer, 0x18u, 0LL, 0);
  if ( !HalpHvSleepEnlightenedCpuManager )
    return (int)v5;
  LODWORD(v5) = HalpHvSetSleepStateProperty();
LABEL_34:
  if ( HalpHvSleepEnlightenedCpuManager )
    LODWORD(v5) = HalpHvSetSleepStateProperty();
  return (int)v5;
}
