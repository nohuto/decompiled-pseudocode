/*
 * XREFs of ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C02F5DD8
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C03B824C (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall GetUnusedVidpnSourceId(struct CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  bool v4; // dl
  bool v5; // cl
  bool v6; // r8
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  unsigned int k; // esi
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // ax
  _BYTE v22[64]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+74h] [rbp-24h]

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v22, 8u, 0);
  v24 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v5, v4, v6, (struct CCD_TOPOLOGY *)v22);
  for ( i = 0; i < 0x10; ++i )
  {
    for ( j = 0; ; ++j )
    {
      v9 = *((_QWORD *)this + 8);
      v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
      if ( j >= v10 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, j);
      if ( *((_DWORD *)PathDescriptor + 4) == a2->LowPart
        && *((_DWORD *)PathDescriptor + 5) == a2->HighPart
        && i == *((_DWORD *)PathDescriptor + 6) )
      {
        break;
      }
    }
    v12 = *((_QWORD *)this + 8);
    if ( v12 )
      v13 = *(_WORD *)(v12 + 20);
    else
      v13 = 0;
    if ( j >= v13 )
    {
      for ( k = 0; ; ++k )
      {
        v15 = v23;
        v16 = v23 ? *(_WORD *)(v23 + 20) : 0;
        if ( k >= v16 )
          break;
        v17 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v22, k);
        if ( _bittest64((const signed __int64 *)v17, 0x24u)
          && *((_DWORD *)v17 + 4) == a2->LowPart
          && *((_DWORD *)v17 + 5) == a2->HighPart
          && i == *((_DWORD *)v17 + 6) )
        {
          v15 = v23;
          break;
        }
      }
      v18 = *((_QWORD *)this + 8);
      v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
      if ( j >= v19 )
      {
        v20 = v15 ? *(_WORD *)(v15 + 20) : 0;
        if ( k >= v20 )
          break;
      }
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v22);
  return i;
}
