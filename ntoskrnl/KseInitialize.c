/*
 * XREFs of KseInitialize @ 0x140B3E688
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogError @ 0x140303450 (KsepLogError.c)
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14079EFB4 (KseShimDatabaseOpen.c)
 *     KseRegisterShim @ 0x140800EC0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1409747A0 (KsepCacheUninitialize.c)
 *     KsepEngineInitialize @ 0x140B34E84 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140B35058 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x140B35418 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140B35488 (KseVersionLieInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  signed __int32 v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v33 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v33);
      if ( matched >= 0 && v33 )
      {
        KseShimDatabaseClose(v33);
        KseVersionLieInitialize();
        v5 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v5 < 0 )
        {
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v19] = v5;
          v20 = KsepDebugFlag;
          KsepHistoryErrors[2 * v19] = 852115;
          if ( (v20 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v6 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v6 < 0 )
        {
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v21] = v6;
          v22 = KsepDebugFlag;
          KsepHistoryErrors[2 * v21] = 1048692;
          if ( (v22 & 2) != 0 )
            KsepDebugPrint(12LL, "ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v7 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v7 < 0 )
        {
          v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v23] = v7;
          v24 = KsepDebugFlag;
          KsepHistoryErrors[2 * v23] = 917629;
          if ( (v24 & 2) != 0 )
            KsepDebugPrint(12LL, "ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v8 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v8 < 0 )
        {
          v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v25] = v8;
          v26 = KsepDebugFlag;
          KsepHistoryErrors[2 * v25] = 983165;
          if ( (v26 & 2) != 0 )
            KsepDebugPrint(12LL, "Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v9 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v9 < 0 )
        {
          v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v27] = v9;
          v28 = KsepDebugFlag;
          KsepHistoryErrors[2 * v27] = 1114208;
          if ( (v28 & 2) != 0 )
            KsepDebugPrint(12LL, "Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v10 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v10 < 0 )
        {
          v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v29] = v10;
          v30 = KsepDebugFlag;
          KsepHistoryErrors[2 * v29] = 1179753;
          if ( (v30 & 2) != 0 )
            KsepDebugPrint(12LL, "KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v11 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v11 < 0 )
        {
          v31 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C40404[2 * v31] = v11;
          v32 = KsepDebugFlag;
          KsepHistoryErrors[2 * v31] = 1245275;
          if ( (v32 & 2) != 0 )
            KsepDebugPrint(12LL, "UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140C649B8 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_12:
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v12]) = 0;
    LODWORD(KsepHistoryMessages[v12]) = 327934;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1, "KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_35;
  }
  v14 = _InterlockedCompareExchange(&dword_140C649B4, 1, 0);
  if ( v14 == 2 )
    return 0LL;
  if ( v14 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 240);
    if ( *(_QWORD *)(v15 + 64) && *(_DWORD *)(v15 + 72) )
    {
      matched = KsepEngineInitialize(&KseEngine);
      if ( matched >= 0 )
      {
        matched = KsepMatchInitMachineInfo();
        if ( matched >= 0 )
        {
          dword_140C649B4 = 2;
          KseDriverScopeInitialize();
          goto LABEL_12;
        }
      }
    }
    else
    {
      if ( ViVerifierEnabled )
        dword_140C649B8 |= 0x40u;
      v16 = *(_QWORD *)(a1 + 240);
      if ( !*(_QWORD *)(v16 + 64) || !*(_DWORD *)(v16 + 72) )
        dword_140C649B8 |= 0x80u;
      matched = -1073741637;
    }
LABEL_35:
    dword_140C649B4 = 0;
    if ( qword_140C649F8 )
    {
      KsepCacheUninitialize(qword_140C649F8);
      qword_140C649F8 = 0LL;
    }
    KseEngine |= 3u;
    dword_140C649B8 |= 0x400u;
    v17 = KsepDebugFlag;
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    if ( matched == -1073741637 )
    {
      dword_140C40404[2 * v18] = -1073741637;
      KsepHistoryErrors[2 * v18] = 327962;
      if ( (v17 & 2) != 0 )
        KsepDebugPrint(
          1LL,
          "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
      KsepLogError(
        1LL,
        (__int64)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    }
    else
    {
      dword_140C40404[2 * v18] = matched;
      KsepHistoryErrors[2 * v18] = 327966;
      if ( (v17 & 2) != 0 )
        KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
      KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
    }
    return (unsigned int)matched;
  }
  return 3221225473LL;
}
