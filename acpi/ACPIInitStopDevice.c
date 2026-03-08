/*
 * XREFs of ACPIInitStopDevice @ 0x1C0087AE4
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0028EF0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0028FE8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001D3A8 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C002E508 (ACPIInternalClearFlags.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     IsNsobjPciBus @ 0x1C008A678 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  char *v2; // rbx
  _QWORD *v4; // rsi
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // r9
  const char *v16; // rcx
  const char *v17; // r8
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // r10
  void *v21; // rcx
  void *v22; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v25 = 0LL;
  v2 = (char *)(a1 + 1008);
  v4 = *(_QWORD **)(a1 + 760);
  if ( (*(_DWORD *)(a1 + 1008) & 0x40000) == 0 && !(unsigned __int8)IsNsobjPciBus(*(_QWORD *)(a1 + 760)) )
  {
    v6 = *(_DWORD *)(a1 + 384);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v2 < 0 )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4LL,
                             (void (__fastcall *)(__int64, __int64, __int64))ACPIInitPowerRequestCompletion,
                             (__int64)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) && *(_BYTE *)(a1 + 184) )
  {
    v7 = (__int64 *)(a1 + 192);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *(_BYTE *)(v9 + 130) = 0;
      --v8;
    }
    while ( v8 );
  }
  ACPIInternalClearFlags(v2, 1LL);
  if ( v4 )
  {
    if ( (*(_DWORD *)v2 & 0x40100) == 0 )
    {
      v10 = AMLIGetNamedChild(v4, 1397310559);
      v11 = (volatile signed __int32 *)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11, v13);
        if ( v12 >= 0 )
        {
          v14 = ACPIGet(a1, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v25, 0LL);
          if ( v14 >= 0 )
          {
            if ( (v25 & 2) != 0 )
            {
              v18 = *(_QWORD *)(a1 + 8);
              v19 = byte_1C00622D0;
              v20 = byte_1C00622D0;
              if ( (v18 & 0x200000000000LL) != 0 )
              {
                v19 = *(const char **)(a1 + 608);
                if ( (v18 & 0x400000000000LL) != 0 )
                  v20 = *(const char **)(a1 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x1Du,
                  (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
                  v25,
                  a1,
                  v19,
                  v20);
            }
          }
          else
          {
            v15 = *(_QWORD *)(a1 + 8);
            v16 = byte_1C00622D0;
            v17 = byte_1C00622D0;
            if ( (v15 & 0x200000000000LL) != 0 )
            {
              v16 = *(const char **)(a1 + 608);
              if ( (v15 & 0x400000000000LL) != 0 )
                v17 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                1u,
                0x1Cu,
                (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
                v14,
                a1,
                v16,
                v17);
          }
        }
      }
    }
  }
  v21 = *(void **)(a1 + 672);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  v22 = *(void **)(a1 + 680);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  return 0LL;
}
