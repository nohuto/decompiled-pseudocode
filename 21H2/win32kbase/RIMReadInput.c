/*
 * XREFs of RIMReadInput @ 0x1C00532C0
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0087FF0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C00B3B90 (NtRIMReadInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     rimCompleteReads @ 0x1C0053548 (rimCompleteReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0054178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimIssueReads @ 0x1C0054368 (rimIssueReads.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0055C88 (WPP_RECORDER_SF_qqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0055D50 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0055E04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r13
  int v12; // edx
  int v13; // edi
  struct RawInputManagerObject *v14; // rbx
  char *v15; // r15
  int v16; // edx
  int v17; // edx
  char *v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v23; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  struct RawInputManagerObject *v26; // [rsp+60h] [rbp-49h] BYREF
  char v27[8]; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+70h] [rbp-39h] BYREF
  struct RawInputManagerObject **v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+98h] [rbp-11h]
  int v31; // [rsp+9Ch] [rbp-Dh]

  Object = 0LL;
  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 76, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v13 >= 0 )
  {
    v14 = (struct RawInputManagerObject *)Object;
    if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
    {
      v31 = 0;
      v29 = &v26;
      v26 = v14;
      v30 = 8;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C021B795, 0, 0, 3u, &v28);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v27, 1, 0);
    v15 = (char *)v14 + 104;
    RIMLockExclusive((__int64)v14 + 104);
    if ( !bRimDispositionNormal(v14) )
    {
      v13 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 81, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_14;
    }
    rimHandleAnyPnpRemovePendingDevices();
    Handle = 0LL;
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v17, 1, 80, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, a4);
      }
      goto LABEL_14;
    }
    v18 = (char *)v14 + 568;
    RIMLockExclusive((__int64)v14 + 568);
    if ( *((_QWORD *)v14 + 80) )
      rimIssueReads(v14);
    if ( !*((_BYTE *)v14 + 584) )
    {
      *((_BYTE *)v14 + 584) = 1;
      *((_QWORD *)v14 + 81) = Handle;
      *((_QWORD *)v14 + 84) = a6;
      *((_QWORD *)v14 + 83) = a7;
      *((_QWORD *)v14 + 85) = a8;
      *((_QWORD *)v14 + 86) = v10;
      *((_DWORD *)v14 + 174) = a3;
      *((_DWORD *)v14 + 164) = a5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = (struct RawInputManagerObject *)Object;
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_qqqq(
          v20,
          v19,
          v21,
          77,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads(v14);
      v13 = rimCompleteReads(v14);
      goto LABEL_13;
    }
    if ( *((_QWORD *)v14 + 80) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 79;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = -1073740682;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 78;
LABEL_25:
        LOBYTE(v19) = 3;
        v14 = (struct RawInputManagerObject *)Object;
        WPP_RECORDER_SF_qqqq(
          v20,
          v19,
          v21,
          v23,
          (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
    }
    ZwClose(Handle);
LABEL_13:
    *((_QWORD *)v18 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
LABEL_14:
    *((_QWORD *)v15 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v27);
    ObfDereferenceObject(v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 82, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v13);
  }
  return (unsigned int)v13;
}
