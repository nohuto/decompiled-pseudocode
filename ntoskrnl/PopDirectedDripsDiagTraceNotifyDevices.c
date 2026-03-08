/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x14059E404
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x140980BC4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDirectedDripsDiagTraceNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // edi
  _BYTE *v5; // rsi
  PVOID *v6; // rdx
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // r8
  PVOID *v11; // r9
  unsigned int v12; // r10d
  unsigned __int64 v13; // r11
  signed __int64 v14; // rbx
  REGHANDLE v15; // rbx
  int v17; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  int *v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+70h] [rbp-1h]
  int v21; // [rsp+74h] [rbp+3h]
  int *v22; // [rsp+78h] [rbp+7h]
  int v23; // [rsp+80h] [rbp+Fh]
  int v24; // [rsp+84h] [rbp+13h]
  __int64 *v25; // [rsp+88h] [rbp+17h]
  int v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+94h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v29; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v30 = a3;
  v29 = a2;
  v4 = a1;
  if ( a2 >= 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v5 = (_BYTE *)MEMORY[0xFFFFF78000000008];
    v6 = (PVOID *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext != &PopDirectedDripsDiagSessionContext )
    {
      do
      {
        if ( (_BYTE)v4 )
        {
          v7 = v6[6];
          v8 = 7LL;
          v6[6] = 0LL;
          v9 = 10LL;
        }
        else
        {
          v7 = v6[15];
          v8 = 16LL;
          v6[15] = 0LL;
          v9 = 19LL;
        }
        v10 = (char *)&v6[v9];
        v11 = &v6[v8];
        if ( *((_DWORD *)v6 + 9) == dword_140C38CC8 && v7 && ((_DWORD)v6[5] & 0x100) == 0 )
        {
          v12 = 0;
          v13 = v5 - v7;
          v14 = (char *)PopFxAccountingBucketLimits - v10;
          do
          {
            if ( v13 >= *(_QWORD *)&v10[v14] && v13 < PopFxAccountingBucketLimits[v12 + 1] )
            {
              ++*(_DWORD *)v11;
              *(_QWORD *)v10 += v13;
            }
            ++v12;
            v11 = (PVOID *)((char *)v11 + 4);
            v10 += 8;
          }
          while ( v12 < 5 );
          if ( (_BYTE)v4 )
            v6[15] = v5;
        }
        v6 = (PVOID *)*v6;
      }
      while ( v6 != &PopDirectedDripsDiagSessionContext );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  if ( PopDiagHandleRegistered )
  {
    v15 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v17 = v4;
      v19 = &v17;
      v22 = &v29;
      v25 = &v30;
      UserData.Size = 1;
      v20 = 4;
      v23 = 4;
      v26 = 8;
      LOBYTE(v3) = EtwWriteEx(v15, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
