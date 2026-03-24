/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016BFBC
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C016BF30 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01394D8 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013A550 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C013A5C0 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C013A828 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C013C828 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C02EA9B0 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int active; // r10d
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  __int64 (__fastcall **v15)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v16)(CCD_BTL *, int *); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  _QWORD *v23; // rax
  CCD_TOPOLOGY *v24; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  __int16 v29; // [rsp+50h] [rbp-20h]
  __int128 v30; // [rsp+58h] [rbp-18h]
  CCD_TOPOLOGY *v31; // [rsp+98h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v24 = a2;
  v25 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v31, 96);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
              (__int64)&v24,
              4) < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v31);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v24);
    LOBYTE(v9) = 1;
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v24, v9, v10, v11);
    if ( v31 )
      CCD_TOPOLOGY::ClearReservedFields(v31);
  }
  if ( active < 0 )
    return (unsigned int)active;
  v13 = *((_QWORD *)a2 + 8);
  if ( v13 )
    v14 = *(_WORD *)(v13 + 20);
  else
    v14 = 0;
  if ( v25 > v14 )
    active = -1073741789;
  if ( a3 )
    *a3 = v25;
  if ( active < 0 )
    return (unsigned int)active;
  v15 = *this;
  v26 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v16 = *v15;
  v29 = 0;
  v30 = 0LL;
  v17 = v16((CCD_BTL *)this, &v26);
  v20 = v17;
  if ( v17 < 0
    || (v21 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v26), v20 = v21, v21 < 0) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v23[3] = v20;
    v23[4] = &v26;
    v23[5] = a2;
    v23[6] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v23);
  }
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v26);
  return (unsigned int)v20;
}
