/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802A0C40
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802A0EA4 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A0EE4 (--1CHolographicManager@@EEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1802A2FB0 (-_Change_array@-$vector@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wi.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
        CResource **a1,
        CResource **a2)
{
  CResource **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CResource::InternalRelease(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
