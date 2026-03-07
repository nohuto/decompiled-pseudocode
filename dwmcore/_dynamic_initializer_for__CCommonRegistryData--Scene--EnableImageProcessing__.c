__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::Scene::EnableImageProcessing__(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"EnableImageProcessing", a2, 1LL);
  CCommonRegistryData::Scene::EnableImageProcessing = result;
  return result;
}
