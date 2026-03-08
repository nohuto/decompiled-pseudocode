/*
 * XREFs of PopTraceBootError @ 0x140592D54
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopTraceBootError()
{
  int *v0; // r9
  int v1; // [rsp+30h] [rbp-49h] BYREF
  int v2; // [rsp+34h] [rbp-45h] BYREF
  int v3; // [rsp+38h] [rbp-41h] BYREF
  int v4; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v5; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-29h] BYREF
  int *v7; // [rsp+70h] [rbp-9h]
  __int64 v8; // [rsp+78h] [rbp-1h]
  int *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  int *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  int *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  __int64 *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL) )
    {
      v1 = *v0;
      v8 = 4LL;
      v7 = &v1;
      v2 = v0[1];
      v9 = &v2;
      v3 = v0[2];
      v11 = &v3;
      v4 = v0[3];
      v13 = &v4;
      v5 = v0[4];
      v15 = &v5;
      v10 = 4LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&byte_14002E6E7,
        0LL,
        0LL,
        7u,
        &v6);
    }
  }
}
