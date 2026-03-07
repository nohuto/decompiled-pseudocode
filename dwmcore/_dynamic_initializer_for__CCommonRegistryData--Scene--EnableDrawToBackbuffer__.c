__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::Scene::EnableDrawToBackbuffer__(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"EnableDrawToBackbuffer", a2, 1LL);
  CCommonRegistryData::Scene::EnableDrawToBackbuffer = result;
  return result;
}
