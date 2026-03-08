/*
 * XREFs of PopTraceStandbyConnectivityUpdate @ 0x1408578B8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403A7BD0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetInitialize @ 0x140B46E8C (PopNetInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopTraceStandbyConnectivityUpdate(int a1, int a2)
{
  _UNKNOWN **v2; // rax
  int v3; // r9d
  int v4; // r10d
  REGHANDLE v5; // rbx
  int v7; // [rsp+38h] [rbp-39h] BYREF
  int v8; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v9; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  int *v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+60h] [rbp-11h]
  int v13; // [rsp+64h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-9h] BYREF
  int *v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  __int64 *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v25; // [rsp+D8h] [rbp+67h] BYREF
  int v26; // [rsp+E0h] [rbp+6Fh] BYREF

  v2 = &retaddr;
  v26 = a2;
  v25 = a1;
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = &v7;
      v8 = v3;
      v18 = &v8;
      v7 = v4;
      v21 = &v9;
      v16 = 4;
      v19 = 4;
      v9 = 0x1000000LL;
      v22 = 8;
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C03928,
                     (unsigned __int8 *)&word_14002E806,
                     0LL,
                     0LL,
                     5u,
                     &v14);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      UserData.Size = 4;
      v11 = &v26;
      v12 = 4;
      LOBYTE(v2) = EtwWrite(v5, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_UPDATE, 0LL, 2u, &UserData);
    }
  }
  return (char)v2;
}
