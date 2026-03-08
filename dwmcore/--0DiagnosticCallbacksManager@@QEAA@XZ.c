/*
 * XREFs of ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x1800AF64C
 * Callers:
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800AF3D0 (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800AF2A8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

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
