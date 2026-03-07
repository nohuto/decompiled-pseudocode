__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4,
        unsigned __int8 a5)
{
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 Container; // rax
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // r12
  int v21; // eax
  _QWORD *v23; // rax
  __int64 v24; // r8
  _BYTE v25[88]; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+A8h] [rbp+10h] BYREF
  int v28; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v29; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !v6 )
    WdLogSingleEntry0(1LL);
  v8 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v9 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    WdLogSingleEntry0(1LL);
  LOBYTE(a3) = 1;
  v10 = ((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v25, v10, a3);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v16 = v11;
  if ( v11 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v23[3] = v8;
    v23[4] = v9;
    v23[5] = a2;
    v23[6] = v16;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v25);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    LOBYTE(v18) = a5;
    v19 = Container;
    v27 = -1;
    v28 = -1;
    v20 = Container + 88;
    v21 = VIDPN_MGR::FormalizeVidPnChange(this, v19 & -(__int64)(v19 != -88), 1LL, v18, &v27);
    LODWORD(v16) = v21;
    if ( v21 >= 0 )
      return 0LL;
    if ( v21 == -1071774975 )
      WdLogSingleEntry2(7LL, v8, v9);
    else
      WdLogSingleEntry4(2LL, v8, v9, v19 & -(__int64)(v20 != 0), v21);
    if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
      WdLogSingleEntry0(1LL);
    LOBYTE(v24) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v25, v10, v24);
    v29 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v8, v9, &v29) < 0 || v29 != v6 )
      WdLogSingleEntry0(1LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v25);
  return (unsigned int)v16;
}
