/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801BA76C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCRenderTarget@@@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCRenderTarget@@@Z @ 0x1801BA48C (--$_Emplace_reallocate@AEAPEAVCRenderTarget@@@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returnc.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021A1B0 (--$_Emplace_reallocate@V-$com_ptr_t@VCBitmapResource@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CBitmapResource,wil::err_returncode_policy>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rdi
  __int64 *v9; // rbp
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    while ( v4 != v9 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v4++);
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
