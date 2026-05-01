/*
 * XREFs of ??0PrivilegedWindowOwnershipOperations@@QEAA@XZ @ 0x1802990CC
 * Callers:
 *     ??$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowOwnershipOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802988CC (--$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Mic.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180040044 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

PrivilegedWindowOwnershipOperations *__fastcall PrivilegedWindowOwnershipOperations::PrivilegedWindowOwnershipOperations(
        PrivilegedWindowOwnershipOperations *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((PrivilegedWindowOwnershipOperations *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedWindowOwnershipOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedWindowOwnershipOperations'};
  *v2 = &PrivilegedWindowOwnershipOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &PrivilegedWindowOwnershipOperations::`vftable'{for `IPrivilegedWindowOwnershipOperations'};
  *v2 = &PrivilegedWindowOwnershipOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
