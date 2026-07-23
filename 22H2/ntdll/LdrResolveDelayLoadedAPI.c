/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180010380
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800101B0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CE860 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18005424C (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800880CC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v7; // r12d
  void *ForwarderString; // rbx
  int LoadedDllByHandle; // ecx
  PVOID v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-38h] BYREF
  int v17; // [rsp+A0h] [rbp+18h]

  v17 = (int)FailureDllHook;
  v7 = (int)DelayloadDescriptor;
  ForwarderString = 0LL;
  if ( ((Flags & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & Flags) == 0)
    && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(ParentModuleBase, BaseAddress, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1257,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          ParentModuleBase,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v11 = BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)LdrpHandleProtectedDelayload(
                                      (int)BaseAddress[0],
                                      v7,
                                      v17,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(
                                      (int)BaseAddress[0],
                                      v7,
                                      v17,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(ParentModuleBase);
              if ( v12 < 0 )
              {
                v13 = LdrpDebugFlags;
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1236,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    (__int64)"LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are impo"
                             "rted in the DLL based at 0x%p.Status = 0x%x\n",
                    ParentModuleBase,
                    v12);
                  v13 = LdrpDebugFlags;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return ForwarderString;
}
