void __fastcall __noreturn PopDirectedDripsWorkerRoutine(volatile __int64 *StartContext)
{
  __int64 v2; // rdi
  REGHANDLE v3; // rsi
  int v4; // ecx
  __int64 v5; // rdx
  int v6; // r14d
  signed __int32 v7; // eax
  signed __int32 v8; // esi
  REGHANDLE v9; // r15
  int v10; // ecx
  char v11; // [rsp+38h] [rbp-79h] BYREF
  int v12; // [rsp+3Ch] [rbp-75h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-71h] BYREF
  int v14; // [rsp+50h] [rbp-61h] BYREF
  signed __int32 v15; // [rsp+58h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  __int64 *v18; // [rsp+78h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-31h]
  __int64 *v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+98h] [rbp-19h] BYREF
  signed __int32 *v23; // [rsp+A8h] [rbp-9h]
  __int64 v24; // [rsp+B0h] [rbp-1h]
  int *v25; // [rsp+B8h] [rbp+7h]
  __int64 v26; // [rsp+C0h] [rbp+Fh]
  _DWORD *v27; // [rsp+C8h] [rbp+17h]
  __int64 v28; // [rsp+D0h] [rbp+1Fh]

LABEL_1:
  while ( KeWaitForSingleObject((PVOID)(StartContext + 3), Executive, 0, 0, 0LL) )
    ;
  v2 = _InterlockedExchange64(StartContext + 1, 0LL);
  v16 = v2;
  v11 = 0;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER) )
    {
      v11 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v19 = 8LL;
      v18 = &v16;
      v21 = 8LL;
      v20 = &PopWnfCsEnterScenarioId;
      EtwWrite(v3, &POP_ETW_EVENT_DIRECTED_DRIPS_WORKER, 0LL, 3u, &UserData);
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v2 )
        goto LABEL_1;
      if ( (_DWORD)v2 )
      {
        _BitScanForward((unsigned int *)&v4, v2);
        v13[1] = v4;
      }
      else
      {
        _BitScanForward((unsigned int *)&v4, HIDWORD(v2));
        v13[2] = v10;
        LOBYTE(v4) = v10 + 32;
      }
      v5 = 1LL << v4;
      v2 &= ~(1LL << v4);
      if ( 1LL << v4 != 2 )
        break;
      v6 = *((_DWORD *)StartContext + 32);
      _m_prefetchw((char *)StartContext + 132);
      v7 = _InterlockedOr((volatile signed __int32 *)StartContext + 33, 0);
      v8 = v7;
      if ( v6 != v7 )
      {
        v15 = v7;
        v14 = v6;
        v13[0] = 0;
        v12 = 0;
        if ( PopDiagHandleRegistered )
        {
          v9 = PopDiagHandle;
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED) )
          {
            v12 = v8 & (v8 ^ v6);
            v13[0] = v6 & (v8 ^ v6);
            *(_QWORD *)&v22.Size = 4LL;
            v22.Ptr = (ULONGLONG)&v14;
            v24 = 4LL;
            v23 = &v15;
            v25 = &v12;
            v27 = v13;
            v26 = 4LL;
            v28 = 4LL;
            EtwWrite(v9, &POP_ETW_EVENT_DIRECTED_DRIPS_DISENGAGE_MASK_CHANGED, 0LL, 4u, &v22);
          }
        }
        *((_DWORD *)StartContext + 32) = v8;
        if ( *((_BYTE *)StartContext + 144) )
        {
          if ( v6 )
          {
            if ( !v8 )
LABEL_26:
              PopDirectedDripsSuspendDevices(StartContext);
          }
          else
          {
            PopDirectedDripsResumeDevices(StartContext, 0LL);
          }
        }
      }
    }
    switch ( v5 )
    {
      case 0x400LL:
        PopDirectedDripsHandleResiliencyNotification(StartContext);
        break;
      case 0x800LL:
        if ( *((_BYTE *)StartContext + 144) )
        {
          LOBYTE(v5) = 1;
          PopDirectedDripsResumeDevices(StartContext, v5);
          goto LABEL_26;
        }
        break;
      case 0x800000000LL:
        PopDeepSleepClearDisengageReason(8u);
        break;
    }
  }
}
