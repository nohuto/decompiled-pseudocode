__int64 __fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::GetShared(void *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v1 = wil::details_abi::g_pProcessLocalData;
  if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
  {
    v3 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
    v4 = 0LL;
    if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v3, &v4) >= 0
      && !*(_QWORD *)(v1 + 8) )
    {
      *(_QWORD *)(v1 + 8) = v4;
    }
  }
  return (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
}
