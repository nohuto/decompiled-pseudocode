__int64 __fastcall DiagnosticCallbacksManager::OnPeerDisconnected(
        DiagnosticCallbacksManager *this,
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)((*(__int64 (__fastcall **)(struct DiagnosticCallbacks_AutoBamos::BamoPeer *))(*(_QWORD *)a2 + 8LL))(a2)
                 + 36);
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::erase(
    (char *)this + 256,
    &v4);
  return 0LL;
}
