__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // r14d
  __int64 v10; // r15
  int v12; // edx
  int v13; // edi
  int v14; // r8d
  char *v15; // rbx
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
  __int64 v32; // [rsp+A0h] [rbp-9h]

  Object = 0LL;
  v9 = a3;
  v10 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
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
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v13 >= 0 )
  {
    v15 = (char *)Object;
    if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
    {
      Handle = v15;
      p_Handle = &Handle;
      v32 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C0296A2F, 0, 0, 3u, &v30);
    }
    if ( *((_DWORD *)v15 + 264) )
      Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v29, 0);
    v16 = v15 + 104;
    RIMLockExclusive(v15 + 104);
    if ( v15[81] || v15[82] )
    {
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v17) = 0;
      }
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
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      goto LABEL_25;
    }
    Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    rimHandleAnyPnpRemovePendingDevices(v15);
    Handle = 0LL;
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v19) = 0;
      }
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
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          a4);
      }
      goto LABEL_25;
    }
    v21 = v15 + 760;
    RIMLockExclusive(v15 + 760);
    if ( *((_QWORD *)v15 + 104) )
      rimIssueReads(v15);
    if ( !v15[776] )
    {
      v15[776] = 1;
      *((_QWORD *)v15 + 105) = Handle;
      *((_QWORD *)v15 + 108) = a6;
      *((_QWORD *)v15 + 107) = a7;
      *((_QWORD *)v15 + 109) = a8;
      *((_QWORD *)v15 + 110) = v10;
      *((_DWORD *)v15 + 222) = v9;
      *((_DWORD *)v15 + 212) = a5;
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = (char *)Object;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          (_DWORD)gRimLog,
          4,
          v26,
          86,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads(v15);
      v13 = rimCompleteReads((struct RawInputManagerObject *)v15);
      goto LABEL_24;
    }
    if ( *((_QWORD *)v15 + 104) )
    {
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
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
        goto LABEL_58;
      v25 = 87;
    }
    v15 = (char *)Object;
    WPP_RECORDER_AND_TRACE_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v23,
      (_DWORD)gRimLog,
      3,
      v26,
      v25,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      (char)Object,
      a4,
      (char)Handle,
      (char)KeGetCurrentThread());
LABEL_58:
    ZwClose(Handle);
LABEL_24:
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
LABEL_25:
    *((_QWORD *)v16 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v29);
    ObfDereferenceObject(v15);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      91,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
