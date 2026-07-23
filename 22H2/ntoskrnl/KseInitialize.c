/*
 * XREFs of KseInitialize @ 0x140A3BCCC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x140371F88 (KsepLogInfo.c)
 *     KsepLogError @ 0x140372754 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140526E28 (KsepDebugPrint.c)
 *     KseShimDatabaseClose @ 0x140758578 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14075A8D0 (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A38BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A38C28 (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A686BC (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A686E8 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A68758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A68784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A687B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A687DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A68808 (KseVersionLieInitialize.c)
 *     KsepEngineInitialize @ 0x140A6A168 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140A72134 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x140A921C8 (KsepEngineUninitialize.c)
 *     KsepMatchInitialize @ 0x140A9224C (KsepMatchInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // ebx
  signed __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v12);
      if ( matched >= 0 && v12 )
      {
        KseShimDatabaseClose(v12);
      }
      else
      {
        dword_140C505E8 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        KseSkipDriverUnloadInitialize();
        KseZeroPoolInitialize();
        KseClearPCIDBitsInitialize();
        KseKasperskyInitialize();
        KseMemcpyInitialize();
        KseKernelPadSectionsOverrideInitialize();
        KseUserCetInitialize();
      }
    }
LABEL_29:
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v9]) = 0;
    LODWORD(KsepHistoryMessages[v9]) = 327940;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_34;
  }
  v5 = _InterlockedCompareExchange(&dword_140C505E4, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) < 0 )
    return 3221225473LL;
  if ( !InitSafeBootMode && (v7 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v7 + 64)) && *(_DWORD *)(v7 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitialize(a1);
      if ( matched >= 0 )
      {
        dword_140C505E4 = 2;
        KseDriverScopeInitialize();
        goto LABEL_29;
      }
    }
  }
  else
  {
    if ( ViVerifierEnabled )
      dword_140C505E8 |= 0x40u;
    if ( InitSafeBootMode )
      dword_140C505E8 |= 0x100u;
    v8 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v8 + 64) || !*(_DWORD *)(v8 + 72) )
      dword_140C505E8 |= 0x80u;
    matched = -1073741637;
  }
LABEL_34:
  dword_140C505E4 = 0;
  KsepEngineUninitialize(&KseEngine);
  v10 = KsepDebugFlag;
  v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    dword_140C2AB04[2 * v11] = -1073741637;
    KsepHistoryErrors[2 * v11] = 327968;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(
        1LL,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1,
      "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    dword_140C2AB04[2 * v11] = matched;
    KsepHistoryErrors[2 * v11] = 327972;
    if ( (v10 & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
    KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
