/*
 * XREFs of IopLiveDumpTraceDumpFileWriteEnd @ 0x14055859C
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceDumpFileWriteEnd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v5; // rcx
  int v6; // r8d
  _QWORD *v7; // rdx
  const EVENT_DESCRIPTOR *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h] BYREF
  __int64 v13; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  __int64 *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  __int64 *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  __int64 *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  __int64 *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]
  __int64 v26; // [rsp+E8h] [rbp+6Fh] BYREF
  int v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v27 = a4;
  v26 = a2;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v7 = *(_QWORD **)(v5 + 560);
    v8 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_END;
    if ( v6 )
      v8 = &LIVEDUMP_EVENT_WRITE_DEFERRED_DUMPDATA_TO_FILE_END;
    if ( v27 < 0 )
    {
      v11 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v9 = 0LL;
    }
    else
    {
      v11 = v7[500];
      v12 = v7[1028];
      v9 = v7[1029] << 12;
      v10 = v11 - v9 - v12;
    }
    v13 = v9;
    UserData.Ptr = (ULONGLONG)&v27;
    v14 = v10;
    v16 = &v11;
    v18 = &v12;
    v20 = &v13;
    v22 = &v14;
    v24 = &v26;
    *(_QWORD *)&UserData.Size = 4LL;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 8LL;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v8, 0LL, 0, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
