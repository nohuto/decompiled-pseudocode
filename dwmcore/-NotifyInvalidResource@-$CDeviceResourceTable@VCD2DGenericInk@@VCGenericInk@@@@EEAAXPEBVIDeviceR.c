/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1801C2820
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180029318 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C7ECC (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx

  v2 = (_QWORD *)((char *)a1 + 16);
  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  while ( v4 != *((__int64 **)a1 + 3) )
  {
    v6 = *v4;
    if ( *v4 )
      v7 = *(int *)(*(_QWORD *)(v6 + 16) + 8LL) + v6 + 16;
    else
      v7 = 0LL;
    if ( v7 == a2 )
    {
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v6 + 104), a1);
      v8 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v8,
        1LL);
      v4 = (__int64 *)(*v2 + 8 * v8);
    }
    else
    {
      ++v4;
    }
  }
}
