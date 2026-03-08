/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C00889B0
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00A999C (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIAssert @ 0x1C000AB78 (ACPIAssert.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 ACPIProcessHardwareInformation()
{
  __int64 v0; // rdi
  int v1; // r8d
  int v2; // r9d
  unsigned int v3; // ebx
  int v4; // r8d
  int v5; // r9d
  bool v6; // zf
  __int64 v7; // rdx
  unsigned int v8; // ebp
  char *Pool2; // rax
  int v10; // edx
  int v11; // r9d
  int v12; // r9d

  v0 = *((_QWORD *)AcpiInformation + 1);
  *((_QWORD *)AcpiInformation + 13) = *(unsigned int *)(v0 + 48);
  *((_WORD *)AcpiInformation + 50) = -1;
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(6LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 85) = *(_BYTE *)(v0 + 92);
    ACPIAssert(*(_BYTE *)(v0 + 92) != 0, 4107, v1, v2);
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(7LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 96) = *(_BYTE *)(v0 + 93);
    *((_WORD *)AcpiInformation + 50) = *(unsigned __int8 *)(v0 + 94);
    ACPIAssert(*(_BYTE *)(v0 + 93) != 0, 4108, v4, v5);
  }
  *((_WORD *)AcpiInformation + 43) = *((_BYTE *)AcpiInformation + 85) >> 1;
  LODWORD(v7) = *((_BYTE *)AcpiInformation + 96) >> 1;
  *((_WORD *)AcpiInformation + 49) = v7;
  v6 = *((_WORD *)AcpiInformation + 43) + (_WORD)v7 == 0;
  LOWORD(v7) = *((_WORD *)AcpiInformation + 43) + v7;
  *((_WORD *)AcpiInformation + 51) = v7;
  if ( !v6 )
  {
    v8 = 21 * (unsigned __int16)v7;
    Pool2 = (char *)ExAllocatePool2(64LL, v8, 1735418689LL);
    GpeTable = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          6,
          31,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          v8);
      }
      return (unsigned int)-1073741670;
    }
    GpeHandlerRegistered = Pool2;
    LODWORD(GpeTableSize) = v8;
    GpeEnable = &Pool2[*((unsigned __int16 *)AcpiInformation + 51)];
    GpeCurEnable = (char *)GpeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeIsLevel = (char *)GpeCurEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeHandlerType = (char *)GpeIsLevel + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeEnable = (char *)GpeHandlerType + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeHandler = (char *)GpeWakeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeSpecialHandler = (char *)GpeWakeHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpePending = (char *)GpeSpecialHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpeRunMethod = (char *)GpePending + *((unsigned __int16 *)AcpiInformation + 51);
    GpeComplete = (char *)GpeRunMethod + *((unsigned __int16 *)AcpiInformation + 51);
    v7 = *((unsigned __int16 *)AcpiInformation + 51);
    GpeSavedWakeMask = (char *)GpeComplete + v7;
    GpeSavedWakeStatus = (char *)GpeComplete + v7 + v7;
    GpeMap = (__int64)GpeComplete + v7 + v7 + v7;
  }
  *((_WORD *)AcpiInformation + 56) = 32;
  if ( (*(_BYTE *)(v0 + 112) & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v11 = 33;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x100u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v11 = 32;
  }
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    v11,
    (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
LABEL_17:
  if ( (*(_BYTE *)(v0 + 112) & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v12 = 35;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x200u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v12 = 34;
  }
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    v12,
    (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
LABEL_23:
  if ( (*(_DWORD *)(v0 + 112) & 0x4000) != 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x4000u;
  return v3;
}
