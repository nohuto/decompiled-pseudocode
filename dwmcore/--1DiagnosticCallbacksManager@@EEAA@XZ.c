/*
 * XREFs of ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x1801B5C4C
 * Callers:
 *     ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x1801B5ED0 (--_EDiagnosticCallbacksManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1801B55BC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootProx.c)
 */

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
