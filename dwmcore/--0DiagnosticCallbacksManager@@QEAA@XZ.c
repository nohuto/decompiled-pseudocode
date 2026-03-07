DiagnosticCallbacksManager *__fastcall DiagnosticCallbacksManager::DiagnosticCallbacksManager(
        DiagnosticCallbacksManager *this)
{
  SIZE_T size_of; // rax
  __int64 v3; // rax

  *(_QWORD *)this = &DiagnosticCallbacks_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (DiagnosticCallbacksManager *)((char *)this + 8),
    this);
  *((_QWORD *)this + 1) = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::`vftable';
  *(_QWORD *)this = &DiagnosticCallbacksManager::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 32) = v3;
  return this;
}
