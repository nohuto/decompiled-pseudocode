/*
 * XREFs of ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x1C004EBA0
 * Callers:
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x1C002E034 (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C00780C0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0080BB4 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

_CM_RESOURCE_LIST *__fastcall FxCmResList::CreateWdmList(FxCmResList *this, unsigned __int64 PoolFlags)
{
  FxCollectionInternal *v2; // rbx
  unsigned int m_Count; // ecx
  _DWORD *v5; // r8
  _DWORD *Pool2; // rax
  unsigned int v7; // ecx
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY **p_Blink; // rcx

  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v5 = 0LL;
  if ( m_Count )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(PoolFlags, 20 * (m_Count + 1), this->m_Globals->Tag);
    v5 = Pool2;
    if ( Pool2 )
    {
      v7 = v2->m_Count;
      v8 = (_LIST_ENTRY *)(Pool2 + 5);
      Pool2[3] = 65537;
      *Pool2 = 1;
      Pool2[4] = v7;
      for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
      {
        p_Blink = &i[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v2 )
          break;
        v10 = *p_Blink;
        *v8 = *(_LIST_ENTRY *)((char *)*p_Blink + 104);
        LODWORD(v8[1].Flink) = v10[7].Blink;
        v8 = (_LIST_ENTRY *)((char *)v8 + 20);
      }
    }
  }
  return (_CM_RESOURCE_LIST *)v5;
}
