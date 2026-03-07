__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v7; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  struct DMMVIDPN *v11; // rbx
  __int64 *v12; // r13
  int NumPathsFromSource; // eax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  unsigned int i; // esi
  char v22; // al
  __int64 v24; // [rsp+20h] [rbp-E0h]
  _BYTE v25[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[272]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  if ( a4 && (*(_DWORD *)(a4 + 464) != 2 || *(_QWORD *)(a4 + 1880) != a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2920) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, (__int64)v7);
  v26 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7, (__int64 *)&v26);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(a1 + 408), *(unsigned int *)(a1 + 404), ClientVidPnFromLastClientCommitedVidPn);
    goto LABEL_34;
  }
  v10 = 0;
  v11 = v26;
  v12 = (__int64 *)((char *)v26 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2920) + 96LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v10) )
      {
        v27 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10, &v27);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v27 )
          break;
      }
LABEL_20:
      if ( ++v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 2920) + 96LL) )
      {
        v11 = v26;
        goto LABEL_22;
      }
    }
    WdLogSingleEntry0(1LL);
LABEL_15:
    if ( v27 )
    {
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v29,
        (unsigned __int64)(v12 + 7) & -(__int64)(v12 != 0LL),
        2u,
        v14,
        v24,
        v12[5]);
      v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10);
      if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v29,
        v16,
        v17,
        v18);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v30, 0, 0x104uLL);
  v25[0] = 0;
  v19 = VIDPN_MGR::SetTimingsFromVidPn(
          v7,
          0,
          1u,
          v11,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v30,
          v25,
          0,
          (struct DXGDEVICE *)a4,
          0LL);
  if ( v19 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v19);
    v20 = *(_QWORD *)(a1 + 2920);
    for ( i = 0; i < *(_DWORD *)(v20 + 96); ++i )
    {
      if ( _bittest(&a2, i) )
        ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v20, i, 0, 0LL, 0, 0);
      v20 = *(_QWORD *)(a1 + 2920);
    }
  }
  v22 = v25[0];
  if ( (v25[0] & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v22 = v25[0];
  }
  if ( (v22 & 2) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v7, v11) < 0 )
    WdLogSingleEntry0(1LL);
  v9 = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v26, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
  return v9;
}
