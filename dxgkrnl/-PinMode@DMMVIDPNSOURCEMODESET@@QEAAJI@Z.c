/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01833DC
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00024B8 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C03A8C04 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C03AAFC4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C03B4190 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00066AC (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C00066E0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 Container; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r15
  DMMVIDPNTOPOLOGY *v9; // rdi
  _QWORD *v10; // r13
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // rax
  int v15; // r8d
  DMMVIDPNPRESENTPATH *Path; // r12
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+8h]

  v2 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    return 3223192352LL;
  }
  v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
  if ( !v4 )
  {
    WdLogSingleEntry2(2LL, v2, this);
    return 3223192394LL;
  }
  v5 = *((_QWORD *)this + 14);
  v21 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v4;
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192328LL;
  }
  if ( !*(_QWORD *)(v5 + 40) )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v5 + 40) + 64LL);
  v8 = 0LL;
  v9 = (DMMVIDPNTOPOLOGY *)(Container + 96);
  v10 = (_QWORD *)(Container + 120);
  while ( 2 )
  {
    v11 = (_QWORD *)*v10;
    v12 = 0LL;
    v13 = *(unsigned int *)(v5 + 24);
    if ( (_QWORD *)*v10 == v10 )
    {
LABEL_25:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v7, v11, v13) + 24) = v9;
      goto LABEL_26;
    }
    v7 = v11 - 1;
    while ( 1 )
    {
      if ( !v7 )
      {
        if ( v11 == (_QWORD *)8 )
          goto LABEL_25;
        v17 = *(unsigned int *)(v5 + 24);
        if ( v12 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, 0LL, v11, v13);
          v18[3] = v9;
          v18[4] = v17;
          v18[5] = v8;
          return 0LL;
        }
        v20 = WdLogNewEntry5_WdTrace(0LL, 0LL, v11, v13);
        *(_QWORD *)(v20 + 24) = v17;
        *(_QWORD *)(v20 + 32) = v9;
LABEL_26:
        WdLogSingleEntry4(2LL, v8, v2, this, -1071774919LL);
        return 3223192377LL;
      }
      if ( *(_DWORD *)(v7[11] + 24LL) == (_DWORD)v13 )
        break;
LABEL_13:
      v14 = (_QWORD *)v7[1];
      v7 = v14 - 1;
      if ( v14 == v10 )
        v7 = 0LL;
    }
    if ( v12 != v8 )
    {
      ++v12;
      goto LABEL_13;
    }
    v15 = *(_DWORD *)(v7[12] + 24LL);
    if ( v15 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath(v9, v13, v15);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
    {
      ++v8;
      continue;
    }
    break;
  }
  WdLogSingleEntry4(
    2LL,
    *(unsigned int *)(v4 + 76),
    *(unsigned int *)(v4 + 80),
    *(int *)(v4 + 96),
    *(unsigned int *)(v5 + 24));
  *((_QWORD *)this + 18) = v21;
  return 3223192389LL;
}
