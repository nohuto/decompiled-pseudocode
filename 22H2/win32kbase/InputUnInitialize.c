/*
 * XREFs of InputUnInitialize @ 0x1C00B72FC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void InputUnInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  void (**v9)(void); // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  char v24; // [rsp+38h] [rbp+10h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v24, 1);
    UnInitializeInputComponents();
    if ( isInputVirtualizationEnabled(v1, v0, v2, v3) )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns )
      {
        v4 = (char *)ghModwin32kns + 24;
        if ( *((_QWORD *)ghModwin32kns + 3) )
          ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v4, 8uLL);
      }
    }
    v8 = 3LL;
    v9 = (void (**)(void))(SGDGetUserSessionState(v5, v4, v6, v7) + 3288);
    do
    {
      (*v9)();
      v9 += 6;
      --v8;
    }
    while ( v8 );
    *(_BYTE *)(SGDGetUserSessionState(v11, v10, v12, v13) + 3256) = 0;
    v22 = 2LL;
    if ( *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 3240) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
    v23 = (_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 16008);
    do
    {
      if ( *v23 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v23 + 16LL))(*v23, 1LL);
      *v23 = 0LL;
      v23 += 3;
      --v22;
    }
    while ( v22 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v24);
  }
}
