/*
 * XREFs of IopErrorLogThread @ 0x1408704E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlStringCchCopyNW @ 0x140303EF8 (RtlStringCchCopyNW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IopErrorLogGetEntry @ 0x1403BFB04 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x14055C5BC (IopErrorLogRequeueEntry.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407968F8 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwWriteErrorLogEntry @ 0x1408707C8 (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x14094E654 (IopErrorLogQueueRequest.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 IopErrorLogThread()
{
  __int64 v0; // rbx
  int v1; // eax
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rbx
  __int16 v4; // ax
  char v5; // r12
  UNICODE_STRING *p_P; // r15
  unsigned int v7; // r8d
  int v8; // eax
  int v9; // ecx
  void *v10; // rcx
  __int64 result; // rax
  __int64 v12; // r14
  const WCHAR *v13; // rdx
  __int16 v14; // r9
  unsigned int v15; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v23; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v25[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  v17 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_32:
      v15 = 0;
      result = IopErrorLogGetEntry();
      v12 = result;
      if ( !result )
        return result;
      v0 = *(_QWORD *)(result + 24);
      v1 = *(unsigned __int16 *)(result - 6) - 48;
      v21 = v0;
      LODWORD(v18) = v1;
      if ( v0 )
      {
        RtlInitUnicodeString(&v17, 0LL);
        if ( *(_QWORD *)(v0 + 64) )
          v17 = *(UNICODE_STRING *)(v0 + 56);
        Length = v17.Length;
        if ( v17.Length )
        {
LABEL_8:
          Buffer = &v17.Buffer[((unsigned __int64)Length >> 1) - 1];
          if ( *Buffer == 92 )
            goto LABEL_12;
          do
          {
            if ( Buffer == v17.Buffer )
              break;
            --Buffer;
          }
          while ( *Buffer != 92 );
          if ( *Buffer == 92 )
LABEL_12:
            ++Buffer;
          v4 = LOWORD(v17.Buffer) - (_WORD)Buffer;
          v17.Buffer = Buffer;
          Length += v4;
          v17.Length = Length;
          goto LABEL_14;
        }
        v15 = 0;
        if ( (int)ObQueryNameStringMode((char *)v0, (__int64)&v23, 0x110u, &v15, 0) >= 0 && v15 )
        {
          v17 = v23;
          goto LABEL_42;
        }
        v13 = &word_1408834C0;
      }
      else
      {
        v13 = L"Application Popup";
      }
      RtlInitUnicodeString(&v17, v13);
LABEL_42:
      Length = v17.Length;
      if ( v17.Length )
        goto LABEL_8;
      Buffer = v17.Buffer;
LABEL_14:
      v15 = 0;
      v5 = 0;
      p_P = (UNICODE_STRING *)&P;
      v7 = 272;
      if ( !*(_QWORD *)(v12 + 16) )
        goto LABEL_34;
      while ( 1 )
      {
        v8 = ObQueryNameStringMode(*(char **)(v12 + 16), (__int64)p_P, v7, &v15, 0);
        if ( v8 != -1073741820 )
          break;
        if ( v5 )
          goto LABEL_34;
        p_P = (UNICODE_STRING *)ExAllocatePool2(256LL, v15, 538996553LL);
        if ( !p_P )
          goto LABEL_34;
        v7 = v15;
        v5 = 1;
      }
      if ( v8 >= 0 && v15 )
        v20 = *p_P;
      else
LABEL_34:
        RtlInitUnicodeString(&v20, &word_1408834C0);
      pszDest[0] = 0;
      v25[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v20.Buffer )
        RtlStringCchCopyNW(v25, 0x100uLL, v20.Buffer, (unsigned __int64)v20.Length >> 1);
      if ( v5 == 1 )
        ExFreePoolWithTag(p_P, 0);
      if ( (unsigned int)(*(_DWORD *)(v12 + 52) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v14 = *(_WORD *)(v12 + 84);
        *(_WORD *)(v12 + 42) -= v14;
        v16 = v14;
        v19 = v12 + 120;
      }
      if ( (int)EtwWriteErrorLogEntry(v9, (int)v12 + 40, v18, (int)v12 + 32, (__int64)pszDest, (__int64)v25, v16, v19) < 0 )
      {
        IopErrorLogRequeueEntry((__int64 *)v12);
        return IopErrorLogQueueRequest();
      }
      _InterlockedExchangeAdd(&IopErrorLogAllocation, -*(unsigned __int16 *)(v12 - 6));
      v10 = *(void **)(v12 + 16);
      if ( v10 )
        ObfDereferenceObject(v10);
      if ( v21 )
        ObfDereferenceObject(*(PVOID *)(v12 + 24));
      ExFreePoolWithTag((PVOID)(v12 - 8), 0);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName((__int64)&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_32;
  }
  return IopErrorLogQueueRequest();
}
