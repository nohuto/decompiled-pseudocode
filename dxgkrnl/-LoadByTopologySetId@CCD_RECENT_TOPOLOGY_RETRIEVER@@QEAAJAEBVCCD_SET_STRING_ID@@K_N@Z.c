/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C01C0BAC
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C01C0ADC (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BF42C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01BF6DC (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01C0154 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        struct CCD_TOPOLOGY **this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // edi
  CCD_TOPOLOGY *v17; // rcx
  int TopologyClass; // eax
  struct CCD_TOPOLOGY *v19; // rcx
  int v20; // [rsp+50h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
    {
      if ( *((_BYTE *)SessionDataForSpecifiedSession + 18498) )
        return 3221226021LL;
    }
  }
  result = CCD_STORE::ForTopology(
             (__int64)a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             (__int64)this,
             0);
  if ( (int)result >= 0 )
  {
    v15 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(*this, a4);
    v16 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry5(2LL, v15, this, *this, *((_QWORD *)*this + 8), *((unsigned int *)this + 2));
    }
    else
    {
      v17 = *this;
      v20 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v17, (enum CCD_TOPOLOGY_CLASS *)&v20);
      v19 = *this;
      v16 = TopologyClass;
      if ( TopologyClass < 0 )
        WdLogSingleEntry3(2LL, TopologyClass, *this, *((_QWORD *)v19 + 8));
      else
        *(_DWORD *)(*((_QWORD *)v19 + 8) + 32LL) = v20;
    }
    return v16;
  }
  return result;
}
