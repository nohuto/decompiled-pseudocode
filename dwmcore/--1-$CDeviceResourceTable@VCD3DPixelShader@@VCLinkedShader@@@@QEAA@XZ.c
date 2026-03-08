/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x180020210
 * Callers:
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1800201A0 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800201E8 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>(
        struct IDeviceResourceNotify *a1)
{
  void **v1; // rdi
  CD3DResource **v3; // rbx
  CD3DResource **v4; // rbp
  void *v5; // rcx
  bool v6; // zf

  v1 = (void **)((char *)a1 + 16);
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  v3 = (CD3DResource **)*((_QWORD *)a1 + 2);
  v4 = (CD3DResource **)*((_QWORD *)a1 + 3);
  while ( v3 != v4 )
    CD3DResource::RemoveResourceNotifier(*v3++, a1);
  detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  v5 = *v1;
  v6 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v6 )
    v5 = 0LL;
  operator delete(v5);
}
