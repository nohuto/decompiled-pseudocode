/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800ED5EC
 * Callers:
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x180013F6C (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180043620 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081BBC (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18009B504 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18009B6A4 (--1CTreeData@@UEAA@XZ.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x1800A42DC (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800DE2D0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1800ED658 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18020DDB0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800ED82C (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801D4088 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v9 = v7 >> 3;
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 8 * v9;
    if ( a2 + a3 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[2] = v10;
  v13[0] = v4;
  v13[1] = v9;
  ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>)(
    v14,
    v4 + 8 * v8,
    v3,
    v13);
LABEL_3:
  v11 = 8 * a3;
  result = detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(
             v3 - v11,
             v3,
             a3,
             v10);
  a1[1] -= v11;
  return result;
}
