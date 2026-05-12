/*
 * XREFs of RaUnitStartResetIo @ 0x1C0048E98
 * Callers:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006208 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BF64 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C0002ABC (RaidPauseUnitQueue.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidUnitClaimIrp @ 0x1C0004470 (RaidUnitClaimIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C00077D4 (RaidUnitReleaseIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B5D0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B614 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x1C000B678 (RaUnitCheckRemoveState.c)
 *     _tlgKeywordOn @ 0x1C000E4FC (_tlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C00143DC (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B02C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0045650 (RaidNtStatusToSrbStatus.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004A104 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004A928 (RaidUnitEndDeviceBusy.c)
 */

int __fastcall RaUnitStartResetIo(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r12d
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r8
  int result; // eax
  int v13; // r15d
  _IO_SECURITY_CONTEXT *v14; // rcx
  unsigned int v15; // eax
  __int64 FullCreateOptions; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // eax
  PEVENT_DATA_DESCRIPTOR v24; // [rsp+28h] [rbp-81h]
  char v25; // [rsp+30h] [rbp-79h] BYREF
  char v26; // [rsp+31h] [rbp-78h] BYREF
  char v27; // [rsp+32h] [rbp-77h] BYREF
  int v28; // [rsp+34h] [rbp-75h] BYREF
  __int64 v29; // [rsp+38h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+60h] [rbp-49h]
  int v32; // [rsp+68h] [rbp-41h]
  int v33; // [rsp+6Ch] [rbp-3Dh]
  __int64 v34; // [rsp+70h] [rbp-39h]
  int v35; // [rsp+78h] [rbp-31h]
  int v36; // [rsp+7Ch] [rbp-2Dh]
  int *v37; // [rsp+80h] [rbp-29h]
  int v38; // [rsp+88h] [rbp-21h]
  int v39; // [rsp+8Ch] [rbp-1Dh]
  char *v40; // [rsp+90h] [rbp-19h]
  int v41; // [rsp+98h] [rbp-11h]
  int v42; // [rsp+9Ch] [rbp-Dh]
  char *v43; // [rsp+A0h] [rbp-9h]
  int v44; // [rsp+A8h] [rbp-1h]
  int v45; // [rsp+ACh] [rbp+3h]
  char *v46; // [rsp+B0h] [rbp+7h]
  int v47; // [rsp+B8h] [rbp+Fh]
  int v48; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v28 = 0;
  v6 = 0;
  SecurityQos = 0LL;
  v29 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v9 = RaUnitCheckRemoveState(v3, (__int64)a2);
  if ( v9 < 0 || (LOBYTE(v10) = 1, v9 = RaUnitAcquireRemoveLock(v3, (__int64)a2, v10), v9 < 0) )
  {
LABEL_42:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(v9);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v24) = a2->IoStatus.Status;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x19u,
        (__int64)&WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        v24);
    }
    RaidUnitEndDeviceBusy(v3, a2);
    return RaidCompleteRequestEx(a2, 0, v9);
  }
  v9 = RaidUnitClaimIrp(v3, (__int64)a2, 0LL, a3);
  if ( v9 >= 0 )
  {
    v13 = 1;
    v14 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v14->SecurityQos) == 40 )
      SecurityQos = v14[4].SecurityQos;
    else
      SecurityQos = v14[2].SecurityQos;
    LOBYTE(v15) = BYTE2(SecurityContext->SecurityQos);
    if ( (_BYTE)v15 == 40 )
      FullCreateOptions = SecurityContext->FullCreateOptions;
    else
      FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
    if ( (_DWORD)FullCreateOptions != 16 )
    {
      v17 = *(_QWORD *)&SecurityQos[14].Length;
      FullCreateOptions = *(unsigned __int8 *)(v17 + 2);
      if ( (_BYTE)FullCreateOptions == 40 )
        v18 = *(_DWORD *)(v17 + 20);
      else
        v18 = *(unsigned __int8 *)(v17 + 2);
      _InterlockedAdd((volatile signed __int32 *)(v3 + 1268), 1u);
      if ( v18 >= 0x12 )
      {
        if ( v18 <= 0x13 )
        {
          RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
        }
        else if ( v18 == 32 )
        {
          RaidPauseUnitQueue(v3);
        }
      }
      LOBYTE(v15) = BYTE2(SecurityContext->SecurityQos);
      v6 = 1;
    }
    if ( (_BYTE)v15 == 40 )
      v15 = SecurityContext->FullCreateOptions;
    else
      v15 = (unsigned __int8)v15;
    if ( v15 == 16 && (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(FullCreateOptions, 0x400000000000LL) )
    {
      v21 = v29;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v31 = v29 + 5192;
      v34 = v3 + 1976;
      v28 = *(_DWORD *)(v29 + 56);
      v37 = &v28;
      v25 = *(_BYTE *)(v3 + 96);
      v40 = &v25;
      v26 = *(_BYTE *)(v3 + 97);
      v43 = &v26;
      v27 = *(_BYTE *)(v3 + 98);
      v46 = &v27;
      v32 = 16;
      v35 = 16;
      v38 = 4;
      v41 = v20;
      v44 = v20;
      v47 = v20;
      tlgWriteTransfer_EtwWriteTransfer(v19, (unsigned __int8 *)dword_1C005DCB3, v11, v20, 8u, &v30);
    }
    else
    {
      v21 = v29;
    }
    *(_QWORD *)&SecurityQos[54].ContextTrackingMode = RaidUnitCompleteResetRequest;
    result = RaidAdapterExecuteXrb(v21, SecurityQos, v11);
    v9 = result;
  }
  else
  {
    result = RaUnitReleaseRemoveLock(v3);
    v13 = v28;
  }
  if ( v9 < 0 )
  {
    if ( v6 )
    {
      v22 = *(_QWORD *)&SecurityQos[14].Length;
      v23 = *(_BYTE *)(v22 + 2) == 40 ? *(_DWORD *)(v22 + 20) : *(unsigned __int8 *)(v22 + 2);
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1268));
      if ( v23 >= 0x12 )
      {
        if ( v23 <= 0x13 )
        {
          RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
        }
        else if ( v23 == 32 )
        {
          RaidResumeAndRestartUnitQueue(v3);
        }
      }
    }
    if ( v13 )
      RaidUnitReleaseIrp((__int64)a2);
    goto LABEL_42;
  }
  return result;
}
