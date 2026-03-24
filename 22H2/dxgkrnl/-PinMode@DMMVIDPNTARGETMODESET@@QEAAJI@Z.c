/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C011BD94
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009684 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C011EA70 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x1C02E8D60 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006950 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C011BED4 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v2; // rsi
  DMMVIDPNTARGETMODESET *v4; // rdx
  char *v5; // rbx
  DMMVIDPNTARGETMODESET *v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int PathSourceFromTarget; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  DMMVIDPNPRESENTPATH *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax

  v2 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    v22 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v22 + 24) = v2;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdDmmEvent(v22);
    return 3223192352LL;
  }
  v4 = (DMMVIDPNTARGETMODESET *)((char *)this + 48);
  v5 = 0LL;
  v6 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  if ( v6 != v4 )
    v5 = (char *)v6 - 8;
  if ( !v5 )
    goto LABEL_33;
  do
  {
    if ( *((_DWORD *)v5 + 6) == (_DWORD)v2 )
      break;
    v6 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)v5 + 1);
    v5 = (char *)v6 - 8;
    if ( v6 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
      v5 = 0LL;
  }
  while ( v5 );
  if ( !v5 )
  {
LABEL_33:
    v30 = WdLogNewEntry5_WdError(v6, v4);
    *(_QWORD *)(v30 + 24) = v2;
    *(_QWORD *)(v30 + 32) = this;
    WdLogEvent5_WdError(v30);
    return 3223192394LL;
  }
  v7 = *((_QWORD *)this + 14);
  v8 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v5;
  if ( !v7 )
  {
    v23 = WdLogNewEntry5_WdError(v6, v4);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    return 3223192329LL;
  }
  v9 = *(_QWORD *)(v7 + 40);
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v6, v4);
    WdLogEvent5_WdAssertion(v24);
    v9 = *(_QWORD *)(v7 + 40);
  }
  v10 = *(_QWORD *)(v9 + 72);
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v6, v4);
    WdLogEvent5_WdAssertion(v25);
    v10 = *(_QWORD *)(v9 + 72);
  }
  v11 = v10 + 96;
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v10 + 96), *(_DWORD *)(v7 + 24));
  if ( PathSourceFromTarget == -1 )
  {
    v26 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v26 + 24) = v2;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdError(v26);
    return 3223192384LL;
  }
  v15 = *(unsigned int *)(v7 + 24);
  v16 = v11 + 24;
  v17 = *(_QWORD *)(v11 + 24);
  if ( v17 == v11 + 24 )
  {
    v18 = 0LL;
    goto LABEL_20;
  }
  v18 = (DMMVIDPNPRESENTPATH *)(v17 - 8);
  if ( v18 )
  {
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v18 + 11) + 24LL) == PathSourceFromTarget
        && *(_DWORD *)(*((_QWORD *)v18 + 12) + 24LL) == (_DWORD)v15 )
      {
        break;
      }
      v27 = *((_QWORD *)v18 + 1);
      v18 = (DMMVIDPNPRESENTPATH *)(v27 - 8);
      if ( v27 == v16 )
        v18 = 0LL;
    }
    while ( v18 );
LABEL_20:
    if ( v18 )
      goto LABEL_21;
  }
  v28 = WdLogNewEntry5_WdAssertion(v16, v15);
  WdLogEvent5_WdAssertion(v28);
LABEL_21:
  if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(v18) )
    return 0LL;
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
  v29[3] = *((unsigned int *)v5 + 21);
  v29[4] = *((unsigned int *)v5 + 22);
  v29[5] = *((unsigned int *)v5 + 23);
  v29[6] = *((unsigned int *)v5 + 24);
  v29[7] = *(unsigned int *)(v7 + 24);
  WdLogEvent5_WdError(v29);
  result = 3223192389LL;
  *((_QWORD *)this + 18) = v8;
  return result;
}
