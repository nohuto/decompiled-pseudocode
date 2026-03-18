/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x1800F695C
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800F6910 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x1801C3B50 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1802288C0 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800F6990 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

void __fastcall CSharedSectionBase::~CSharedSectionBase(CSharedSectionBase *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 10) == 0LL;
  *(_QWORD *)this = &CSharedSectionBase::`vftable';
  if ( !v1 )
    CSharedSectionBase::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
