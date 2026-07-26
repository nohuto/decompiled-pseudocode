/*
 * XREFs of ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00FA400
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BB00 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00A64D4 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00A7FA0 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00A9348 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0118168 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0120430 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012095C (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00097A0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000AF80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C000AFD8 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000AFF4 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C000B000 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B230 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 Oid; // r15
  _NDIS_M_DRIVER_BLOCK *FilterFriendlyName; // r13
  struct _NDIS_OID_REQUEST *v4; // rsi
  NDIS_STATUS v6; // eax
  int v7; // r8d
  struct _NDIS_OID_REQUEST *v8; // rbp
  unsigned int v9; // ebx
  _NDIS_M_DRIVER_BLOCK *v10; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  NDISWATCHDOG__ *Flink; // r14
  struct NDISWATCHDOG__ *v13; // rax
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r12
  int v15; // ebx
  struct NDISWATCHDOG__ *v16; // rbp
  UCHAR Type; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  BOOLEAN v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbx
  _NDIS_M_DRIVER_BLOCK *v23; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v24; // rcx
  int v25; // r8d
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  unsigned __int16 v29; // r9
  ULONG v31; // eax
  unsigned int v32; // eax
  NDIS_OID v33; // [rsp+90h] [rbp+8h]
  ULONG SecondsRemaining; // [rsp+98h] [rbp+10h] BYREF
  struct _NDIS_OID_REQUEST *v35; // [rsp+A0h] [rbp+18h] BYREF

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  FilterFriendlyName = (_NDIS_M_DRIVER_BLOCK *)a1[4].FilterFriendlyName;
  v33 = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v35 = 0LL;
  v6 = ndisOidCloneForCompatibility(&a1->Header, a2, 1, &v35);
  v8 = v35;
  v9 = v6;
  if ( v6 )
    goto LABEL_25;
  v10 = (_NDIS_M_DRIVER_BLOCK *)a1[4].FilterFriendlyName;
  if ( v35 )
    v4 = v35;
  value = v10->UnhookedCharacteristics.__ptr_.__value_;
  if ( !value || value->OidRequestHandler == v10->MiniportDriverCharacteristics.OidRequestHandler )
    Flink = (NDISWATCHDOG__ *)a1[5].PktMonComp.EdgeList.Flink;
  else
    Flink = (NDISWATCHDOG__ *)a1[5].PktMonComp.EdgeList.Blink;
  if ( Flink != (NDISWATCHDOG__ *)-1LL )
  {
    v13 = WatchdogFromHandle(Flink);
    ndisWaitForKernelObject(v13 + 42);
  }
  OidRequestHandler = FilterFriendlyName->MiniportDriverCharacteristics.OidRequestHandler;
  v15 = 35000;
  if ( Flink != (NDISWATCHDOG__ *)-1LL )
  {
    v16 = WatchdogFromHandle(Flink);
    *((_DWORD *)v16 + 50) = 846677070;
    Type = a1->Header.Type;
    if ( a1->Header.Type == 17 )
    {
      Miniport = (_NDIS_MINIPORT_BLOCK *)a1;
    }
    else if ( Type == 5 )
    {
      Miniport = a1->Miniport;
    }
    else
    {
      if ( Type != 18 )
        goto LABEL_15;
      Miniport = (_NDIS_MINIPORT_BLOCK *)a1->FilterDriver;
    }
    if ( !Miniport )
    {
LABEL_15:
      *((_DWORD *)v16 + 51) = v15;
      *((_QWORD *)v16 + 26) = &ndisGlobalTriageBlock;
      *((_QWORD *)v16 + 27) = a1;
      *((_QWORD *)v16 + 28) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)v16 + 29) = KeGetCurrentThread();
      v21 = g_ndisWatchdogSequenceNumber;
      *((_QWORD *)v16 + 30) = Oid;
      *((_QWORD *)v16 + 32) = OidRequestHandler;
      g_ndisWatchdogSequenceNumber = v21 + 1;
      *((_DWORD *)v16 + 41) = v21 + 1;
      v22 = -10000LL * *((unsigned int *)v16 + 51);
      *((_DWORD *)v16 + 48) = 35;
      *((_DWORD *)v16 + 40) = 1;
      KeClearEvent((PRKEVENT)v16 + 7);
      KeSetTimerEx((PKTIMER)v16 + 1, (LARGE_INTEGER)v22, 0, (PKDPC)v16);
      v8 = v35;
      goto LABEL_16;
    }
    if ( (Miniport->Flags & 0x100) != 0 )
    {
      v20 = 0;
      goto LABEL_14;
    }
    PhysicalDeviceObject = Miniport->PhysicalDeviceObject;
    SecondsRemaining = 0;
    v20 = PoQueryWatchdogTime(PhysicalDeviceObject, &SecondsRemaining);
    if ( !v20 )
    {
LABEL_14:
      *((_BYTE *)v16 + 248) = v20;
      goto LABEL_15;
    }
    v31 = SecondsRemaining;
    if ( SecondsRemaining < 3 )
      v31 = 3;
    v32 = 1000 * v31 - 3000;
    if ( v32 < 0xBB8 )
    {
      v32 = 3000;
    }
    else if ( v32 >= 0x88B8 )
    {
LABEL_33:
      v20 = 1;
      goto LABEL_14;
    }
    v15 = v32;
    goto LABEL_33;
  }
LABEL_16:
  v23 = (_NDIS_M_DRIVER_BLOCK *)a1[4].FilterFriendlyName;
  v24 = v23->UnhookedCharacteristics.__ptr_.__value_;
  if ( !v24 || v24->OidRequestHandler == v23->MiniportDriverCharacteristics.OidRequestHandler )
  {
    if ( ndisIsMiniportVerified(FilterFriendlyName) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v25,
          0xE6u,
          (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
          (char)a1,
          v33,
          v4);
      v26 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_FILTER_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
             + 3))(
              a1->FilterModuleContext,
              v4,
              a1,
              *(void **)&a1[5].PnPRef.ReferenceCount,
              FilterFriendlyName->MiniportDriverCharacteristics.OidRequestHandler);
      v9 = v26;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v29 = 231;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v25,
          0xE8u,
          (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
          (char)a1,
          v33,
          v4);
      v26 = FilterFriendlyName->MiniportDriverCharacteristics.OidRequestHandler(a1->FilterModuleContext, v4);
      v9 = v26;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v29 = 233;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v7,
        0xE4u,
        (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
        (char)a1,
        v33,
        v4);
    v26 = FilterFriendlyName->MiniportDriverCharacteristics.OidRequestHandler(a1->FilterModuleContext, v4);
    v9 = v26;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v29 = 229;
  }
  WPP_RECORDER_SF_qDqd(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v27,
    v28,
    v29,
    (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
    (char)a1,
    v33,
    (char)v4,
    v26);
LABEL_23:
  if ( v9 == 259 )
    return v9;
  ndisDisarmWatchdogAsync(Flink);
LABEL_25:
  if ( v9 != 259 && v8 )
    ndisOidFreeInternalCloneRequest(a1, v8, 1, 0LL);
  return v9;
}
