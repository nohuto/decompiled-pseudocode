/*
 * XREFs of ?clear_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180022074
 * Callers:
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C8C8 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C568 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D7A4C (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 * Callees:
 *     ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x1800221EC (--$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScoped.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801CFA2C (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * (v6 >> 3);
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 40 * v9;
    if ( a2 + a3 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[1] = v9;
  v13[0] = v4;
  v13[2] = v10;
  ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
    v14,
    v4 + 40 * v7,
    v3,
    v13);
LABEL_3:
  v11 = 40 * a3;
  result = detail::destruct_range<CScopedClipStack::CpuClipStackState>((CShapePtr *)(v3 - v11));
  a1[1] -= v11;
  return result;
}
