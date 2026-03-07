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
