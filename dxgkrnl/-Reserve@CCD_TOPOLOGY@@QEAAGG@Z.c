/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01C08E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C01C09B8 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01C1700 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C17B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01C4274 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DB31C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E4780 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B6954 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C03B824C (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C03BB864 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // bp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r9
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rbx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  unsigned __int16 v32; // dx
  __int64 v33; // rax
  _OWORD *v34; // rcx
  __int64 v35; // r9
  _OWORD *v36; // rdx
  __int128 v37; // xmm1
  _BYTE v38[352]; // [rsp+20h] [rbp-178h] BYREF

  v4 = 0;
  v5 = (unsigned __int16)a2;
  if ( *((_BYTE *)this + 72) )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 22);
    else
      v8 = 0;
    if ( v8 < (unsigned __int16)a2
      && (v9 = operator new[](296 * ((unsigned __int16)a2 - 1LL) + 352, 0x63644356u, 256LL), (v10 = v9) != 0) )
    {
      if ( v8 )
      {
        v34 = (_OWORD *)*((_QWORD *)this + 8);
        v35 = 2LL;
        v36 = (_OWORD *)v9;
        do
        {
          *v36 = *v34;
          v36[1] = v34[1];
          v36[2] = v34[2];
          v36[3] = v34[3];
          v36[4] = v34[4];
          v36[5] = v34[5];
          v36[6] = v34[6];
          v36 += 8;
          v37 = v34[7];
          v34 += 8;
          *(v36 - 1) = v37;
          --v35;
        }
        while ( v35 );
        v26 = v8;
        *v36 = *v34;
        v36[1] = v34[1];
        v36[2] = v34[2];
        v36[3] = v34[3];
        v36[4] = v34[4];
        v36[5] = v34[5];
        memmove((void *)(v9 + 352), (const void *)(*((_QWORD *)this + 8) + 352LL), 296LL * v8 - 296);
      }
      else
      {
        memset(v38, 0, sizeof(v38));
        v11 = 2LL;
        v12 = v38;
        v13 = (_OWORD *)v10;
        do
        {
          v14 = v12[1];
          *v13 = *v12;
          v15 = v12[2];
          v13[1] = v14;
          v16 = v12[3];
          v13[2] = v15;
          v17 = v12[4];
          v13[3] = v16;
          v18 = v12[5];
          v13[4] = v17;
          v19 = v12[6];
          v13[5] = v18;
          v20 = v12[7];
          v12 += 8;
          v13[6] = v19;
          v13 += 8;
          *(v13 - 1) = v20;
          --v11;
        }
        while ( v11 );
        v21 = v12[1];
        *v13 = *v12;
        v22 = v12[2];
        v13[1] = v21;
        v23 = v12[3];
        v13[2] = v22;
        v24 = v12[4];
        v13[3] = v23;
        v25 = v12[5];
        v13[4] = v24;
        v13[5] = v25;
        *(_DWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 48) = 0LL;
        v26 = 0LL;
      }
      *(_WORD *)(v10 + 22) = v5;
      memset((void *)(296 * v26 + v10 + 56), 0, 296 * (v5 - v26));
      operator delete(*((void **)this + 8));
      *((_QWORD *)this + 8) = v10;
      return *(unsigned __int16 *)(v10 + 22);
    }
    else
    {
      return v8;
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v28[3] = this;
    v28[4] = *((_QWORD *)this + 8);
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      v30 = *(_WORD *)(v29 + 20);
    else
      v30 = 0;
    v28[5] = v30;
    v31 = *((_QWORD *)this + 8);
    if ( v31 )
      v32 = *(_WORD *)(v31 + 22);
    else
      v32 = 0;
    v28[6] = v32;
    v28[7] = v5;
    v33 = *((_QWORD *)this + 8);
    if ( v33 )
      return *(unsigned __int16 *)(v33 + 22);
    return v4;
  }
}
