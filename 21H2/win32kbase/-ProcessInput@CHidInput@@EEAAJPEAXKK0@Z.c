/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AA390
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0048090 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0199ACC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A3A80 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01A3C6C (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A6E40 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C01A96A8 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C01CDB68 (ApiSetEditionRimDeviceReadNotification.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, void **a2, unsigned int a3, unsigned int a4, void *a5)
{
  void **v8; // r13
  int v9; // r15d
  int IsInjectionDeviceFromKernelHandle; // r12d
  struct DEVICEINFO *DeviceInfo; // rax
  struct DEVICEINFO *v12; // rdi
  CHidInput *v13; // rcx
  unsigned int v14; // r8d
  __int64 *v15; // rdx
  CTouchProcessor *v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  CPTPProcessor *v19; // rcx
  int v20; // eax

  v8 = a2;
  v9 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    if ( a2[4] != a5 && a5 != (void *)-1LL )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 340);
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 20);
  }
  else
  {
    v8 = 0LL;
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  }
  DeviceInfo = CBaseInput::FindDeviceInfo(this, (char *)a5, IsInjectionDeviceFromKernelHandle);
  v12 = DeviceInfo;
  if ( DeviceInfo )
  {
    v13 = (CHidInput *)*((unsigned int *)DeviceInfo + 50);
    if ( ((unsigned __int8)v13 & 0x40) == 0 )
    {
      v14 = 4;
      switch ( a3 )
      {
        case 4u:
          v14 = 13;
          break;
        case 0x10u:
          v14 = 11;
          break;
        case 8u:
          v14 = 17;
          break;
      }
      CInputGlobals::UpdateInputGlobals(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v14,
        0LL,
        0,
        IsInjectionDeviceFromKernelHandle != 0 ? 8 : 0);
    }
    if ( *((_QWORD *)v12 + 60) )
    {
      if ( !v9 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 393);
      if ( (*((_DWORD *)v12 + 50) & 0x80u) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 394);
      if ( !CHidInput::IsTouchpadDevice(v13, v12) || isChildPartition() )
      {
        CTouchProcessor::ProcessInput(v16, v15, (struct RIMCOMPLETEFRAME *)a2);
      }
      else
      {
        v18 = *((_QWORD *)v12 + 60);
        if ( v18 )
          v19 = *(CPTPProcessor **)(v18 + 1000);
        else
          v19 = 0LL;
        if ( v19 )
          CPTPProcessor::ProcessInput(
            v19,
            v17,
            (struct RIMCOMPLETEFRAME *)a2,
            (unsigned int)-__CFSHR__(*((_DWORD *)v12 + 46), 14),
            -__CFSHR__(*(_DWORD *)(v18 + 312), 5),
            *((_DWORD *)v8 + 21));
      }
    }
    else
    {
      v20 = *((_DWORD *)v12 + 50);
      if ( (v20 & 0x100) != 0 || (v20 & 0x200) != 0 )
        ApiSetEditionRimDeviceReadNotification(a2, a3, a4, a5);
    }
  }
  return 0LL;
}
