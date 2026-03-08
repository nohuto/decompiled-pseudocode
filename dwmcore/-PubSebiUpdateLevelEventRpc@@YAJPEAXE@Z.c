/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180279114
 * Callers:
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18008C1CC (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C76E4 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801BEB48 (--1CDDisplayRenderTarget@@UEAA@XZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_NI@Z @ 0x1801E4340 (-SignalSEB@CFSVPProvider@@AEAAX_NI@Z.c)
 * Callees:
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800FD0D0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800FD23C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  int v2; // esi
  int RpcBindingHandle; // ebx
  ContextTable *v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v13);
  if ( !RpcBindingHandle )
  {
    v6 = ContextTable::Find(v5, a1);
    if ( !v6 )
    {
      LOWORD(RpcBindingHandle) = 6;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    v7 = *((_DWORD *)a1 + 3);
    if ( (_BYTE)v2 )
    {
      v8 = v7 == 0;
    }
    else
    {
      if ( !v7 )
      {
        RpcBindingHandle = 50;
LABEL_16:
        RtlReleaseSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = 0;
        goto LABEL_17;
      }
      v8 = v7 == 1;
    }
    if ( !v8
      || (RpcBindingHandle = (unsigned int)NdrClientCall3(
                                             (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                             1u,
                                             0LL,
                                             v13,
                                             v2,
                                             v6).Pointer) == 0 )
    {
      v9 = *((_DWORD *)a1 + 3);
      v10 = v9 - 1;
      v11 = v9 + 1;
      if ( !(_BYTE)v2 )
        v11 = v10;
      RpcBindingHandle = 0;
      *((_DWORD *)a1 + 3) = v11;
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
