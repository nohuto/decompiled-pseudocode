/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802545C8
 * Callers:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180253E40 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v8; // rax
  __int64 v9; // rax
  CRenderTargetBitmap *v10; // rcx
  CRenderTargetBitmap *v11; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 8);
  v8 = v3;
  if ( (__int64 *)(a3 + 8) != v3 )
  {
    do
    {
      v9 = *v4;
      *v4 = 0LL;
      v10 = (CRenderTargetBitmap *)*(v4 - 1);
      *(v4 - 1) = v9;
      if ( v10 )
        CRenderTargetBitmap::Release(v10);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
    v8 = v3;
  }
  v11 = (CRenderTargetBitmap *)*(v3 - 1);
  if ( v11 )
  {
    CRenderTargetBitmap::Release(v11);
    v8 = *(__int64 **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}
