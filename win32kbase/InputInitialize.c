__int64 __fastcall InputInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 (**v18)(void); // rbx
  __int64 v19; // rax
  int InputSensorThreadingModel; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int *v26; // rax
  void *v27; // rcx
  char v28; // [rsp+50h] [rbp+18h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v28, 1LL, a3);
  gbInputInitialized = 1;
  v5 = InitializeInputGlobals();
  if ( v5 >= 0 )
  {
    v8 = SGDGetUserSessionState(v4, v3, v6, v7);
    *(_QWORD *)(v8 + 3232) = 0LL;
    *(_QWORD *)(v8 + 3240) = 0LL;
    *(_BYTE *)(SGDGetUserSessionState(v10, v9, v11, v12) + 3256) = 1;
    v17 = 0;
    v18 = (__int64 (**)(void))(SGDGetUserSessionState(v14, v13, v15, v16) + 3312);
    do
    {
      if ( v17 != *(_DWORD *)v18 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 70LL);
      v19 = (*(v18 - 4))();
      *(v18 - 1) = (__int64 (*)(void))v19;
      if ( !v19 )
      {
        v5 = -1073741823;
        goto LABEL_13;
      }
      InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v18);
      *((_DWORD *)v18 - 4) = InputSensorThreadingModel;
      if ( !InputSensorThreadingModel )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
      ++v17;
      v18 += 6;
    }
    while ( v17 < 3 );
    v5 = CTouchProcessor::Initialize();
    if ( v5 >= 0 )
    {
      v5 = DeviceAcceleratorInitialize();
      if ( v5 >= 0 )
      {
        if ( (unsigned __int8)ShouldEnableInputVirtualization() )
        {
          v26 = (int *)SGDGetUserSessionState(v22, v21, v23, v24);
          gbInputVirtualizationEnabled = 1;
          gInputVirtualizationSessionId = *v26;
          ghModwin32kns = (void *)ivrLoadImage();
          if ( ghModwin32kns )
          {
            ivrInitAllwin32knsDelayLoads(v27);
            if ( gpfnIVInitialize )
              v5 = gpfnIVInitialize(&gbRootPartition);
            else
              v5 = -1073741637;
          }
          else
          {
            v5 = -1073741204;
          }
        }
      }
    }
    InitializeInputComponents();
  }
LABEL_13:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v28);
  return (unsigned int)v5;
}
