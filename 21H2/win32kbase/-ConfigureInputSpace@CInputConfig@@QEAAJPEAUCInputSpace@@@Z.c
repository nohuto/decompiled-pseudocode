/*
 * XREFs of ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01E395C
 * Callers:
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C009F3EC (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0CC4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
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
