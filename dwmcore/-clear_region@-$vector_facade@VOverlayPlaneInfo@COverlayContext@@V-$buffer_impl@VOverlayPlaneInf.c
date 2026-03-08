/*
 * XREFs of ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C9BA4
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180086BB8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C98F0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?erase_unchecked@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@0@Z @ 0x1800C9B34 (-erase_unchecked@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800C9C28 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18012B004 (--$move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_iterator@P.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v9 = 0x6DB6DB6DB6DB6DB7LL * (v6 >> 5);
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 224 * v9;
    if ( v7 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[2] = v10;
  v13[0] = v4;
  v13[1] = v9;
  ((void (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>)(
    v14,
    v4 + 224 * v7,
    v3,
    v13);
LABEL_3:
  v11 = 224 * a3;
  result = detail::destruct_range<COverlayContext::OverlayPlaneInfo>((COverlayContext::OverlayPlaneInfo *)(v3 - v11));
  a1[1] -= v11;
  return result;
}
