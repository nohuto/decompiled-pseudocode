__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  __int64 v5; // rdi
  void **ModalitySetId; // rax
  int v7; // eax
  signed int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v9);
  v5 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v7 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId((__int64)a1, (__int64)ModalitySetId, v9);
    v5 = v7;
    if ( v7 >= 0 )
      return (unsigned int)v5;
LABEL_6:
    WdLogSingleEntry3(2LL, v5, a2, *((_QWORD *)a2 + 8));
    return (unsigned int)v5;
  }
  WdLogSingleEntry3(2LL, a2, *((_QWORD *)a2 + 8), *(int *)ModalitySetId);
  return 3221225473LL;
}
