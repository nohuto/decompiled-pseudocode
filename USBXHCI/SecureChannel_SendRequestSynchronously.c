/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C0052470
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0007070 (TR_AddTRBRangeToSecureTransferRing.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 *     XilCommand_AllocateSecureResources @ 0x1C00313B0 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0031548 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0031700 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0031860 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C00319C0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0031B20 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031E04 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031F68 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C00320D8 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0037DA4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0037F1C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00380A4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0038228 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0038394 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0038540 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00386A8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0038834 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00389B8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0038E80 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C0039068 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0039250 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00393A4 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C003946C (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0039674 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Register_MapSecureMmio @ 0x1C003ED24 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003EE08 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C003F120 (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003F1E8 (Register_WriteSecureMmio.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F24 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C004139C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00418F0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0041A2C (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C0041C60 (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0047F20 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C00480C8 (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0048268 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C0052270 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C0077FC8 (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C0078080 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C007A1F8 (Register_CreateSecureObject.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C007AA70 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C007AB74 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0052358 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C00523F0 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DP @ 0x1C00527A4 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C005287C (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(__int64 a1, GUID *a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v10; // rcx
  unsigned int Data1; // eax
  __int64 v12; // rax
  char v13; // r12
  int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r14d
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *BugCheckParameter4; // [rsp+20h] [rbp-71h]
  char v25; // [rsp+50h] [rbp-41h]
  int v26; // [rsp+54h] [rbp-3Dh]
  unsigned int v27; // [rsp+58h] [rbp-39h]
  _QWORD v28[2]; // [rsp+80h] [rbp-11h] BYREF
  int v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+94h] [rbp+3h]
  GUID v31; // [rsp+98h] [rbp+7h] BYREF

  v6 = 0LL;
  HIDWORD(v28[0]) = 0;
  v25 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v10 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  Data1 = a2[2].Data1;
  a2[1].Data1 = v10;
  v27 = v10;
  v26 = Data1;
  v31 = GUID_NULL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      EtwActivityIdControl(3u, a2);
      v10 = v27;
    }
    v31 = *a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(v10, v6, a2, a2[2].Data1, a3, a5, v10);
    v13 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    v13 = 0;
  }
  v28[0] = 1LL;
  v30 = 0;
  v28[1] = a2;
  v29 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(v15 + 8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v15 + 16), v14, 19, 13, (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids);
      }
      KeBugCheckEx(0x144u, 4uLL, 0LL, 2uLL, 3uLL);
    }
    Controller_LowerAndTrackIrql(*(_QWORD **)(v15 + 8));
    v25 = 1;
  }
  BugCheckParameter4 = v28;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 3592))(
          WdfDriverGlobals,
          *(_QWORD *)a1,
          0LL,
          6078464LL);
  if ( v25 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v19 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
        v16,
        19,
        14,
        (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
        v19);
      goto LABEL_25;
    }
LABEL_27:
    v20 = v26;
    goto LABEL_28;
  }
  if ( !a5 )
    goto LABEL_27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, (unsigned int)v28, a5, 0);
  v19 = -1073741306;
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_27;
  v20 = v26;
  WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, (_DWORD)BugCheckParameter4, v26, v19);
LABEL_28:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v13 )
  {
    v21 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx_EtwWriteTransfer(v22, v21 % *(_QWORD *)(a1 + 16), &v31, v20, v27, v21 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v19;
}
