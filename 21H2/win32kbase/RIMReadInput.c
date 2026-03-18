/*
 * XREFs of RIMReadInput @ 0x1C0043300
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C005DB20 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C00C4430 (NtRIMReadInput.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0044DC0 (rimIssueReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0048DA8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C005EF60 (rimConvertUserToKernelEventHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C00BADD8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // r14d
  __int64 v10; // r15
  int v12; // edx
  int v13; // edi
  int v14; // r8d
  int *v15; // rbx
  char *v16; // r13
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  char *v21; // rsi
  int v22; // edx
  int v23; // r8d
  __int16 v25; // cx
  int v26; // [rsp+28h] [rbp-81h]
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  char v29[8]; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+78h] [rbp-31h] BYREF
  HANDLE *p_Handle; // [rsp+98h] [rbp-11h]
  int v32; // [rsp+A0h] [rbp-9h]
  int v33; // [rsp+A4h] [rbp-5h]

  Object = 0LL;
  v9 = a3;
  v10 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      85,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v13 >= 0 )
  {
    v15 = (int *)Object;
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
    {
      v33 = 0;
      p_Handle = &Handle;
      Handle = v15;
      v32 = 8;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025D548, 0, 0, 3u, &v30);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v29, v15[272]);
    v16 = (char *)(v15 + 26);
    RIMLockExclusive((__int64)(v15 + 26));
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v15) )
    {
      v13 = -1073741637;
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (_DWORD)gRimLog,
          3,
          1,
          90,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      goto LABEL_22;
    }
    rimHandleAnyPnpRemovePendingDevices();
    Handle = 0LL;
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          (_DWORD)gRimLog,
          3,
          1,
          89,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          a4);
      }
      goto LABEL_22;
    }
    v21 = (char *)(v15 + 198);
    RIMLockExclusive((__int64)(v15 + 198));
    if ( *((_QWORD *)v15 + 108) )
      rimIssueReads(v15);
    if ( !*((_BYTE *)v15 + 808) )
    {
      *((_BYTE *)v15 + 808) = 1;
      *((_QWORD *)v15 + 109) = Handle;
      *((_QWORD *)v15 + 112) = a6;
      *((_QWORD *)v15 + 111) = a7;
      *((_QWORD *)v15 + 113) = a8;
      *((_QWORD *)v15 + 114) = v10;
      v15[230] = v9;
      v15[220] = a5;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = (int *)Object;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          (_DWORD)gRimLog,
          4,
          v26,
          86,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads(v15);
      v13 = rimCompleteReads((struct RawInputManagerObject *)v15);
      goto LABEL_21;
    }
    if ( *((_QWORD *)v15 + 108) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v25 = 88;
    }
    else
    {
      v13 = -1073740682;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v25 = 87;
    }
    v15 = (int *)Object;
    WPP_RECORDER_AND_TRACE_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v23,
      (_DWORD)gRimLog,
      3,
      v26,
      v25,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      (char)Object,
      a4,
      (char)Handle,
      (char)KeGetCurrentThread());
LABEL_55:
    ZwClose(Handle);
LABEL_21:
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
LABEL_22:
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v29);
    ObfDereferenceObject(v15);
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      91,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
