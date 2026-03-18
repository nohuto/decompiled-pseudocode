/*
 * XREFs of PubSebUnregisterRpc @ 0x1800FDA7C
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C8144 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C1D78 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800FDD10 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800FDE7C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 *     ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800FDEF4 (-FindKey@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLI.c)
 *     ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800FDF24 (-RemoveAt@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBL.c)
 */

__int64 __fastcall PubSebUnregisterRpc(struct _SEB_RPC_PUBLISH_DATA *a1)
{
  ContextTable *v2; // rcx
  int RpcBindingHandle; // ebx
  DWORD CurrentThreadId; // eax
  void *v5; // r9
  __int64 v6; // rcx
  unsigned int Key; // eax
  __int64 v8; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v11);
  if ( !RpcBindingHandle )
  {
    v10 = ContextTable::Find(v2, a1);
    if ( !v10 )
    {
      LOWORD(RpcBindingHandle) = 6;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    CurrentThreadId = GetCurrentThreadId();
    v5 = v11;
    *((_DWORD *)a1 + 2) = CurrentThreadId;
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       RpcBindingHandle + 2,
                                       0LL,
                                       v5,
                                       &v10).Pointer;
    if ( !RpcBindingHandle )
    {
      v11 = a1;
      RtlAcquireSRWLockExclusive(&unk_1803E6510);
      Key = ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
              v6,
              &v11);
      if ( Key != -1 )
        ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
          v8,
          Key);
      RtlReleaseSRWLockExclusive(&unk_1803E6510);
      RpcBindingHandle = 0;
    }
    RtlReleaseSRWLockExclusive(a1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
