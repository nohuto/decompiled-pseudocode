/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1C0034904
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1C0013B80 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036230 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001A2FC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x1C0034180 (Controller_IsHandlePresentInCollectionLocked.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C0036DBC (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v5; // r15
  char v6; // si
  __int64 v7; // rbp
  int v9; // edx
  __int64 v10; // rcx
  unsigned int *v11; // rbx
  int Ulong; // eax
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d

  v5 = (_BYTE *)(a1 + 664);
  v6 = 0;
  v7 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 672));
  if ( Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 688), a2) )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           a2,
           off_1C00633B0);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 128))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 688),
      a2);
    *(_BYTE *)(v7 + 48) = 0;
    if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 688)) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), _BYTE *))(WdfFunctions_01023 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        v5);
      v10 = *(_QWORD *)(a1 + 88);
      v11 = *(unsigned int **)(v10 + 32);
      Ulong = XilRegister_ReadUlong(v10, v11);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v11, Ulong & 0xFFFFFBFF);
      *v5 = 0;
    }
    v13 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        v9,
        4,
        301,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        a2,
        *(_QWORD *)(a1 + 688));
    }
    v13 = -1073741811;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 672));
  if ( v7 )
  {
    v6 = *(_BYTE *)(v7 + 60);
    v15 = *(_DWORD *)(v7 + 52);
    v16 = *(_DWORD *)(v7 + 56);
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  ++*(_DWORD *)(a1 + 820);
  *(_DWORD *)(a1 + 824) += v15;
  *(_DWORD *)(a1 + 828) += v16;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq_EtwWriteTransfer(v6, v14, v15, *(_QWORD *)(a1 + 8), a2, a3, v6, v13, v15, v16);
  return v13;
}
