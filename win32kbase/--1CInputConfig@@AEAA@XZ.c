/*
 * XREFs of ??1CInputConfig@@AEAA@XZ @ 0x1C0094AE8
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010938 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInputConfig::~CInputConfig(struct _LIST_ENTRY **this)
{
  CInputConfig *v2; // rcx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v2, *this);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
}
