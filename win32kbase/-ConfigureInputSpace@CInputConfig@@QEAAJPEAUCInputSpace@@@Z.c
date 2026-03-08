/*
 * XREFs of ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C021356C
 * Callers:
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010938 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0012FE8 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0013CC0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 */

__int64 __fastcall CInputConfig::ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  CInputConfig *v2; // rbx
  CInputConfig *v4; // rcx
  int v5; // edi

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  if ( *((_BYTE *)v2 + 1504) )
  {
    *((_BYTE *)v2 + 1504) = 0;
    while ( *(CInputConfig **)v2 != v2 )
      CInputConfig::_FreeInputSpace(v4, *(struct _LIST_ENTRY **)v2);
  }
  *((_BYTE *)v2 + 1505) = 1;
  v5 = CInputConfig::_ConfigureInputSpace(v2, a2);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
    return (unsigned int)v5;
  CInputConfig::_NotifyExternalComponents(v2);
  return 0LL;
}
