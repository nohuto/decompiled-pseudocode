/*
 * XREFs of TtmiLogProximityBlockedRequest @ 0x1409A5AB4
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1409A84C4 (TtmiSetPendingOnOffRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall TtmiLogProximityBlockedRequest(char a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int ProcessSessionId; // eax
  char v8; // [rsp+38h] [rbp-39h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  int v10; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-29h] BYREF
  int *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  char *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  int *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  _DWORD *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  int *v24; // [rsp+A8h] [rbp+37h]
  _DWORD v25[2]; // [rsp+B0h] [rbp+3Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v27; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v27 = a3;
  if ( (unsigned int)dword_140D53948 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140D53948, 1LL);
    if ( (_BYTE)v3 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v25[1] = 0;
      v9 = ProcessSessionId;
      v12 = &v9;
      v15 = &v8;
      v18 = &v10;
      v21 = v25;
      v24 = &v27;
      v13 = 4;
      v19 = 4;
      v25[0] = 4;
      v8 = a1;
      v16 = 1;
      v10 = a2;
      v22 = 2;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140D53948,
                     (unsigned __int8 *)word_1400333CA,
                     0LL,
                     0LL,
                     7u,
                     &v11);
    }
  }
  return (char)v3;
}
