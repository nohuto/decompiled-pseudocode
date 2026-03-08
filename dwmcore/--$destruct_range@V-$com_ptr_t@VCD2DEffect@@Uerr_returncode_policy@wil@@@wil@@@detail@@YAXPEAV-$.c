/*
 * XREFs of ??$destruct_range@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801BCB64
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C7E04 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180219F7C (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18021A088 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>(__int64 *a1, __int64 *a2)
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
