/*
 * XREFs of RtlReportExceptionHelper @ 0x1800DCED0
 * Callers:
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 *     RtlpPossibleDeadlock @ 0x1800E90F8 (RtlpPossibleDeadlock.c)
 * Callees:
 *     WerpProcessId @ 0x180061E0C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009DC60 (ZwDuplicateObject.c)
 *     ReportExceptionInternal @ 0x1800DC7F8 (ReportExceptionInternal.c)
 *     WerpCreateCompletionEvent @ 0x1800DD8B0 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800DD914 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDB08 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800DDB48 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800DDB80 (WerpWaitForCrashReporting.c)
 */

__int64 __fastcall RtlReportExceptionHelper(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  _QWORD *v12; // rcx
  char *v13; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // [rsp+40h] [rbp-88h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-60h] BYREF
  HANDLE v23; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]
  _QWORD v26[4]; // [rsp+88h] [rbp-40h] BYREF

  v25 = a4;
  v4 = a3;
  v5 = a2;
  v23 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  TargetHandle = 0LL;
  v19 = 0LL;
  v7 = 0;
  BaseAddress = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL, a2, a3);
  if ( (int)WerpCreateCompletionEvent(&v20, a2, a3) < 0 )
  {
    v20 = 0LL;
  }
  else
  {
    v26[0] = v20;
    v7 = 1;
  }
  v8 = WerpCreateCrashDataSection(&Handle, &BaseAddress);
  if ( v8 >= 0 )
  {
    v26[v7] = Handle;
    v9 = (unsigned int)(v7 + 1);
    v17 = v9;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      v26[v9] = TargetHandle;
      v9 = (unsigned int)(v9 + 1);
      v17 = v9;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v19,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      v19 = 0LL;
    }
    else
    {
      v26[v9] = v19;
      v17 = v9 + 1;
    }
    v10 = WerpProcessId((void *)0xFFFFFFFFFFFFFFFFLL);
    v24 = v10;
    v11 = WerpThreadId(-2LL);
    v12 = BaseAddress;
    *(_DWORD *)BaseAddress = 248;
    v12[21] = 1LL;
    *((_DWORD *)v12 + 1) = v10;
    *((_DWORD *)v12 + 2) = v11;
    v12[23] = TargetHandle;
    v12[24] = v19;
    v12[26] = v20;
    v12[28] = 0LL;
    *((_DWORD *)v12 + 58) = -1073741823;
    *((_DWORD *)v12 + 59) = v4;
    v13 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v14 = v13 + 416;
    *((_QWORD *)v13 + 31) = 1LL;
    *((_QWORD *)v13 + 32) = 1LL;
    *(_OWORD *)(v13 + 264) = *(_OWORD *)a1;
    *(_OWORD *)(v13 + 280) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v13 + 296) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v13 + 312) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v13 + 328) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v13 + 344) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v13 + 360) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v13 + 376) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v13 + 392) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v13 + 51) = *(_QWORD *)(a1 + 144);
    v15 = 9LL;
    do
    {
      *v14 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14 += 8;
      *(v14 - 1) = v5[7];
      v5 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *v5;
    v14[1] = v5[1];
    v14[2] = v5[2];
    v14[3] = v5[3];
    v14[4] = v5[4];
    v8 = ReportExceptionInternal(v24, Handle, v26, v17, v4, &v23);
    if ( v8 >= 0 )
    {
      if ( !v23 || (v8 = WerpWaitForCrashReporting(0LL, v20, v23, v25), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( Handle )
      NtClose(Handle);
    if ( v23 )
      NtClose(v23);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0LL;
  }
  if ( v20 )
    NtClose(v20);
  return (unsigned int)v8;
}
