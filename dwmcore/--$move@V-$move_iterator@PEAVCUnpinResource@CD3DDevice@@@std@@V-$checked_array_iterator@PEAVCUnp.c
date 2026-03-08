/*
 * XREFs of ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x180288CBC
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18028B7E0 (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 * Callees:
 *     ??4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x180289018 (--4CUnpinResource@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = (a3 - a2) >> 5;
  if ( v8 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v8 )
      goto LABEL_3;
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 0 && a4[1] - *v5 < (unsigned __int64)v8 )
    goto LABEL_8;
LABEL_3:
  v10 = *a4 + 32 * *v5;
  while ( v4 != a3 )
  {
    CD3DDevice::CUnpinResource::operator=(v10, v4);
    v10 += 32LL;
    v4 += 32LL;
  }
  result = a1;
  *v5 = (v10 - *a4) >> 5;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
