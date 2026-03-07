void __fastcall InputUnInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  void (**v16)(void); // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  char v31; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v31, 1LL, a3);
    UnInitializeInputComponents(v4, v3, v5, v6);
    if ( isInputVirtualizationEnabled(v8, v7, v9, v10) )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns )
      {
        v11 = (char *)ghModwin32kns + 24;
        if ( *((_QWORD *)ghModwin32kns + 3) )
          ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v11, 8uLL);
      }
    }
    v15 = 3LL;
    v16 = (void (**)(void))(SGDGetUserSessionState(v12, v11, v13, v14) + 3288);
    do
    {
      (*v16)();
      v16 += 6;
      --v15;
    }
    while ( v15 );
    *(_BYTE *)(SGDGetUserSessionState(v18, v17, v19, v20) + 3256) = 0;
    v29 = 2LL;
    if ( *(_QWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 3240) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
    v30 = (_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 16008);
    do
    {
      if ( *v30 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v30 + 16LL))(*v30, 1LL);
      *v30 = 0LL;
      v30 += 3;
      --v29;
    }
    while ( v29 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v31);
  }
}
