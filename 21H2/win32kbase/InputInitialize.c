/*
 * XREFs of InputInitialize @ 0x1C0052DC4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0052F34 (ApiSetGetInputSensorThreadingModel.c)
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 *     ShouldEnableInputVirtualization @ 0x1C0053D88 (ShouldEnableInputVirtualization.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C0053EF8 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0053FEC (--0CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01F0090 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C01F102C (ivrLoadImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 (**v7)(void); // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  int InputSensorThreadingModel; // eax
  PVOID v11; // rsi
  __int64 Pool2; // rdi
  unsigned int v13; // edi
  CDeviceAcceleration **v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int DefaultMouseSensitivity; // ebp
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // rax
  void *v22; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF
  char v24; // [rsp+D0h] [rbp+8h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v24, 1LL, a3);
  v6 = 0;
  gbInputInitialized = 1;
  CBaseInput::_sLock = 0LL;
  v7 = (__int64 (**)(void))&unk_1C0288020;
  qword_1C029A1C8 = 0LL;
  v8 = 0;
  CBaseInput::_sessionInitialized = 1;
  while ( 1 )
  {
    if ( v8 != *(_DWORD *)v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    v9 = (*(v7 - 4))();
    *(v7 - 1) = (__int64 (*)(void))v9;
    if ( !v9 )
      break;
    InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v7);
    *((_DWORD *)v7 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    ++v8;
    v7 += 6;
    if ( v8 >= 3 )
    {
      v11 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72705443) == 0x72705443
        && (v21 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v21) != 1919964227 )
        {
          if ( ++v21 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_9;
        }
        Pool2 = ExAllocatePool2(260LL, 168LL);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v11,
                                     Pool2,
                                     BackTrace) )
              goto LABEL_30;
LABEL_11:
            gpTouchProcessor = CTouchProcessor::CTouchProcessor((CTouchProcessor *)Pool2);
            if ( gpTouchProcessor )
            {
              v13 = 0;
              v14 = &qword_1C0288098;
              do
              {
                DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v13);
                if ( *((_DWORD *)v14 + 2) != v13 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
                if ( *v14 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
                v19 = ((__int64 (__fastcall *)(_QWORD))*(v14 - 1))(DefaultMouseSensitivity);
                *v14 = (CDeviceAcceleration *)v19;
                if ( !v19 )
                {
                  v6 = -1073741823;
                  goto LABEL_20;
                }
                ++v13;
                v14 += 3;
              }
              while ( v13 < 2 );
              if ( (unsigned __int8)ShouldEnableInputVirtualization() )
              {
                gInputVirtualizationSessionId = gSessionId;
                gbInputVirtualizationEnabled = 1;
                ghModwin32kns = (void *)ivrLoadImage();
                if ( ghModwin32kns )
                {
                  ivrInitAllwin32knsDelayLoads(v22);
                  if ( gpfnIVInitialize )
                    v6 = gpfnIVInitialize(&gbRootPartition);
                  else
                    v6 = -1073741637;
                }
                else
                {
                  v6 = -1073741204;
                }
              }
              goto LABEL_20;
            }
LABEL_32:
            v6 = -1073741801;
LABEL_20:
            InitializeInputComponents();
            goto LABEL_21;
          }
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v11,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_10;
          }
LABEL_30:
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
      }
      else
      {
LABEL_9:
        Pool2 = ExAllocatePool2(260LL, 152LL);
LABEL_10:
        if ( Pool2 )
          goto LABEL_11;
      }
      gpTouchProcessor = 0LL;
      goto LABEL_32;
    }
  }
  v6 = -1073741823;
LABEL_21:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v24);
  return v6;
}
