/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x1800F5D1C
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800F5CD0 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x1801C0920 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1802252D0 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800F5D50 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
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
