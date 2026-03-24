/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0167880
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014887C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE9E8 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EF524 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02F0E5C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0167960 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  unsigned int i; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned __int16 v28; // ax

  CCD_TOPOLOGY::Clear(this);
  v4 = *((_QWORD *)a2 + 8);
  v5 = 0;
  if ( v4 )
    v6 = *(_WORD *)(v4 + 20);
  else
    v6 = 0;
  if ( v4 )
    v7 = *(_WORD *)(v4 + 20);
  else
    v7 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v6) < v7 )
  {
    v24 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v24 + 24) = this;
    v25 = *((_QWORD *)a2 + 8);
    if ( v25 )
      v5 = *(_WORD *)(v25 + 20);
    *(_QWORD *)(v24 + 32) = v5;
    WdLogEvent5_WdLowResource(v24);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v12) = 0;
    for ( i = 0; ; ++i )
    {
      v14 = *((_QWORD *)a2 + 8);
      v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
      if ( i >= v15 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v18 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v17);
      v12 = v18;
      if ( v18 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdAssertion(v20, v19);
        v26[3] = v12;
        v26[4] = i;
        v26[5] = this;
        v27 = *((_QWORD *)a2 + 8);
        if ( v27 )
          v28 = *(_WORD *)(v27 + 20);
        else
          v28 = 0;
        v26[6] = v28;
        WdLogEvent5_WdAssertion(v26);
        break;
      }
    }
    if ( (int)v12 >= 0 )
    {
      v21 = *((_QWORD *)this + 8);
      if ( v21 )
      {
        v22 = *((_QWORD *)a2 + 8);
        if ( v22 )
        {
          *(_OWORD *)v21 = *(_OWORD *)v22;
          *(_DWORD *)(v21 + 16) = *(_DWORD *)(v22 + 16);
        }
      }
    }
    return (unsigned int)v12;
  }
}
