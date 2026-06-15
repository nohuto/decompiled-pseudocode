/*
 * XREFs of ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x1800330A0
 * Callers:
 *     ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x180031530 (-GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z.c)
 * Callees:
 *     <none>
 */

void std::vector<unsigned long>::_Xrange()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  __debugbreak();
  JUMPOUT(0x1800330B8LL);
}
