/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C08E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C01BF27C (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_TOPOLOGY **a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const struct CCD_SET_STRING_ID *v7; // rbx
  int v8; // eax
  __int16 v9; // ax
  CCD_TOPOLOGY *v10; // rcx
  int Topology; // eax
  unsigned int v12; // ebx

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v7 = SetId;
  if ( !SetId )
  {
    v8 = -1073741823;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)SetId;
  if ( v8 < 0 )
  {
LABEL_11:
    WdLogSingleEntry2(2LL, v7, v8);
    return 3221225473LL;
  }
  v9 = *((_WORD *)v7 + 16);
  v10 = *a2;
  if ( !v9 )
  {
    WdLogSingleEntry4(2LL, this, v7, *a2, *((_QWORD *)v10 + 8));
    return 3221225473LL;
  }
  *((_WORD *)a2 + 6) = v9;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(v10, *((unsigned __int16 *)v7 + 16), v5, v6) < *((_WORD *)v7 + 16) )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *a2);
  v12 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, Topology, this, *a2, *((_QWORD *)*a2 + 8));
  return v12;
}
