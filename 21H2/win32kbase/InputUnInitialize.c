/*
 * XREFs of InputUnInitialize @ 0x1C009E774
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputUnInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  CDeviceAcceleration **v8; // rbx
  __int64 v9; // rdi
  char v10; // [rsp+30h] [rbp+8h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v10, 1LL, a3);
    UnInitializeInputComponents();
    if ( isInputVirtualizationEnabled() )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns && *((_QWORD *)ghModwin32kns + 3) )
        ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModwin32kns + 24, 8uLL);
    }
    v3 = (void (**)(void))&off_1C0288008;
    v4 = 3LL;
    do
    {
      (*v3)();
      v3 += 6;
      --v4;
    }
    while ( v4 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C029A1C8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    v8 = &qword_1C0288098;
    v9 = 2LL;
    do
    {
      if ( *v8 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v8 + 16LL))(*v8, 1LL);
      *v8 = 0LL;
      v8 += 3;
      --v9;
    }
    while ( v9 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v10);
  }
}
