/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C03B041C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03AAAC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03AC7B8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B7228 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 Container; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // edi
  DXGK_ENUM_PIVOT v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v3 == -1 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v11 = v6;
  if ( v6 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v19.VidPnSourceId = -1;
    v15 = Container;
    v19.VidPnTargetId = -1;
    v16 = Container + 88;
    v17 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            11LL,
            1,
            &v19);
    v18 = v17;
    if ( v17 >= 0 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, v15 & -(__int64)(v16 != 0), v17);
      return v18;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v12[3] = v3;
    v12[4] = a2;
    v12[5] = v11;
    return (unsigned int)v11;
  }
}
