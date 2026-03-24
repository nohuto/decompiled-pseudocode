/*
 * XREFs of InputInitialize @ 0x1C008A25C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0089EF4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C0089F6C (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     ShouldEnableInputVirtualization @ 0x1C008A018 (ShouldEnableInputVirtualization.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1C008A3BC (ApiSetGetInputSensorThreadingModel.c)
 *     InitializeInputComponents @ 0x1C008B6CC (InitializeInputComponents.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01BA428 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C01BA9D8 (ivrLoadImage.c)
 */

__int64 InputInitialize()
{
  unsigned int v0; // ebx
  __int64 (**v1)(void); // rdi
  unsigned int v2; // esi
  __int64 v3; // rax
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v5; // rax
  CTouchProcessor *v6; // rax
  unsigned int v7; // esi
  CDeviceAcceleration **v8; // rdi
  unsigned int DefaultMouseSensitivity; // ebp
  __int64 v10; // rax
  void *v12; // rcx
  char v13; // [rsp+60h] [rbp+18h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v13, 1, 0);
  v0 = 0;
  gbInputInitialized = 1;
  gInputLock = 0LL;
  v1 = (__int64 (**)(void))&unk_1C0246020;
  qword_1C0255508 = 0LL;
  v2 = 0;
  gQueueLock = 0LL;
  qword_1C02554E8 = 0LL;
  gWndLock = 0LL;
  qword_1C02554F8 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C02554D8 = 0LL;
  CBaseInput::_sessionInitialized = 1;
  do
  {
    if ( v2 != *(_DWORD *)v1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 109LL);
    v3 = (*(v1 - 4))();
    *(v1 - 1) = (__int64 (*)(void))v3;
    if ( !v3 )
    {
      v0 = -1073741823;
      goto LABEL_20;
    }
    InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v1);
    *((_DWORD *)v1 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 121LL);
    ++v2;
    v1 += 6;
  }
  while ( v2 < 3 );
  v5 = (CTouchProcessor *)Win32AllocPoolZInit(0xA0uLL, 1919964227LL);
  if ( v5 )
    v6 = CTouchProcessor::CTouchProcessor(v5);
  else
    v6 = 0LL;
  gpTouchProcessor = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = &qword_1C0246098;
    do
    {
      DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v7);
      if ( *((_DWORD *)v8 + 2) != v7 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 78LL);
      if ( *v8 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 79LL);
      v10 = ((__int64 (__fastcall *)(_QWORD))*(v8 - 1))(DefaultMouseSensitivity);
      *v8 = (CDeviceAcceleration *)v10;
      if ( !v10 )
      {
        v0 = -1073741823;
        goto LABEL_19;
      }
      ++v7;
      v8 += 3;
    }
    while ( v7 < 2 );
    if ( ShouldEnableInputVirtualization() )
    {
      gInputVirtualizationSessionId = gSessionId;
      gbInputVirtualizationEnabled = 1;
      ghModwin32kns = (void *)ivrLoadImage();
      if ( ghModwin32kns )
      {
        ivrInitAllwin32knsDelayLoads(v12);
        if ( gpfnIVInitialize )
          v0 = gpfnIVInitialize(&gbRootPartition);
        else
          v0 = -1073741637;
      }
      else
      {
        v0 = -1073741204;
      }
    }
  }
  else
  {
    v0 = -1073741801;
  }
LABEL_19:
  InitializeInputComponents();
LABEL_20:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v13);
  return v0;
}
