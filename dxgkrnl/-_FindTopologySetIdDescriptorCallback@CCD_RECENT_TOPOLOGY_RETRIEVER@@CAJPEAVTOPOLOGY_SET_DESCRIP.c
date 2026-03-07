__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  unsigned __int16 *v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  void **v10; // rsi
  int SetIdFromRegistry; // eax
  CCD_TOPOLOGY *OverflowTopology; // rax
  struct CCD_TOPOLOGY *v13; // rsi
  int v14; // eax
  CCD_SET_STRING_ID *v15; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rax
  unsigned int v17; // esi
  bool IsSimilarTopology; // al
  int TopologyClass; // eax
  unsigned int v20; // r14d
  __int64 v21; // rsi
  int v22; // [rsp+68h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v7 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v8 = -1073741823;
    goto LABEL_33;
  }
  v8 = *(_DWORD *)SetId;
  if ( v8 < 0 )
  {
LABEL_33:
    WdLogSingleEntry2(2LL, v7, v8);
    return 0LL;
  }
  v9 = v7[16];
  if ( !(_WORD)v9 )
  {
    WdLogSingleEntry4(2LL, this, v7, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
    return 0LL;
  }
  v10 = (void **)*((_QWORD *)a2 + 23);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(v10[12], L"SetId", (__int64)v10);
  if ( SetIdFromRegistry < 0 )
  {
    WdLogSingleEntry3(2LL, SetIdFromRegistry, v10, v10[12]);
    WdLogSingleEntry5(1LL, this, v7, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((_QWORD *)a2 + 23));
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)v7, (const struct CCD_SET_STRING_ID *)v10) )
    return 0LL;
  OverflowTopology = CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v13 = OverflowTopology;
  if ( !OverflowTopology )
  {
    WdLogSingleEntry1(6LL, v9);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, (const struct CCD_SET_STRING_ID *)v7);
  v14 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(v13, 0);
  if ( v14 < 0 )
  {
    WdLogSingleEntry5(3LL, v14, v13, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((unsigned int *)a2 + 2));
    return 0LL;
  }
  v15 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 24);
  if ( v15 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v15, (const struct CCD_SET_STRING_ID *)v7);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16), (__int64)v7);
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 23),
                                                 0xFu);
    if ( RecentTopologySetId )
      goto LABEL_13;
    WdLogSingleEntry4(2LL, this, *((_QWORD *)a2 + 23), *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
    return 3221225495LL;
  }
  v22 = 0;
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v13, (enum CCD_TOPOLOGY_CLASS *)&v22);
  v20 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    WdLogSingleEntry5(2LL, TopologyClass, v13, *((_QWORD *)a2 + 23), *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
    return v20;
  }
  v21 = v22;
  if ( !v22 )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned int)v21 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 23),
                                               v21);
  if ( !RecentTopologySetId )
  {
    WdLogSingleEntry5(2LL, v21, this, *((_QWORD *)a2 + 23), *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
    return 3221225495LL;
  }
LABEL_13:
  v17 = *(_DWORD *)RecentTopologySetId;
  if ( *(int *)RecentTopologySetId >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, (const struct CCD_SET_STRING_ID *)v7);
    goto LABEL_15;
  }
  WdLogSingleEntry4(3LL, *(int *)RecentTopologySetId, RecentTopologySetId, *(_QWORD *)a2, *((unsigned int *)a2 + 2));
  return v17;
}
