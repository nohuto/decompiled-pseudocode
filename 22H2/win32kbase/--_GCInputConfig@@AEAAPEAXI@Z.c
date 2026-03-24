/*
 * XREFs of ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C0075EF4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00747B0 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0072104 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

struct _LIST_ENTRY **__fastcall CInputConfig::`scalar deleting destructor'(struct _LIST_ENTRY **this)
{
  CInputConfig *v2; // rcx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v2, *this);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  Win32FreePool((__int64)this);
  return this;
}
