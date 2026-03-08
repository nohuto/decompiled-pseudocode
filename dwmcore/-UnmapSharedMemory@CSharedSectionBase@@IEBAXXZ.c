/*
 * XREFs of ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800F5D50
 * Callers:
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800F5D1C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F8530 (-OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x1800F5DA0 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSharedSectionBase::UnmapSharedMemory(CSharedSectionBase *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 40LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL)) )
    CComposition::UnmapSharedSectionView(*((CComposition **)this + 2), *((void **)this + 10));
  else
    UnmapViewOfFile(*((LPCVOID *)this + 10));
}
