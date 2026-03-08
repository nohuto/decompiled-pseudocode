/*
 * XREFs of EtwpEventWriteProviderEnabled @ 0x1409E0990
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteProviderEnabled(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        unsigned __int16 *a4,
        ULONGLONG a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h]
  int v12; // [rsp+48h] [rbp-39h]
  int v13; // [rsp+4Ch] [rbp-35h]
  __int64 *v14; // [rsp+50h] [rbp-31h]
  __int64 v15; // [rsp+58h] [rbp-29h]
  char *v16; // [rsp+60h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-19h]
  char *v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  char *v20; // [rsp+80h] [rbp-1h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  char *v22; // [rsp+90h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+17h]

  UserData.Ptr = a5;
  v11 = *((_QWORD *)a4 + 1);
  v12 = *a4;
  v14 = &EtwpNull;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  *(_QWORD *)&UserData.Size = 16LL;
  v13 = 0;
  v15 = 2LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 1LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, 7u, &UserData);
}
