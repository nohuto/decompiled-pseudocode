/*
 * XREFs of ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A3C14
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802A1580 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802A3320 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802A33F4 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 *     ??0StereoscopicViewData@@QEAA@XZ @ 0x1802A34F8 (--0StereoscopicViewData@@QEAA@XZ.c)
 */

void __fastcall CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        CStereoscopicContentManager *this,
        struct CHolographicInteropTexture *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  StereoscopicViewData *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r9
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _BYTE v28[80]; // [rsp+28h] [rbp-E0h] BYREF
  int v29; // [rsp+78h] [rbp-90h]
  _BYTE v30[196]; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int128 v31; // [rsp+140h] [rbp+38h]
  __int128 v32; // [rsp+150h] [rbp+48h]
  __int128 v33; // [rsp+160h] [rbp+58h]
  __int128 v34; // [rsp+170h] [rbp+68h]
  __int128 v35; // [rsp+180h] [rbp+78h]
  __int128 v36; // [rsp+190h] [rbp+88h]
  __int128 v37; // [rsp+1A0h] [rbp+98h]
  __int128 v38; // [rsp+1B0h] [rbp+A8h]
  __int128 v39; // [rsp+1C0h] [rbp+B8h]
  __int128 v40; // [rsp+1D0h] [rbp+C8h]
  __int128 v41; // [rsp+1E0h] [rbp+D8h]
  __int128 v42; // [rsp+1F0h] [rbp+E8h]
  unsigned int v43; // [rsp+258h] [rbp+150h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+260h] [rbp+158h] BYREF

  v43 = *((_DWORD *)a2 + 56);
  v44 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v29 = 0;
  v3 = *(_QWORD *)std::map<unsigned int,StereoscopicSlateData>::_Try_emplace<unsigned int const &,>(
                    (__int64 *)this + 41,
                    (__int64)v28,
                    &v43);
  v4 = v29;
  *(_OWORD *)(v3 + 32) = _xmm;
  *(_OWORD *)(v3 + 48) = _xmm;
  *(_OWORD *)(v3 + 64) = _xmm;
  *(_OWORD *)(v3 + 80) = _xmm;
  *(_DWORD *)(v3 + 96) = v4;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v44);
  v44 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  memset_0(v30, 0, 0xC0uLL);
  v5 = StereoscopicViewData::StereoscopicViewData((StereoscopicViewData *)v30);
  v6 = *((_OWORD *)v5 + 1);
  v31 = *(_OWORD *)v5;
  v7 = *((_OWORD *)v5 + 2);
  v32 = v6;
  v8 = *((_OWORD *)v5 + 3);
  v33 = v7;
  v9 = *((_OWORD *)v5 + 4);
  v34 = v8;
  v10 = *((_OWORD *)v5 + 5);
  v35 = v9;
  v11 = *((_OWORD *)v5 + 6);
  v36 = v10;
  v37 = v11;
  v12 = *((_OWORD *)v5 + 7);
  v5 = (StereoscopicViewData *)((char *)v5 + 128);
  v38 = v12;
  v13 = *((_OWORD *)v5 + 1);
  v39 = *(_OWORD *)v5;
  v14 = *((_OWORD *)v5 + 2);
  v40 = v13;
  v15 = *((_OWORD *)v5 + 3);
  v41 = v14;
  v42 = v15;
  v17 = (_OWORD *)(*(_QWORD *)std::map<unsigned int,StereoscopicViewData>::_Try_emplace<unsigned int const &,>(
                                (__int64 *)this + 10,
                                (__int64)v28,
                                &v43,
                                v16)
                 + 32LL);
  v18 = v32;
  *v17 = v31;
  v19 = v33;
  v17[1] = v18;
  v17[2] = v19;
  v20 = v35;
  v17[3] = v34;
  v21 = v36;
  v17[4] = v20;
  v22 = v37;
  v17[5] = v21;
  v23 = v38;
  v17[6] = v22;
  v17 += 8;
  v24 = v39;
  *(v17 - 1) = v23;
  v25 = v40;
  *v17 = v24;
  v26 = v41;
  v17[1] = v25;
  v27 = v42;
  v17[2] = v26;
  v17[3] = v27;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v44);
}
