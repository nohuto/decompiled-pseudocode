/*
 * XREFs of ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180232B50
 * Callers:
 *     ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18022D20C (--1-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180270DAC (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180232BC8 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  while ( a1[4] )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x10uLL);
  }
  v4 = (void *)a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
