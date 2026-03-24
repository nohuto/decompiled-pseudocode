/*
 * XREFs of ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0099E00
 * Callers:
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C0099E1C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0099EF4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 */

__int64 DispBrokerAsyncSessionSwitched(void)
{
  DispBrokerUpdateKernelDisplayPolicies();
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
}
