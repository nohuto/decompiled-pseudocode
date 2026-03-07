char __fastcall ExpInitSystemPhase1(__int64 a1)
{
  unsigned int v2; // ebx
  bool i; // di
  bool v4; // bl
  bool v5; // di
  bool v6; // bl
  char v7; // di
  char v8; // bl
  char v9; // di
  char v10; // al
  char v11; // bl
  char v12; // al
  char v13; // di
  __int64 Pool2; // rax
  char v15; // bl
  char v16; // di
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v21[8]; // [rsp+38h] [rbp-19h] BYREF
  int v22; // [rsp+40h] [rbp-11h]
  _DWORD v23[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h]
  __int64 v25; // [rsp+58h] [rbp+7h]
  void (__fastcall *v26)(int, struct _EX_RUNDOWN_REF **); // [rsp+60h] [rbp+Fh]
  __int64 *v27; // [rsp+68h] [rbp+17h]
  _DWORD v28[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+80h] [rbp+2Fh]
  void (__fastcall *v31)(int); // [rsp+88h] [rbp+37h]
  __int64 v32; // [rsp+90h] [rbp+3Fh]
  ULONG ReturnedProductType; // [rsp+B8h] [rbp+67h] BYREF

  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  ExpHostListLock = 0LL;
  qword_140D54F58 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpSysDbgLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v2 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v2 < (unsigned int)KeNumberProcessors_0; ++v2 )
    ExInitializeProcessor(KiProcessorBlock[v2], 0);
  v4 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v5 = (unsigned __int8)ExpMutantInitialization() != 0 && v4;
  v6 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v5;
  v7 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v6;
  v8 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v7 : 0;
  v9 = ExpTimerInitialization() ? v8 : 0;
  ExpHpGCTimerPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 0LL, 8u);
  if ( ExpHpGCTimerPaged && (ExpHpGCTimerNonPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 1LL, 8u)) != 0 )
  {
    ExpHpGCScheduledNonPaged = 0;
    v10 = 1;
    ExpHpGCScheduledPaged = 0;
    ExpHpGCInitialized = 1;
  }
  else
  {
    v10 = 0;
  }
  v11 = v10 != 0 ? v9 : 0;
  v12 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  v13 = v12 != 0 ? v11 : 0;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  if ( (int)ExpKeyedEventInitialization() < 0 )
    v13 = 0;
  Pool2 = ExAllocatePool2(64LL, 0x30uLL, 0x20666E57u);
  ExpWnfDispatcher = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)Pool2 = 3148040;
    *(_QWORD *)(Pool2 + 24) = ExpWnfWorkItemRoutine;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  else
  {
    v13 = 0;
  }
  v15 = (unsigned __int8)ExpWin32Initialization() != 0 ? v13 : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v15 = 0;
  v16 = ExpSaInitialize() != 0 ? v15 : 0;
  v17 = ExpMicrocodeInitialization(1LL);
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741637 )
    v16 = 0;
  ExpPrmInitialization(*(_QWORD *)(a1 + 240) + 2600LL);
  ReturnedProductType = 0;
  v22 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v21)
    && MEMORY[0xFFFFF78000000264] != v22
    && (MEMORY[0xFFFFF78000000264] != 2 || v22 != 3) )
  {
    *(_DWORD *)(MmWriteableSharedUserData + 612) = v22;
  }
  v28[1] = 5;
  v31 = ExpPcwHostCallback;
  v29 = 1LL;
  v28[0] = 65537;
  v30 = 0LL;
  v32 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v18, (unsigned __int16 *)v28) < 0 )
    ExpPcwExtensionHost = 0LL;
  if ( HvlHypervisorConnected )
  {
    v23[1] = 17;
    v24 = 512LL;
    v26 = ExpCrossVmIntHostCallback;
    v25 = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      v23[0] = 196623;
      v27 = &ExpCrossVmIntExtensionHostRoot;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostRoot, v19, (unsigned __int16 *)v23) < 0 )
        ExpCrossVmIntExtensionHostRoot = 0LL;
    }
    else
    {
      v23[0] = 196624;
      v27 = &ExpCrossVmIntExtensionHostGuest;
      if ( (int)ExRegisterHost(&ExpCrossVmIntExtensionHostGuest, v19, (unsigned __int16 *)v23) < 0 )
        ExpCrossVmIntExtensionHostGuest = 0LL;
    }
  }
  ExpInitializeSvm();
  return v16;
}
