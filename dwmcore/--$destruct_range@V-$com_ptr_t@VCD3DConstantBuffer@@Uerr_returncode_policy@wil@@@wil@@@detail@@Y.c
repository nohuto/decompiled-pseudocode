/*
 * XREFs of ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x180029258
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180029114 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180029180 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ??_G?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180029294 (--_G-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall detail::destruct_range<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>::`scalar deleting destructor'(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
