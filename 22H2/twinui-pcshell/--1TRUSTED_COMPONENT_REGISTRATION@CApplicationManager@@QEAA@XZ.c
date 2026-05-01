/*
 * XREFs of ??1TRUSTED_COMPONENT_REGISTRATION@CApplicationManager@@QEAA@XZ @ 0x1801B7660
 * Callers:
 *     _AppViewDataSourceAdapterBase::InitializeDataSource_::_1_::dtor$3 @ 0x1803AD057 (_AppViewDataSourceAdapterBase--InitializeDataSource_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::TRUSTED_COMPONENT_REGISTRATION::~TRUSTED_COMPONENT_REGISTRATION(
        CApplicationManager::TRUSTED_COMPONENT_REGISTRATION *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
