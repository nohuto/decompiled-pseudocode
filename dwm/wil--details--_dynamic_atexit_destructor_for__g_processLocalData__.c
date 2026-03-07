__int64 wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  return wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>((__int64)&wil::details::g_processLocalData);
}
