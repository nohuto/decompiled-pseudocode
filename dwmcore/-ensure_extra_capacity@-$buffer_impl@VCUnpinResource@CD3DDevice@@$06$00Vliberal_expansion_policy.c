/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18028D228
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x18028D434 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180131030 (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18028C11C (--$uninitialized_move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_ite.c)
 */

void __fastcall detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  LPVOID v8; // rax
  const struct CD3DDevice::CUnpinResource *v9; // r8
  const struct CD3DDevice::CUnpinResource *v10; // rdx
  LPVOID v11; // rbx
  CD3DDevice::CUnpinResource *v12; // rcx
  bool v13; // zf
  __int64 v14; // rsi
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v3 - v4) >> 5 < a2 )
  {
    v5 = (v4 - *(_QWORD *)a1) >> 5;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - *(_QWORD *)a1) >> 5),
           (v3 - *(_QWORD *)a1) >> 5,
           v6);
    v8 = operator new(saturated_mul(v7, 0x20uLL));
    v9 = *(const struct CD3DDevice::CUnpinResource **)(a1 + 8);
    v10 = *(const struct CD3DDevice::CUnpinResource **)a1;
    v15[0] = v8;
    v15[2] = 0LL;
    v11 = v8;
    v15[1] = v5;
    std::uninitialized_move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
      (__int64)v16,
      v10,
      v9,
      v15);
    detail::destruct_range<CD3DDevice::CUnpinResource>(
      *(CD3DDevice::CUnpinResource **)a1,
      *(CD3DDevice::CUnpinResource **)(a1 + 8));
    v12 = *(CD3DDevice::CUnpinResource **)a1;
    v13 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *(_QWORD *)a1 + 32 * v5;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 32 * v7;
    *(_QWORD *)(a1 + 8) = v14;
  }
}
