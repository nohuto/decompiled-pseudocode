__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::CpuClipAASinkEnableIntermediates__(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"CpuClipAASinkEnableIntermediates", a2, 0LL);
  CCommonRegistryData::CpuClipAASinkEnableIntermediates = result;
  return result;
}
