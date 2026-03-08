/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x1801BE62C
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801BEC48 (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x1801BEC94 (--1CInk@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801C7DB4 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V.c)
 */

void __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(_QWORD *a1)
{
  void **v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rcx
  void *v6; // rcx
  bool v7; // zf

  v1 = (void **)(a1 + 2);
  *a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  v3 = a1[2];
  v4 = a1[3];
  while ( v3 != v4 )
  {
    v5 = *(_QWORD *)v3 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 16LL) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, a1);
    v3 += 8LL;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  v6 = *v1;
  v7 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v7 )
    v6 = 0LL;
  operator delete(v6);
}
