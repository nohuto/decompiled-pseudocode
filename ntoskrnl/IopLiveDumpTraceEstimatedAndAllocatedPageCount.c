/*
 * XREFs of IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405586DC
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x140949C84 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceEstimatedAndAllocatedPageCount(__int64 a1, ...)
{
  unsigned int v1; // edx
  char result; // al
  __int64 v3; // rcx
  int v4; // [rsp+48h] [rbp-79h] BYREF
  int v5; // [rsp+4Ch] [rbp-75h] BYREF
  int v6; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-69h] BYREF
  __int64 v8; // [rsp+68h] [rbp-59h]
  __int64 v9; // [rsp+70h] [rbp-51h]
  va_list v10; // [rsp+78h] [rbp-49h]
  __int64 v11; // [rsp+80h] [rbp-41h]
  va_list v12; // [rsp+88h] [rbp-39h]
  __int64 v13; // [rsp+90h] [rbp-31h]
  va_list v14; // [rsp+98h] [rbp-29h]
  __int64 v15; // [rsp+A0h] [rbp-21h]
  va_list v16; // [rsp+A8h] [rbp-19h]
  __int64 v17; // [rsp+B0h] [rbp-11h]
  int *v18; // [rsp+B8h] [rbp-9h]
  __int64 v19; // [rsp+C0h] [rbp-1h]
  __int64 v20; // [rsp+C8h] [rbp+7h]
  __int64 v21; // [rsp+D0h] [rbp+Fh]
  int *v22; // [rsp+D8h] [rbp+17h]
  __int64 v23; // [rsp+E0h] [rbp+1Fh]
  int *v24; // [rsp+E8h] [rbp+27h]
  __int64 v25; // [rsp+F0h] [rbp+2Fh]
  __int64 v26; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va; // [rsp+120h] [rbp+5Fh]
  __int64 v28; // [rsp+128h] [rbp+67h] BYREF
  va_list va1; // [rsp+128h] [rbp+67h]
  __int64 v30; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+6Fh]
  __int64 v32; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  va_list va4; // [rsp+140h] [rbp+7Fh] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  v1 = *(_DWORD *)(a1 + 80);
  v4 = (v1 >> 9) & 1;
  v5 = (v1 >> 10) & 1;
  v6 = (v1 >> 12) & 1;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    va_copy((va_list)UserData.Ptr, va);
    v9 = 8LL;
    v8 = v3 + 680;
    v11 = 8LL;
    va_copy(v10, va1);
    va_copy(v12, va2);
    va_copy(v14, va3);
    va_copy(v16, va4);
    v18 = &v4;
    v20 = v3 + 1144;
    v22 = &v5;
    v24 = &v6;
    v13 = 8LL;
    v15 = 8LL;
    v17 = 8LL;
    v19 = 4LL;
    v21 = 8LL;
    v23 = 4LL;
    v25 = 4LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_ESTIMATED_AND_ALLOCATED_MEMORY_PAGES,
             0LL,
             0,
             0LL,
             0LL,
             0xAu,
             &UserData);
  }
  return result;
}
