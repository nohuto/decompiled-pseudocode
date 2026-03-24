/*
 * XREFs of PopCreatePowerRequestObject @ 0x1406F5E38
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406F71C8 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140772488 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14032DC80 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406F3F38 (PopAcquirePowerRequestPushLock.c)
 *     PopStatsCreatePowerRequest @ 0x1406F5C14 (PopStatsCreatePowerRequest.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  unsigned int ProcessId; // r12d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  int v8; // r14d
  _DWORD *v9; // rbx
  char *v11; // [rsp+28h] [rbp-39h]
  int v12; // [rsp+38h] [rbp-29h]
  __int128 Buffer; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v14[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int128 v19; // [rsp+88h] [rbp+27h]
  void *v20; // [rsp+D0h] [rbp+6Fh] BYREF

  v14[1] = 0;
  v18 = 0;
  if ( *a2 )
  {
    v4 = 1;
    ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v4 = 0;
    ProcessId = 0;
  }
  v20 = 0LL;
  v6 = _InterlockedIncrement(&PopPowerRequestId);
  Buffer = 0LL;
  DWORD2(Buffer) = v6;
  PopAcquirePowerRequestPushLock(1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, &Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v12 = a2[12] + 56;
    v14[0] = 48;
    v15 = 0LL;
    v17 = 32;
    v16 = 0LL;
    v19 = 0LL;
    v8 = ObCreateObjectEx(0, PopPowerRequestObjectType, (int)v14, v4, v11, 152, v12, 0, &v20, 0LL);
    if ( v8 >= 0 )
    {
      v9 = v20;
      memset(v20, 0, 0x98uLL);
      v9[4] = PsGetCurrentProcessSessionId();
      v9[22] = ProcessId;
      *((_QWORD *)v9 + 10) = a2;
      v9[7] = v6;
      inserted[2] = v6;
      *(_QWORD *)inserted = v9;
      inserted = 0LL;
      PopStatsCreatePowerRequest((__int64)v9);
      *a1 = v9;
    }
    if ( inserted )
    {
      PopAcquirePowerRequestPushLock(1);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
