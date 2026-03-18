/*
 * XREFs of ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18000DB34
 * Callers:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000DAD0 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FF258 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DB6C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029E58 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EBF10 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchCommand::Destroy(CBatchCommand *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this != 1 )
    {
      switch ( *(_DWORD *)this )
      {
        case 2:
          wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((char *)this + 8);
          return;
        case 3:
          wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((char *)this + 8);
          return;
        case 4:
          if ( *((_QWORD *)this + 12) )
            std::default_delete<CDrawListPrimitive>::operator()();
          break;
        case 5:
          break;
        default:
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
    }
    wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((char *)this + 8);
  }
}
