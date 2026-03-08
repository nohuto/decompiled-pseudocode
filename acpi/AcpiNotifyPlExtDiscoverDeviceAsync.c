/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0037A5C
 * Callers:
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F780 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0010FD0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C00116D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012CA0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C003C8FC (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C003CE7C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0037348 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0037710 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rsi
  char v4; // r14
  void *v5; // rdi
  int v9; // ebx
  int v10; // edx
  __int64 Pool2; // rax
  __int128 v12; // xmm0
  int v13; // edx
  _BYTE *v14; // rsi
  int v15; // edx
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( !qword_1C006EC88 || !(*((unsigned __int8 (**)(void))&xmmword_1C006EC90 + 1))() )
  {
    v9 = 0;
LABEL_19:
    if ( P[1] )
      ExFreePoolWithTag(P[1], 0x53706341u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4E706341u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4E706341u);
    if ( v9 < 0 && v4 )
      AMLIDereferenceHandleEx(a1);
    return (unsigned int)v9;
  }
  v9 = ACPIAmliBuildObjectPathnameUnicode(a1, (__int64)P, 1);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        19,
        11,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        a1,
        v9);
    }
    goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(64LL, 72LL, 1315988289LL);
  v5 = (void *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_19;
  }
  v12 = *(_OWORD *)P;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_OWORD *)(Pool2 + 56) = v12;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 48) = a3;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v4 = 1;
  *(_QWORD *)(Pool2 + 16) = a1;
  v9 = AcpiCreateDiscoveryDeleteParameters((__int64 *)Pool2, 1, (__int64 *)&v18);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        19,
        12,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        a1,
        v9);
    }
    v3 = v18;
    goto LABEL_19;
  }
  v14 = v18;
  v9 = ((__int64 (__fastcall *)(PVOID))xmmword_1C006EC90)(v18);
  if ( v9 != 259 )
  {
    AcpiNotifyDiscoverDeleteMainCompletion(v14);
    v9 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      19,
      13,
      (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v9;
}
