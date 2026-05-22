/*
 * XREFs of ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x180142A80
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180142D04 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rsi
  bool v8; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rax
  const char *v10; // r9
  void (__fastcall ***v11)(_QWORD); // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v5 = *a3;
  v6 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*a3 + 32) + 32LL));
  v7 = 0LL;
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v5 + 16), v6, v8);
  if ( Stub )
    v7 = (void (__fastcall ***)(_QWORD))((char *)Stub - 16);
  if ( (void (__fastcall ***)(_QWORD))*a2 != v7 )
  {
    if ( v7 )
      (**v7)(v7);
    v11 = (void (__fastcall ***)(_QWORD))*a2;
    *a2 = v7;
    if ( v11 )
      (*v11)[1](v11);
  }
  if ( !*a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      192LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v10);
  v12 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  return a2;
}
