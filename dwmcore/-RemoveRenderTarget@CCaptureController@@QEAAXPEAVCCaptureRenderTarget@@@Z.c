/*
 * XREFs of ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D54C
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EAD74 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E3CBC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x1801EADC4 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18021D5BC (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

void __fastcall CCaptureController::RemoveRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  char *v2; // rdi
  CRenderTarget **i; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 64;
  for ( i = (CRenderTarget **)*((_QWORD *)this + 8); i != *((CRenderTarget ***)this + 9); ++i )
  {
    if ( *i == a2 )
    {
      CRenderTarget::SetRootVisual(*i, 0LL);
      *((_BYTE *)*i + 1896) = 0;
      *((_QWORD *)*i + 13) = 0LL;
      CCaptureRenderTarget::SetTransform((struct CResource **)*i, 0LL);
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(v2, &v4, i);
      return;
    }
  }
}
