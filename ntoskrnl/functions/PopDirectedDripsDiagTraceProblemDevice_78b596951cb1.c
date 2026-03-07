signed __int32 __fastcall PopDirectedDripsDiagTraceProblemDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  REGHANDLE v5; // rdi
  int v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  v8 = a1;
  v7 = a3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  v4 = *(_QWORD *)(v8 + 776);
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 4LL * v7 + 192);
    if ( !v4 )
      goto LABEL_8;
    PopDirectedDripsDiagInsertErrorRecord(a2, v4, v7);
  }
  else if ( !v4 )
  {
    goto LABEL_8;
  }
  *(_DWORD *)(v4 + 152) |= 1 << v7;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = v4 + 148;
      UserData.Size = 4;
      v10 = &v8;
      v13 = &v7;
      v14 = 4;
      v11 = 8;
      EtwWrite(v5, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE, 0LL, 3u, &UserData);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
