/*
 * XREFs of PubSebRegisterRpc @ 0x1800FCF58
 * Callers:
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18008C1CC (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotificationsWithCompSurfInfo@CFSVPProvider@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801E4244 (-CheckForMajorityScreenVideoNotificationsWithCompSurfInfo@CFSVPProvider@@QEAAXPEAVCCompositionSu.c)
 * Callees:
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x1800FD070 (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800FD0D0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180279264 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, struct _SEB_RPC_PUBLISH_DATA **a2)
{
  int RpcBindingHandle; // ebx
  struct _SEB_RPC_PUBLISH_DATA *Heap; // rax
  struct _SEB_RPC_PUBLISH_DATA *v6; // rsi
  CLIENT_CALL_RETURN v7; // rdx
  CLIENT_CALL_RETURN v8; // rcx
  void *v9; // r8
  void *v11; // [rsp+60h] [rbp+18h] BYREF
  void *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v11);
  if ( !RpcBindingHandle )
  {
    Heap = (struct _SEB_RPC_PUBLISH_DATA *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    v6 = Heap;
    if ( !Heap )
    {
      LOWORD(RpcBindingHandle) = 8;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    *(_OWORD *)Heap = 0LL;
    RtlInitializeSRWLock(Heap);
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       0,
                                       0LL,
                                       v11,
                                       a1,
                                       &v12).Pointer;
    if ( RpcBindingHandle )
      goto LABEL_14;
    v9 = v12;
    if ( !v12 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgs)(
        (CLIENT_CALL_RETURN)v8.Simple,
        (CLIENT_CALL_RETURN)v7.Simple,
        0LL);
      v9 = v12;
    }
    RpcBindingHandle = ContextTable::Insert((ContextTable *)v8.Pointer, v6, v9);
    if ( !RpcBindingHandle )
    {
      *a2 = v6;
      goto LABEL_8;
    }
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v11,
                                       &v12).Pointer;
    if ( RpcBindingHandle )
LABEL_14:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
LABEL_8:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
