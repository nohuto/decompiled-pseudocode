/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00021A0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00BFBB0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D41D8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D49B8 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetPointerInputType @ 0x1C00E1024 (RIMGetPointerInputType.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C00E4D08 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C00E56AE (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     LINPSourceFromPointerType @ 0x1C019F6B4 (LINPSourceFromPointerType.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01DF380 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C0207758 (ApiSetEditionRimDeviceReadNotification.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, _DWORD *a2, unsigned int a3, unsigned int a4, void *a5)
{
  void *v5; // rdi
  _DWORD *v6; // r15
  int v11; // r14d
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  CHidInput *v14; // rcx
  struct DEVICEINFO *v15; // rbx
  int v16; // esi
  void *v17; // rax
  void *v18; // r14
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct CPTPProcessor *Processor; // rdi
  __int64 v25; // rax
  unsigned int v26; // edi
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v5 = a5;
  v6 = 0LL;
  v11 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    IsInjectionDeviceFromKernelHandle = a2[48];
    v6 = a2;
  }
  else
  {
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, v5, IsInjectionDeviceFromKernelHandle);
  v15 = DeviceInfo;
  if ( !DeviceInfo )
    return 0LL;
  if ( *((_QWORD *)DeviceInfo + 59) )
  {
    v16 = 2;
    if ( !v11 )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 364);
    }
    if ( (*((_DWORD *)v15 + 50) & 0x80u) == 0 )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 365);
    }
    v17 = (void *)*((_QWORD *)v6 + 4);
    if ( v17 != v5 && v5 != (void *)-1LL && v17 != *((void **)v15 + 43) )
    {
      v33 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 366);
    }
    v18 = *(void **)v15;
    LOBYTE(v33) = 0;
    LOBYTE(v19) = CHidInput::IsTouchpadDevice(v14, v15);
    if ( !v19 || isChildPartition() )
    {
      v25 = SGDGetUserSessionState(v21, v20, v22, v23);
      CTouchProcessor::ProcessInput(*(CTouchProcessor **)(v25 + 3424), v18, (char *)a2, v34, v31, v32, (bool *)&v33);
    }
    else
    {
      Processor = CPTPProcessorFactory::GetProcessor(v15);
      if ( !Processor )
      {
LABEL_20:
        v16 = 0;
LABEL_21:
        v26 = v16 | ((*((_DWORD *)v15 + 46) & 0x2000u) >> 10);
        if ( a3 == 4 && *((_DWORD *)v15 + 534) == 1 )
          v26 |= 0x80u;
        v27 = RIMGetPointerInputType(*((_QWORD *)v15 + 59));
        v28 = LINPSourceFromPointerType(v27);
        LODWORD(v32) = v26;
        CInputGlobals::UpdateInputGlobals(
          *((__int64 *)&WPP_MAIN_CB.Reserved + 1),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          v28,
          0,
          0,
          v32);
        return 0LL;
      }
      CPTPProcessor::ProcessInput(
        Processor,
        v18,
        (char *)a2,
        v34,
        -__CFSHR__(*((_DWORD *)v15 + 46), 14),
        -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 59) + 360LL), 5),
        (bool *)&v33);
      *((_BYTE *)this + 1360) = *((_BYTE *)Processor + 2388);
    }
    if ( (_BYTE)v33 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v29 = *((_DWORD *)DeviceInfo + 50);
  if ( (v29 & 0x100) != 0 || (v29 & 0x200) != 0 )
  {
    if ( (v29 & 0x40) == 0 )
    {
      LODWORD(v32) = (*((_DWORD *)v15 + 46) & 0x2000u) >> 10;
      CInputGlobals::UpdateInputGlobals(
        *((__int64 *)&WPP_MAIN_CB.Reserved + 1),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4u,
        0,
        0,
        v32);
    }
    ApiSetEditionRimDeviceReadNotification(a2, a3, a4, v5);
  }
  return 0LL;
}
