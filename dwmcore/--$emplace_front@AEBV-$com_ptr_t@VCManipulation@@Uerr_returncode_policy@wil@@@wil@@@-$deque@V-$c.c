/*
 * XREFs of ??$emplace_front@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180270720
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180271E8C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAX_K@Z @ 0x180236184 (-_Growmap@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@AEA.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180270A38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi

  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(*(_QWORD *)(a1 + 32) + 2LL) >> 1 )
    std::deque<CInteractionTracker *>::_Growmap((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24) & (2 * v4 - 1);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
    v5 = 2 * v4;
  v6 = v5 - 1;
  v7 = (v6 >> 1) & (v4 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) + 8 * (v6 & 1),
    *a2);
  *(_QWORD *)(a1 + 24) = v6;
  ++*(_QWORD *)(a1 + 32);
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (v6 >> 1))) + 8 * (v6 & 1);
}
