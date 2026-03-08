/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180219F7C
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18021A088 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801BCB64 (--$destruct_range@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV-$.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801D4304 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  LPVOID v9; // rax
  __int64 *v10; // r8
  __int64 *v11; // rdx
  LPVOID v12; // rbx
  __int64 *v13; // rcx
  bool v14; // zf
  __int64 *v15; // rcx
  __int64 v16[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - *(_QWORD *)a1) >> 3;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *(_QWORD *)a1) >> 3),
           (v3 - *(_QWORD *)a1) >> 3,
           v7);
    v9 = operator new(saturated_mul(v8, 8uLL));
    v10 = *(__int64 **)(a1 + 8);
    v11 = *(__int64 **)a1;
    v16[0] = (__int64)v9;
    v16[2] = 0LL;
    v12 = v9;
    v16[1] = v6;
    std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *>>(
      (__int64)v17,
      v11,
      v10,
      v16);
    detail::destruct_range<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    v13 = *(__int64 **)a1;
    v14 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *(__int64 **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v6;
    result = (unsigned __int64)&v15[v8];
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
