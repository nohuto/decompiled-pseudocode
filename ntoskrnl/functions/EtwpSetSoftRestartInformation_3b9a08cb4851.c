__int64 __fastcall EtwpSetSoftRestartInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdi
  __int64 Pool2; // rax
  char v12; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v2 = a2;
  DestinationString = 0LL;
  v14 = 0LL;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225659LL;
  if ( v2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *((_QWORD *)&v14 + 1) = a1 + 18;
  LOWORD(v14) = v2 - 18;
  WORD1(v14) = v2 - 18;
  if ( (_WORD)v2 == 18 || (result = EtwpCaptureString((unsigned __int16 *)&v14, &DestinationString), (int)result >= 0) )
  {
    v12 = *(_BYTE *)(a1 + 16);
    v5 = (unsigned __int16)*(_QWORD *)(a1 + 8);
    if ( v5 == 0xFFFF )
      v5 = *(unsigned __int8 *)(EtwpHostSiloState + 4232);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v5, 1);
    v8 = (__int64)v7;
    if ( !v7 )
    {
      v9 = -1073741162;
      goto LABEL_32;
    }
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v7);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(v8 + 1088);
      if ( !v12 )
      {
        if ( v10 && *(_BYTE *)(v10 + 32) )
        {
          EtwpCancelMemoryPreservation(v8);
          RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 16));
          *(_BYTE *)(v10 + 32) = 0;
          v9 = 0;
        }
        else
        {
          v9 = -1073741054;
        }
        goto LABEL_32;
      }
      if ( !v10 )
      {
        Pool2 = ExAllocatePool2(256LL, 40LL, 1266119749LL);
        v10 = Pool2;
        if ( !Pool2 )
        {
          v9 = -1073741801;
          goto LABEL_32;
        }
        *(_QWORD *)(v8 + 1088) = Pool2;
      }
      if ( *(_BYTE *)(v10 + 32) )
      {
        v9 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x400) == 0 || *(_DWORD *)(v8 + 300) == 1 || (*(_DWORD *)(v8 + 4) & 0xFFF) != 0 )
        {
          v9 = -1073741637;
        }
        else
        {
          *(UNICODE_STRING *)(v10 + 16) = DestinationString;
          DestinationString.Buffer = 0LL;
          *(_BYTE *)(v10 + 32) = 1;
          v9 = 0;
          if ( EtwpKsrPrepared )
          {
            v9 = EtwpPreserveLogger(v8);
            if ( v9 < 0 )
            {
              *(_BYTE *)(v10 + 32) = 0;
              RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 16));
            }
          }
        }
      }
      else
      {
        v9 = -1073741672;
      }
    }
LABEL_32:
    if ( v8 )
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    RtlFreeUnicodeString(&DestinationString);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)v9;
  }
  return result;
}
