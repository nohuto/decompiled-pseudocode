struct ICompObjectDiagnosticsRootProxy *__fastcall DiagnosticCallbacksManager::TryGetProxyForPeer(
        DiagnosticCallbacksManager *this,
        unsigned int a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r11
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 32,
    (__int64)v5,
    &v7);
  if ( *(_BYTE *)(v6 + 25) || v2 < *(_DWORD *)(v6 + 32) || v6 == *v3 )
    return 0LL;
  else
    return *(struct ICompObjectDiagnosticsRootProxy **)(v6 + 40);
}
