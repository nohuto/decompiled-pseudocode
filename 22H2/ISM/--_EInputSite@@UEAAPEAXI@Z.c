/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x18000B410
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180001F08 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Destroy@?$_Variant_base@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAXXZ @ 0x180044B20 (-_Destroy@-$_Variant_base@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  __int64 v4; // rdi
  InputSite **v5; // r8
  InputSite **i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi

  *(_QWORD *)this = &InputSite::`vftable';
  v4 = *((_QWORD *)this + 53);
  v5 = *(InputSite ***)(v4 + 64);
  for ( i = *(InputSite ***)(v4 + 56); i != v5; ++i )
  {
    if ( *i == this )
      break;
  }
  memmove_0(i, i + 1, (char *)v5 - (char *)(i + 1));
  *(_QWORD *)(v4 + 64) -= 8LL;
  v7 = *((_QWORD *)this + 53);
  if ( v7 )
  {
    *((_QWORD *)this + 53) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = *((_QWORD *)this + 50);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(
      *((_QWORD *)this + 50),
      *((_QWORD *)this + 51));
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 52) - v8) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
  }
  if ( *((_BYTE *)this + 392) )
    std::_Variant_base<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::_Destroy();
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
