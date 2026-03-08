/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03B704C
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C03BA400 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03BAF18 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(CCD_TOPOLOGY *this, unsigned int a2)
{
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // eax
  _DWORD *v11; // rcx

  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, a2);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  LODWORD(v6) = (unsigned __int16)v5;
  while ( (_DWORD)v6 )
  {
    v7 = v6 - 1;
    v6 = (unsigned int)(v6 - 1);
    v8 = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    if ( (*(_QWORD *)v8 & 0x4000000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 4718LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPath->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CLONE_GROUP_VALID",
        4718LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = *((_QWORD *)this + 8);
    v10 = 0;
    if ( *(_WORD *)(v9 + 20) )
    {
      v11 = (_DWORD *)(v9 + 240);
      while ( *v11 != *(_DWORD *)(296 * v6 + v9 + 240) )
      {
        ++v10;
        v11 += 74;
        if ( v10 >= *(unsigned __int16 *)(v9 + 20) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v10 = -559038737;
    }
    *((_DWORD *)v8 + 46) = v10 | 0xFE550000;
  }
}
