void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        _QWORD *a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::~ThreadLocalStorage<wil::details_abi::ThreadLocalData>(a1 + 5);
  v3 = (wil::details *)a1[3];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (wil::details *)a1[2];
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  v5 = (wil::details *)a1[1];
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
}
