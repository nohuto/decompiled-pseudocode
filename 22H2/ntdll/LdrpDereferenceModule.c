/*
 * XREFs of LdrpDereferenceModule @ 0x1800302E4
 * Callers:
 *     LdrDisableThreadCalloutsForDll @ 0x18000EF70 (LdrDisableThreadCalloutsForDll.c)
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrFindEntryForAddress @ 0x1800539E0 (LdrFindEntryForAddress.c)
 *     LdrpLoadContextReplaceModule @ 0x1800617BC (LdrpLoadContextReplaceModule.c)
 *     LdrpFreeReplacedModule @ 0x180067AD8 (LdrpFreeReplacedModule.c)
 *     LdrpUnloadNode @ 0x18006B4F8 (LdrpUnloadNode.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006C230 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitShimEngine @ 0x18006C74C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006C8F4 (LdrpLoadShimEngine.c)
 *     LdrGetDllHandleByMapping @ 0x180075710 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800780B0 (LdrGetDllHandleByName.c)
 *     LdrpCorInitialize @ 0x180083294 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800837F4 (LdrpLoadWow64.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800880CC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CCFD8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CDE70 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE060 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CE500 (LdrSetImplicitPathOptions.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9630 (AVrfCallAPILookupCallback.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFreeUnicodeString @ 0x180060DA0 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x18006F5B4 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x180071DB0 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18007F030 (LdrpReleaseTlsEntry.c)
 */

__int64 __fastcall LdrpDereferenceModule(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  volatile signed __int32 *v10; // rcx

  result = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(result + 24) != -1 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result - 56) & 0x20) == 0 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 276), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
        v6 = *(_QWORD *)(a1 + 160);
        if ( *(_QWORD *)(v6 + 8) != a1 + 160 || (v7 = *(_QWORD **)(a1 + 168), *v7 != a1 + 160) )
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *(_QWORD **)(a1 + 152);
        v9 = (_QWORD *)*v8;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(a1 + 110) )
          LdrpReleaseTlsEntry(a1, 0LL);
        LdrpUnmapModule(a1);
        v10 = *(volatile signed __int32 **)(a1 + 136);
        if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v10);
        if ( *(_QWORD *)(a1 + 80) )
          LdrpFreeUnicodeString(a1 + 72);
        result = RtlFreeHeap(LdrpHeap, 0, a1);
        if ( v9 == v8 )
          return LdrpDestroyNode(v8);
      }
    }
  }
  return result;
}
