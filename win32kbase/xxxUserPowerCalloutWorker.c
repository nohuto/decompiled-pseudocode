__int64 __fastcall xxxUserPowerCalloutWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagPOWERREQUEST *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _WIN32_POWEREVENT_PARAMETERS *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD InputBuffer[4]; // [rsp+38h] [rbp-39h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-29h]
  struct _KTHREAD *v27; // [rsp+50h] [rbp-21h]
  __int64 v28; // [rsp+58h] [rbp-19h]
  __int128 v29; // [rsp+60h] [rbp-11h] BYREF
  __int64 v30; // [rsp+70h] [rbp-1h]
  __int128 v31; // [rsp+78h] [rbp+7h] BYREF
  __int64 v32; // [rsp+88h] [rbp+17h]
  _OWORD v33[2]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v34; // [rsp+B0h] [rbp+3Fh]

  v4 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v5 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || qword_1C02D6B90 && (int)qword_1C02D6B90(-2LL, 7LL, &v31, 24LL) < 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v4 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 720) = CurrentThread;
  while ( 1 )
  {
    v9 = UnqueuePowerRequest();
    if ( !v9 )
      break;
    v12 = 0;
    if ( v5 )
    {
      v29 = 0LL;
      v30 = 0LL;
      if ( *((_BYTE *)v9 + 44) && !*((_QWORD *)v9 + 8) )
      {
        v13 = SGDGetUserSessionState(v8, v7, v10, v11);
        InputBuffer[1] = 0;
        InputBuffer[3] = 0;
        InputBuffer[2] = 0;
        v28 = *(unsigned int *)(v13 + 3224);
        InputBuffer[0] = 88;
        v27 = KeGetCurrentThread();
        CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17);
        LOBYTE(v12) = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x28u, 0LL, 0) >= 0;
      }
      if ( qword_1C02D65C8 )
        qword_1C02D65C8(v9, &v29, CancelPowerRequest);
      *(_QWORD *)(SGDGetUserSessionState(v8, v7, v10, v11) + 672) = v9;
      v18 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v9 + 8);
      if ( v18 )
        v19 = xxxUserPowerEventCalloutWorker(v18);
      else
        v19 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v9 + 10) = v19;
      *(_QWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 672) = 0LL;
      if ( qword_1C02D65D8 )
        qword_1C02D65D8(&v29);
    }
    if ( *((_BYTE *)v9 + 44) )
    {
      if ( v12 )
      {
        memset(v33, 0, sizeof(v33));
        v34 = 0LL;
        DWORD2(v33[0]) = 1;
        LODWORD(v33[0]) = 88;
        ZwPowerInformation(SystemPowerStateLogging|0x40, v33, 0x28u, 0LL, 0);
      }
      KeSetEvent((PRKEVENT)((char *)v9 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v9, *((unsigned int *)v9 + 10));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v9);
    }
  }
  if ( v4 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C02D6B90 )
    qword_1C02D6B90(-2LL, 9LL, &v31, 24LL);
  return 1LL;
}
