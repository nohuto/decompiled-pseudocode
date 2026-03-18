/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C000F8FC
 * Callers:
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C000F7B0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 * Callees:
 *     DrvDxgkConfigureKernelDisplayPolicy @ 0x1C000F99C (DrvDxgkConfigureKernelDisplayPolicy.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C000F9DC (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 */

void DispBrokerUpdateKernelDisplayPolicies(void)
{
  unsigned int *v0; // rax
  unsigned int v1; // edi
  unsigned int v2; // ebx

  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)DispBroker::DispBrokerClient::s_pSessionBroker);
  v0 = (unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker;
  v1 = 0;
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    v0 = (unsigned int *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
  v2 = *v0;
  DrvDxgkConfigureKernelDisplayPolicy(1LL, *v0 != 0);
  DrvDxgkConfigureKernelDisplayPolicy(2LL, v2 == 0);
  LOBYTE(v1) = v2 <= 1;
  DrvDxgkConfigureKernelDisplayPolicy(3LL, v1);
  DrvDxgkConfigureKernelDisplayPolicy(4LL, *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 8));
  DrvDxgkConfigureKernelDisplayPolicy(5LL, *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 9));
}
