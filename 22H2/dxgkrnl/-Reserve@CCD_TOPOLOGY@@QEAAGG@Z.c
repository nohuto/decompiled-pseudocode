/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013B690 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C013DE80 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C0141E74 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0144C54 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C0148794 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C014C640 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0150254 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0167880 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0168C70 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0172ECC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EAEDC (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C02ED8BC (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r14
  __int64 v5; // rax
  unsigned __int16 v6; // si
  _OWORD *v7; // rbp
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  unsigned __int16 v26; // dx
  __int64 v27; // rax
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // r8
  __int128 v31; // xmm1
  _BYTE v32[320]; // [rsp+20h] [rbp-158h] BYREF

  v2 = 0;
  v3 = (unsigned __int16)a2;
  if ( *((_BYTE *)this + 72) )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
      v6 = *(_WORD *)(v5 + 22);
    else
      v6 = 0;
    if ( v6 < (unsigned __int16)a2
      && (v7 = operator new[](272 * ((unsigned __int16)a2 - 1LL) + 320, 0x63644356u, PagedPool)) != 0LL )
    {
      if ( v6 )
      {
        v28 = (_OWORD *)*((_QWORD *)this + 8);
        v29 = v7;
        v30 = 2LL;
        do
        {
          *v29 = *v28;
          v29[1] = v28[1];
          v29[2] = v28[2];
          v29[3] = v28[3];
          v29[4] = v28[4];
          v29[5] = v28[5];
          v29[6] = v28[6];
          v29 += 8;
          v31 = v28[7];
          v28 += 8;
          *(v29 - 1) = v31;
          --v30;
        }
        while ( v30 );
        *v29 = *v28;
        v29[1] = v28[1];
        v29[2] = v28[2];
        v29[3] = v28[3];
        memmove(v7 + 20, (const void *)(*((_QWORD *)this + 8) + 320LL), 272LL * v6 - 272);
      }
      else
      {
        memset(v32, 0, sizeof(v32));
        v8 = v32;
        v9 = v7;
        v10 = 2LL;
        do
        {
          v11 = v8[1];
          *v9 = *v8;
          v12 = v8[2];
          v9[1] = v11;
          v13 = v8[3];
          v9[2] = v12;
          v14 = v8[4];
          v9[3] = v13;
          v15 = v8[5];
          v9[4] = v14;
          v16 = v8[6];
          v9[5] = v15;
          v17 = v8[7];
          v8 += 8;
          v9[6] = v16;
          v9 += 8;
          *(v9 - 1) = v17;
          --v10;
        }
        while ( v10 );
        v18 = v8[1];
        *v9 = *v8;
        v19 = v8[2];
        v9[1] = v18;
        v20 = v8[3];
        v9[2] = v19;
        v9[3] = v20;
        *((_DWORD *)v7 + 9) = 0;
        *((_QWORD *)v7 + 5) = 0LL;
      }
      *((_WORD *)v7 + 11) = v3;
      memset(&v7[17 * v6 + 3], 0, 272 * (v3 - v6));
      operator delete[](*((void **)this + 8));
      *((_QWORD *)this + 8) = v7;
      return *((unsigned __int16 *)v7 + 11);
    }
    else
    {
      return v6;
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v22[3] = this;
    v22[4] = *((_QWORD *)this + 8);
    v23 = *((_QWORD *)this + 8);
    if ( v23 )
      v24 = *(_WORD *)(v23 + 20);
    else
      v24 = 0;
    v22[5] = v24;
    v25 = *((_QWORD *)this + 8);
    if ( v25 )
      v26 = *(_WORD *)(v25 + 22);
    else
      v26 = 0;
    v22[6] = v26;
    v22[7] = v3;
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      return *(unsigned __int16 *)(v27 + 22);
    return v2;
  }
}
