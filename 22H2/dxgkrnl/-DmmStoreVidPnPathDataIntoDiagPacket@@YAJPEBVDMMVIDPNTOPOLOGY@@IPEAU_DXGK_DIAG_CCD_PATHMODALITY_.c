/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02DF584
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02DE7E0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DE988 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01494D8 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        __int64 a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  char *v17; // rsi
  unsigned int v18; // ebp
  char *v19; // rbx
  char *i; // rbx
  int v21; // ecx
  char *v22; // rax

  v3 = (char *)a1 + 160;
  v4 = (unsigned int)a2;
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, a2) + 48);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v11);
    v10 = *(_QWORD *)(v9 + 8);
  }
  v12 = *((unsigned int *)a1 + 10);
  v13 = *(_QWORD *)(v10 + 16);
  if ( (unsigned int)v12 <= (unsigned int)v4 )
  {
    v17 = (char *)a1 + 24;
    v18 = 0;
    v19 = (char *)*((_QWORD *)a1 + 3);
    if ( v19 != v17 )
    {
      for ( i = v19 - 8; i; ++v18 )
      {
        if ( v18 >= (unsigned int)v4 )
          break;
        *((_DWORD *)a3 + 6) = *(_DWORD *)(*((_QWORD *)i + 11) + 24LL);
        v21 = *(_DWORD *)(*((_QWORD *)i + 12) + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v21;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v13 + 316);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>((__int64)i, (__int64)a3);
        v22 = (char *)*((_QWORD *)i + 1);
        i = v22 - 8;
        if ( v22 == v17 )
          i = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
      }
    }
    return 0LL;
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v14[3] = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3, v15);
    v14[4] = v12;
    v14[5] = v4;
    WdLogEvent5_WdError(v14);
    return 3221225507LL;
  }
}
