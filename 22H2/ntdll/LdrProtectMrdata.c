/*
 * XREFs of LdrProtectMrdata @ 0x180012224
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x180068EB0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180069090 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180069380 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800698D0 (RtlInstallFunctionTableCallback.c)
 *     LdrpGetShimEngineInterface @ 0x18006CCD8 (LdrpGetShimEngineInterface.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180071E28 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180079A44 (RtlpCallVectoredHandlers.c)
 *     RtlInitializeHistoryTable @ 0x180079C5C (RtlInitializeHistoryTable.c)
 *     RtlSetProtectedPolicy @ 0x180081520 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180082080 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180082870 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x1800837F4 (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x18008C660 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008C780 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0984 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x18010B160 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int ScpCfgCheckESFunction; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  ScpCfgCheckESFunction = LdrSystemDllInitBlock.ScpCfgCheckESFunction;
  if ( !a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
      LdrpChangeMrdataProtection(4LL);
    if ( ScpCfgCheckESFunction != -1 )
    {
      LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) = ScpCfgCheckESFunction + 1;
      goto LABEL_6;
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction) )
    goto LABEL_10;
  --LODWORD(LdrSystemDllInitBlock.ScpCfgCheckESFunction);
  if ( ScpCfgCheckESFunction == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_6:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
