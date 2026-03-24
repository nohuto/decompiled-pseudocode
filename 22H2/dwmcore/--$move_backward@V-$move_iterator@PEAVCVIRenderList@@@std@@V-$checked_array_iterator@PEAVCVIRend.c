/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x180169AE8
 * Callers:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1800CE0CC (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 * Callees:
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // r8
  const void *v5; // r10
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a3 - (_QWORD)a2;
  v5 = a2;
  v8 = v4 / -40;
  if ( v4 / -40 < 0 && a4[2] < (unsigned __int64)(v4 / 40) || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8);
    __debugbreak();
  }
  v9 = *a4;
  v10 = (__int64)memmove_0((void *)(*a4 + 40 * a4[2] - v4), v5, v4) - v9;
  result = a1;
  a4[2] = v10 / 40;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
