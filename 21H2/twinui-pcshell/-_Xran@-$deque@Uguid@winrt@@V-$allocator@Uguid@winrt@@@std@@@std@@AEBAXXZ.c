/*
 * XREFs of ?_Xran@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBAXXZ @ 0x1800F34EC
 * Callers:
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800F350C (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 * Callees:
 *     <none>
 */

void std::deque<winrt::guid>::_Xran()
{
  std::_Xout_of_range("invalid deque<T> subscript");
  __debugbreak();
  JUMPOUT(0x1800F3504LL);
}
