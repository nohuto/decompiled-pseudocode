/*
 * XREFs of ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800E2CEC
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E2C04 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180024768 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800E2DF0 (--0-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::CEffectCompilationService(
        CEffectCompilationService *this,
        struct IMessageSession *a2)
{
  SIZE_T size_of; // rax
  _QWORD *v5; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 15) = v5;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 7LL;
  *((_QWORD *)this + 21) = 8LL;
  *((_DWORD *)this + 28) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 17,
    0x10uLL,
    *((_QWORD *)this + 15));
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>((char *)this + 176);
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
