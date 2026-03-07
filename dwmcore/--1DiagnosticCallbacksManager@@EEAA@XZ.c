void __fastcall DiagnosticCallbacksManager::~DiagnosticCallbacksManager(DiagnosticCallbacksManager *this)
{
  void **v1; // rbx
  __int64 v3; // rcx

  v1 = (void **)((char *)this + 256);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *>>>(
    (__int64)this + 256,
    (__int64)this + 256,
    *(_QWORD *)(*((_QWORD *)this + 32) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DiagnosticCallbacksManager *)((char *)this + 8));
}
