/*
 * XREFs of ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x18028D434
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18028CCF8 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180131030 (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18028C058 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator.c)
 *     ??0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z @ 0x18028C1DC (--0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18028D228 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  CD3DDevice::CUnpinResource *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  const struct CD3DDevice::CUnpinResource *v11; // rbp
  const struct CD3DDevice::CUnpinResource *v12; // rdi
  __int64 v13; // rdi
  CD3DDevice::CUnpinResource *v14; // rdx
  _QWORD v16[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-48h] BYREF

  v3 = (__int64 *)a1;
  detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v4 = *v3;
  v5 = v3[1];
  v6 = (v5 - *v3) >> 5;
  v7 = v6 - a2;
  v8 = (CD3DDevice::CUnpinResource *)(*v3 + 32 * v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 32 * v9;
  v11 = (const struct CD3DDevice::CUnpinResource *)(v5 - v10);
  if ( v5 != v5 - v10 )
  {
    v12 = (const struct CD3DDevice::CUnpinResource *)(v5 - 32);
    CD3DDevice::CUnpinResource::CUnpinResource(v8, v12);
    if ( v12 != v11 )
      goto LABEL_6;
    v3 = (__int64 *)a1;
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v16[1] = v6;
      v16[2] = v6;
      v16[0] = v4;
      v13 = 32 * a2;
      std::move_backward<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        (__int64)v17,
        (__int64 *)(32 * a2 + v4),
        (__int64 *)(32 * v6 + v4 - 32),
        v16);
      goto LABEL_14;
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 32 * a2;
LABEL_14:
  v14 = (CD3DDevice::CUnpinResource *)(v4 + 32 * (a2 + 1));
  if ( v8 < v14 )
    v14 = v8;
  detail::destruct_range<CD3DDevice::CUnpinResource>((CD3DDevice::CUnpinResource *)(v13 + v4), v14);
  v3[1] += 32LL;
  return v13 + v4;
}
