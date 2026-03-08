/*
 * XREFs of ?clear_region@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008C9C8
 * Callers:
 *     ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C89C (-clear@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeState@.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C568 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008D178 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1801D2E10 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1801CF948 (--$move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked_array_iterato.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 i; // rbx
  __int64 v14; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  result = 0xD37A6F4DE9BD37A7uLL;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v10 = 0xD37A6F4DE9BD37A7uLL * (v7 >> 3);
  v11 = a2;
  if ( a2 + a3 > v10 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 184 * v10;
    if ( v8 == v10 )
      goto LABEL_3;
  }
  if ( v11 && (!v4 || v11 < 0 || v10 < v11) )
    _invalid_parameter_noinfo_noreturn();
  v15[2] = v11;
  v15[0] = v4;
  v15[1] = v10;
  result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>)(
             v16,
             v4 + 184 * v8,
             v3,
             v15);
LABEL_3:
  v12 = 184 * a3;
  for ( i = v3 - 184 * a3; i != v3; i += 184LL )
  {
    v14 = *(_QWORD *)(i + 168);
    if ( v14 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, a2, a3, v11);
  }
  a1[1] -= v12;
  return result;
}
