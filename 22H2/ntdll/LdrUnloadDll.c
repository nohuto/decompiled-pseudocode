/*
 * XREFs of LdrUnloadDll @ 0x18000FBF0
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     LdrpGetShimEngineInterface @ 0x18006CCD8 (LdrpGetShimEngineInterface.c)
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180070DD0 (RtlpTpWorkUnposted.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C340 (LdrpCodeAuthzInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x180086130 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6720 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  PVOID v2; // rdi
  __int16 v4; // bx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18016C508 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v5);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = BaseAddress;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(BaseAddress, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          LdrpDrainWorkQueue(0LL);
        v2 = BaseAddress;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        if ( !v4 )
          LdrpDropLastInProgressCount();
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
