/*
 * XREFs of EtwpEventWriteTemplateMaxFileSize @ 0x1409E0D34
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x140691270 (EtwpFlushBufferToLogfile.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateMaxFileSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v11; // [rsp+50h] [rbp-39h]
  __int64 v12; // [rsp+58h] [rbp-31h]
  __int64 v13; // [rsp+60h] [rbp-29h]
  int v14; // [rsp+68h] [rbp-21h]
  int v15; // [rsp+6Ch] [rbp-1Dh]
  __int64 *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  int *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  char *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  char *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v13 = *((_QWORD *)a5 + 1);
  v14 = *a5;
  v18 = &v9;
  v20 = &a7;
  v22 = &a8;
  UserData.Reserved = 0;
  v11 = &EtwpNull;
  v15 = 0;
  v16 = &EtwpNull;
  v9 = -1073741432;
  v12 = 2LL;
  v17 = 2LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 8LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED, 0LL, 7u, &UserData);
}
