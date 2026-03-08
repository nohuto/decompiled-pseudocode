/*
 * XREFs of ??$move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801CF948
 * Callers:
 *     ?clear_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008C9C8 (-clear_region@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScop.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801CFCF8 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r14
  signed __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v5 = a4 + 2;
  v8 = 0xD37A6F4DE9BD37A7uLL * ((a3 - a2) >> 3);
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
  v10 = *a4 + 184LL * *v5;
  while ( v4 != a3 )
  {
    CScopedClipStack::ClippingScopeState::operator=(v10, v4);
    v10 += 184LL;
    v4 += 184LL;
  }
  result = a1;
  *v5 = 0xD37A6F4DE9BD37A7uLL * ((v10 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
