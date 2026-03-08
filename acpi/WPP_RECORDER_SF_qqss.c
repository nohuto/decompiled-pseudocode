/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C000A374
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C0009440 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0016248 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A3CC (ACPIDetectDuplicateHID.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C001C150 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001EF60 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001F040 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001F510 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0020B10 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0020EC0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0020FD0 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00210F0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00211F0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00212B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0021450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0021620 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0021720 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C00265C0 (ACPIFanCancelRequest.c)
 *     ACPIFanDeviceControl @ 0x1C00269A0 (ACPIFanDeviceControl.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C002E2DC (ACPIQueryGedDeviceInterface.c)
 *     ACPIMatchKernelPorts @ 0x1C0031DD0 (ACPIMatchKernelPorts.c)
 *     ACPIWakeWaitIrp @ 0x1C00460A0 (ACPIWakeWaitIrp.c)
 *     ACPIDockIrpEject @ 0x1C007AAC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C007B228 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C007BA10 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4D0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusIrpQueryResources @ 0x1C0080E80 (ACPIBusIrpQueryResources.c)
 *     ACPIThermalStartDevice @ 0x1C0095DD0 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AA580 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rsi
  const char *v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v14; // r14
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-78h]

  v9 = a8;
  v11 = a9;
  v12 = -1LL;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = a2;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, (a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a9[v20] );
      v19 = v20 + 1;
    }
    v21 = a9;
    if ( !a9 )
      v21 = "NULL";
    if ( a8 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a8[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a8;
    if ( !a8 )
      v24 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      &a7,
      8LL,
      v24,
      v23,
      v21,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v9 )
  {
    do
      ++v12;
    while ( v9[v12] );
    v27 = v12 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  LOWORD(v29) = v16;
  return WppAutoLogTrace(a1, v15, a3, a5, v29, &a6, 8LL, &a7, 8LL, v9, v27, v11, v26, 0LL);
}
