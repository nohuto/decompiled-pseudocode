__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, _DWORD *a2, unsigned int a3, unsigned int a4, void *a5)
{
  void *v5; // rbp
  int IsInjectionDeviceFromKernelHandle; // edi
  struct DEVICEINFO *DeviceInfo; // rax
  CHidInput *v12; // rcx
  struct DEVICEINFO *v13; // rbx
  int v14; // esi
  void *v15; // rax
  void *v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct CPTPProcessor *Processor; // rdi
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ebx
  struct DEVICEINFO *v29; // rax
  struct DEVICEINFO *v30; // rdi
  int v31; // eax
  unsigned int v32; // r8d
  unsigned int v33; // r10d
  void *v34; // rax
  int v35; // ebx
  int v36; // eax
  unsigned int v37; // eax
  void *v38; // rsi
  CHidInput *v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  CPTPProcessor *v45; // rax
  CPTPProcessor *v46; // rbx
  __int64 v47; // rax
  int v48; // eax
  int v50; // [rsp+20h] [rbp-68h]
  int v51; // [rsp+28h] [rbp-60h]
  _DWORD *v52; // [rsp+40h] [rbp-48h]
  int v54; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a5;
  v52 = 0LL;
  v54 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    IsInjectionDeviceFromKernelHandle = a2[48];
    v52 = a2;
  }
  else
  {
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  }
  if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
  {
    DeviceInfo = CBaseInput::FindDeviceInfo(this, v5, IsInjectionDeviceFromKernelHandle);
    v13 = DeviceInfo;
    if ( !DeviceInfo )
      return 0LL;
    if ( *((_QWORD *)DeviceInfo + 59) )
    {
      v14 = 2;
      if ( !v54 )
      {
        v54 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 368);
      }
      if ( (*((_DWORD *)v13 + 50) & 0x80u) == 0 )
      {
        v54 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 369);
      }
      v15 = (void *)*((_QWORD *)v52 + 4);
      if ( v15 != v5 && v5 != (void *)-1LL && v15 != *((void **)v13 + 43) )
      {
        v54 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 370);
      }
      v16 = *(void **)v13;
      LOBYTE(v54) = 0;
      LOBYTE(v17) = CHidInput::IsTouchpadDevice(v12, v13);
      if ( !v17 || isChildPartition() )
      {
        v23 = SGDGetUserSessionState(v19, v18, v20, v21);
        CTouchProcessor::ProcessInput(*(CTouchProcessor **)(v23 + 3424), v16, (char *)a2, a4, v50, v51, (bool *)&v54);
      }
      else
      {
        Processor = CPTPProcessorFactory::GetProcessor(v13);
        if ( !Processor )
        {
LABEL_21:
          v14 = 0;
LABEL_22:
          v24 = v14 | ((*((_DWORD *)v13 + 46) & 0x2000u) >> 10);
          if ( a3 == 4 && *((_DWORD *)v13 + 534) == 1 )
            v24 |= 0x80u;
          v25 = RIMGetPointerInputType(*((_QWORD *)v13 + 59));
          v26 = LINPSourceFromPointerType(v25);
          CInputGlobals::UpdateInputGlobals(
            (__int64)gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            v26,
            0,
            0,
            v24);
          return 0LL;
        }
        CPTPProcessor::ProcessInput(
          Processor,
          v16,
          (char *)a2,
          a4,
          -__CFSHR__(*((_DWORD *)v13 + 46), 14),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)v13 + 59) + 360LL), 5),
          (bool *)&v54);
        *((_BYTE *)this + 1424) = *((_BYTE *)Processor + 2372);
      }
      if ( (_BYTE)v54 )
        goto LABEL_22;
      goto LABEL_21;
    }
    v27 = *((_DWORD *)DeviceInfo + 50);
    if ( (v27 & 0x100) == 0 && (v27 & 0x200) == 0 )
      return 0LL;
    if ( (v27 & 0x40) == 0 )
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4u,
        0,
        0,
        (*((_DWORD *)v13 + 46) & 0x2000u) >> 10);
LABEL_59:
    ApiSetEditionRimDeviceReadNotification(a2, a3, a4, v5);
    return 0LL;
  }
  v28 = IsInjectionDeviceFromKernelHandle != 0 ? 8 : 0;
  v29 = CBaseInput::FindDeviceInfo(this, v5, IsInjectionDeviceFromKernelHandle);
  v30 = v29;
  if ( !v29 )
    return 0LL;
  v31 = *((_DWORD *)v29 + 50);
  if ( (v31 & 0x40) == 0 )
  {
    v32 = 4;
    v33 = v28;
    switch ( a3 )
    {
      case 4u:
        v33 = v28 | 0x80;
        v32 = 13;
        if ( *((_DWORD *)v30 + 534) != 1 )
          v33 = v28;
        goto LABEL_42;
      case 0x10u:
        v32 = 11;
LABEL_42:
        CInputGlobals::UpdateInputGlobals(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          v32,
          0,
          0,
          v33);
        goto LABEL_43;
      case 8u:
        v32 = 17;
        goto LABEL_42;
    }
    if ( (v31 & 0x100) != 0 || (v31 & 0x200) != 0 )
      goto LABEL_42;
  }
LABEL_43:
  if ( !*((_QWORD *)v30 + 59) )
  {
    v48 = *((_DWORD *)v30 + 50);
    if ( (v48 & 0x100) == 0 && (v48 & 0x200) == 0 )
      return 0LL;
    goto LABEL_59;
  }
  if ( !v54 )
  {
    v54 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 516);
  }
  if ( (*((_DWORD *)v30 + 50) & 0x80u) == 0 )
  {
    v54 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 517);
  }
  v34 = (void *)*((_QWORD *)v52 + 4);
  if ( v34 != v5 && v5 != (void *)-1LL && v34 != *((void **)v30 + 43) )
  {
    v54 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 518);
  }
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v35 = *((_DWORD *)v30 + 46);
  v36 = RIMGetPointerInputType(*((_QWORD *)v30 + 59));
  v37 = LINPSourceFromPointerType(v36);
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v37,
    0,
    0,
    (v35 & 0x2000 | 0x800u) >> 10);
  v38 = *(void **)v30;
  LOBYTE(v40) = CHidInput::IsTouchpadDevice(v39, v30);
  if ( !v40 || isChildPartition() )
  {
    v47 = SGDGetUserSessionState(v42, v41, v43, v44);
    CTouchProcessor::ProcessInputOld(*(CTouchProcessor **)(v47 + 3424), v38, (char *)a2, a4);
  }
  else
  {
    v45 = CPTPProcessorFactory::GetProcessor(v30);
    v46 = v45;
    if ( v45 )
    {
      CPTPProcessor::ProcessInputOld(
        v45,
        v38,
        (char *)a2,
        a4,
        -__CFSHR__(*((_DWORD *)v30 + 46), 14),
        -__CFSHR__(*(_DWORD *)(*((_QWORD *)v30 + 59) + 360LL), 5));
      *((_BYTE *)this + 1424) = *((_BYTE *)v46 + 2372);
    }
  }
  return 0LL;
}
