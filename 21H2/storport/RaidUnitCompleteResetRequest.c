/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C004A680
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0006CBC (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C0007718 (RaidXrbDeallocateResources.c)
 *     RaidUnitReleaseIrp @ 0x1C0007844 (RaidUnitReleaseIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DE8 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0049EAC (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004A124 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004A948 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rdi
  IRP *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v7; // eax
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  PEVENT_DATA_DESCRIPTOR v15; // [rsp+28h] [rbp-81h]
  char v16; // [rsp+30h] [rbp-79h] BYREF
  char v17; // [rsp+31h] [rbp-78h] BYREF
  char v18; // [rsp+32h] [rbp-77h] BYREF
  char v19; // [rsp+33h] [rbp-76h] BYREF
  int v20; // [rsp+34h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-69h] BYREF
  __int64 v22; // [rsp+60h] [rbp-49h]
  int v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+6Ch] [rbp-3Dh]
  __int64 v25; // [rsp+70h] [rbp-39h]
  int v26; // [rsp+78h] [rbp-31h]
  int v27; // [rsp+7Ch] [rbp-2Dh]
  int *v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  char *v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  char *v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+ACh] [rbp+3h]
  char *v37; // [rsp+B0h] [rbp+7h]
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]
  char *v40; // [rsp+C0h] [rbp+17h]
  int v41; // [rsp+C8h] [rbp+1Fh]
  int v42; // [rsp+CCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(IRP **)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 224);
  v5 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v5 == 40 )
  {
    v6 = *(_DWORD *)(v1 + 60);
    v7 = 40;
    v8 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v1 + 16);
    v8 = *(unsigned __int8 *)(v1 + 2);
    v7 = v8;
  }
  if ( v8 != 16 )
  {
    if ( (_BYTE)v5 == 40 )
      v7 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1268));
    if ( v7 >= 0x12 )
    {
      if ( v7 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v4 + 24));
      }
      else if ( v7 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v4);
      }
    }
  }
  v9 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v9 == 40 )
    v9 = *(_DWORD *)(v1 + 20);
  if ( v9 == 16 && (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
  {
    v12 = *(_QWORD *)(v4 + 24);
    v24 = 0;
    v27 = 0;
    v23 = 16;
    v26 = 16;
    v22 = v12 + 5192;
    v25 = v4 + 1976;
    v13 = *(_DWORD *)(v12 + 56);
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v20 = v13;
    v28 = &v20;
    v16 = *(_BYTE *)(v4 + 96);
    v31 = &v16;
    v17 = *(_BYTE *)(v4 + 97);
    v34 = &v17;
    v18 = *(_BYTE *)(v4 + 98);
    v37 = &v18;
    v29 = 4;
    v32 = v11;
    v35 = v11;
    v38 = v11;
    LOBYTE(v13) = *(_BYTE *)(v1 + 3);
    v42 = 0;
    v19 = v13 & 0x3F;
    v40 = &v19;
    v41 = v11;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_1C005DD09, v10, v11, 9u, &v21);
  }
  RaidUnitEndDeviceBusy(v4, v3);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v4, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  v3->IoStatus.Information = v6;
  RaidUnitReleaseIrp((__int64)v3);
  if ( v8 == 16 )
  {
    RaidXrbDeallocateResources(a1, 1);
    StorFreeContiguousIoResources(*(_QWORD *)(v4 + 24), a1 - 32);
  }
  else
  {
    *(_DWORD *)(v4 + 1728) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v15) = v3->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Au,
      (__int64)&WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
      v4,
      v3,
      v15);
  }
  if ( (qword_1C0069310 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v4 + 24), (__int64)v3, v1);
  return RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
}
