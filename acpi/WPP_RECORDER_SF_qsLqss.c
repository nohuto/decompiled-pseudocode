/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C00015BC
 * Callers:
 *     ACPIRootIrpCompleteRoutine @ 0x1C0001410 (ACPIRootIrpCompleteRoutine.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0009590 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C0017220 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpUnhandled @ 0x1C00176B0 (ACPIBusIrpUnhandled.c)
 *     ACPICMButtonStartCompletion @ 0x1C0018DC0 (ACPICMButtonStartCompletion.c)
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C0025540 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C00256A0 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C00285C0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0028EF0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C003AB90 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C003ACF0 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C003D280 (ACPIRootIrpRemoveDevice.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C007A330 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C007B010 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C007B740 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C007B8F0 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4D0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C007DF10 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C007E280 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C007E350 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C007E820 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C007F9F0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0080820 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0080980 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C0080E80 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081770 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0085270 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00857C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C0085940 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0085A90 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C0085F40 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStartDevice @ 0x1C00867A0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00868F0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpStopDevice @ 0x1C0086CA0 (ACPIFilterIrpStopDevice.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0087190 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0093C60 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0093D88 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0093FA0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0094220 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00944D0 (ACPIRootIrpQueryInterface.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00946F0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C0094830 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AA580 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // r14
  const char *v12; // rbp
  unsigned __int16 v13; // r11
  const char *v14; // rsi
  __int64 v15; // rbx
  const char *v16; // rdi
  unsigned __int64 v18; // r9
  unsigned int v19; // r12d
  int v20; // eax
  unsigned __int8 v21; // cf
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // r14
  __int64 v30; // r9
  __int64 v31; // r9
  const char *v32; // r11
  __int64 v33; // r8
  const char *v34; // r10
  __int64 v35; // rdx
  __int64 v36; // rdx
  const char *v37; // rcx
  int v38; // [rsp+20h] [rbp-A8h]

  v11 = a1;
  v12 = (const char *)a7;
  v13 = a4;
  v14 = a10;
  v15 = -1LL;
  v16 = a11;
  v18 = (unsigned __int64)a3 >> 16;
  v19 = a2;
  a7 = 8LL;
  v20 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v18 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v21 = _bittest(&v20, (a3 - 1) & 0x1F);
  v22 = 5LL;
  if ( v21 )
  {
    v29 = 10 * v18;
    if ( *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v18 + 1) >= a2 )
    {
      if ( a11 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( a11[v30] );
        v31 = v30 + 1;
      }
      else
      {
        v31 = 5LL;
      }
      v32 = a11;
      if ( !a11 )
        v32 = "NULL";
      if ( a10 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( a10[v33] );
        v22 = v33 + 1;
      }
      v34 = a10;
      if ( !a10 )
        v34 = "NULL";
      if ( v12 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v12[v35] );
        v36 = v35 + 1;
      }
      else
      {
        v36 = 5LL;
      }
      v37 = v12;
      if ( !v12 )
        v37 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + v29),
        43LL,
        a5,
        a4,
        &a6,
        a7,
        v37,
        v36,
        &a8,
        4LL,
        &a9,
        a7,
        v34,
        v22,
        v32,
        v31,
        0LL);
      v13 = a4;
    }
    v11 = a1;
  }
  if ( v16 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v16[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( !v16 )
    v16 = "NULL";
  if ( v14 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v14[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v27 = v15 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v38) = v13;
  return WppAutoLogTrace(v11, v19, a3, a5, v38, &a6, a7, v12, v27, &a8, 4LL, &a9, a7, v14, v26, v16, v24, 0LL);
}
