/*
 * XREFs of ?CalcIndependentFlipSupport@CDirectFlipInfo@@IEAAXXZ @ 0x180183D8C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x180183B20 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDirectFlipInfo::CalcIndependentFlipSupport(CDirectFlipInfo *this)
{
  __int64 v2; // rax

  if ( !CCommonRegistryData::m_fDisableIndependentFlip && *((_DWORD *)this + 13) != 1 && *((int *)this + 13) < 3 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2) )
      *((_DWORD *)this + 24) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  }
}
