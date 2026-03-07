__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rsi
  __int64 Container; // rax
  VIDPN_MGR *v6; // rbx
  int FirstAvailableTarget; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned int v24; // [rsp+90h] [rbp+48h] BYREF
  int v25; // [rsp+98h] [rbp+50h] BYREF
  int v26; // [rsp+A0h] [rbp+58h] BYREF
  int v27; // [rsp+A8h] [rbp+60h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v24 = -1;
  v26 = -2;
  v27 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v25 = 0;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, v3, 1, &v24, &v26, &v27, &v25);
    v8 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v18 = *((unsigned int *)a2 + 3);
      if ( !*((_QWORD *)v6 + 1) )
        WdLogSingleEntry0(1LL);
      v19 = *((_QWORD *)v6 + 1);
      v20 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 404LL);
      if ( !v19 )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(2LL, v8, *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 408LL), v20, v18);
      return (unsigned int)v8;
    }
    if ( v25 )
    {
      LODWORD(v3) = v24;
    }
    else
    {
      v3 = v24;
      v9 = VIDPN_MGR::AddPathToVidPnTopology(
             v6,
             a1,
             *((_DWORD *)a2 + 3),
             v24,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
             0xFFFFu,
             0,
             D3DKMDT_MCC_ENFORCE);
      v10 = v9;
      if ( v9 != -1071774975 )
      {
        if ( v9 >= 0 )
        {
          *((_DWORD *)a2 + 5) = v26;
          *((_DWORD *)a2 + 6) = v27;
          *((_DWORD *)a2 + 4) = v3;
        }
        else
        {
          v14 = *((unsigned int *)a2 + 3);
          if ( !*((_QWORD *)v6 + 1) )
            WdLogSingleEntry0(1LL);
          v15 = *((_QWORD *)v6 + 1);
          v16 = *(unsigned int *)(*(_QWORD *)(v15 + 16) + 404LL);
          if ( !v15 )
            WdLogSingleEntry0(1LL);
          WdLogSingleEntry5(2LL, v10, *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 408LL), v16, v14, v3);
        }
        return (unsigned int)v10;
      }
      v11 = *((unsigned int *)a2 + 3);
      if ( !*((_QWORD *)v6 + 1) )
        WdLogSingleEntry0(1LL);
      v12 = *((_QWORD *)v6 + 1);
      v13 = *(unsigned int *)(*(_QWORD *)(v12 + 16) + 404LL);
      if ( !v12 )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(7LL, *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 408LL), v13, v11, v3);
    }
  }
  v21 = *((unsigned int *)a2 + 3);
  if ( !*((_QWORD *)v6 + 1) )
    WdLogSingleEntry0(1LL);
  v22 = *((_QWORD *)v6 + 1);
  v23 = *(unsigned int *)(*(_QWORD *)(v22 + 16) + 404LL);
  if ( !v22 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry3(7LL, *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 408LL), v23, v21);
  return 3223192371LL;
}
