/*
 * XREFs of ??_G?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1801046E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180011F7C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_pol.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`scalar deleting destructor'(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // si
  void *v6; // rdi
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v4 = a2;
  v6 = (void *)a1[7];
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>>(
      (_QWORD *)a1[7],
      (_QWORD *)a1[8]);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((a1[9] - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[7] = 0LL;
    a1[8] = 0LL;
    a1[9] = 0LL;
  }
  v7 = (Microsoft::BamoImpl::BamoImplObject *)a1[4];
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
