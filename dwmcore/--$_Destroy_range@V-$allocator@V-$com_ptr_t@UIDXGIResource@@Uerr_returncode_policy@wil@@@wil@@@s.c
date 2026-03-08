/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x1800762D4 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800FD598 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18012CE14 (-_Change_array@-$vector@V-$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801E91F4 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801EB094 (-clear@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x18021D0A4 (--1CCaptureController@@EEAA@XZ.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180260250 (--1CSceneWorld@@MEAA@XZ.c)
 *     ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180260464 (-Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180270BF8 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802A9040 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
}
