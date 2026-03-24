/*
 * XREFs of rimDeviceResetApc @ 0x1C00AE420
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00AE4EC (RIMDeliverDeviceResetRequest.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  HANDLE *v6; // rsi
  int v7; // eax
  PVOID *v8; // [rsp+30h] [rbp-58h] BYREF
  char v9[8]; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v9, 1, 0);
  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
  {
    v13 = 0;
    v11 = (PVOID *)&v8;
    v8 = ApcContext;
    v12 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024BA90, (unsigned __int8 *)dword_1C021DCDB, 0LL, 0LL, 3u, &v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      v5,
      1,
      12,
      (__int64)&WPP_a1cd941ed8813a57445e216c28be9b1b_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v6 = (HANDLE *)ApcContext[42];
    RIMLockExclusive((__int64)(v6 + 13));
    v7 = *((_DWORD *)ApcContext + 46);
    if ( (v7 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v7 | 0x80000;
      ZwSetEvent(v6[48], 0LL);
    }
    RIMDeliverDeviceResetRequest(ApcContext);
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v9);
}
