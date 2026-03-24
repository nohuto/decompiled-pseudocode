/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F85D0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01093D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C0044CC8 (TraceDxgkPatchLocationList.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0170464 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0170F5C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C021D140 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0220254 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct _VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct _VIDMM_DMA_BUFFER *v9; // rdi
  unsigned __int8 v10; // si
  struct COREDEVICEACCESS *v11; // rdx
  struct DXGALLOCATION *v13; // rcx
  char v14; // r14
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct _VIDMM_DMA_BUFFER *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r11
  char *v22; // r10
  D3DGPU_VIRTUAL_ADDRESS *v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  char v29; // si
  void *v30; // rdx
  UINT v31; // ecx
  UINT v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  struct DXGALLOCATION *v36; // r11
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  UINT v43; // eax
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rsi
  void *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 ThreadWin32Thread; // rax
  int v78; // esi
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 DmaSize; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  struct DXGHWQUEUE *v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int v95; // eax
  __int64 v96; // rdx
  void *pDmaBuffer; // rsi
  __int64 v98; // rcx
  int v99; // eax
  char *v100; // rcx
  unsigned int v101; // esi
  int v102; // r14d
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rdi
  int v108; // eax
  __int64 v109; // rcx
  char *v110; // rcx
  __int64 v111; // rsi
  unsigned int *v112; // rsi
  char *v113; // r14
  __int64 v114; // rax
  int v115; // eax
  int v116; // edi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  void *v131; // rdx
  int v132; // eax
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v138; // rax
  int v139; // r9d
  __int64 v140; // rax
  __int64 v141; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v144; // rax
  unsigned __int8 v145; // cl
  _QWORD *v146; // rax
  __int64 v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v153; // rdx
  UINT64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rax
  void *v157; // rdx
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  struct DXGALLOCATION *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rax
  char *v175; // r9
  char *v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rcx
  char *v179; // r8
  __int64 v180; // rax
  struct DXGHWQUEUE *v181; // rax
  __int64 v182; // rax
  _QWORD *v183; // rax
  __int64 v184; // rax
  _QWORD *v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rdi
  char *v190; // rsi
  __int64 v191; // r8
  __int64 v192; // rax
  __int64 v193; // [rsp+20h] [rbp-E0h]
  char v194; // [rsp+60h] [rbp-A0h]
  char v195; // [rsp+61h] [rbp-9Fh]
  bool v196; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v197; // [rsp+68h] [rbp-98h] BYREF
  int v198; // [rsp+74h] [rbp-8Ch] BYREF
  struct DXGALLOCATION *v199; // [rsp+78h] [rbp-88h]
  char *v200; // [rsp+80h] [rbp-80h] BYREF
  UINT v201; // [rsp+88h] [rbp-78h] BYREF
  int v202; // [rsp+8Ch] [rbp-74h] BYREF
  struct DXGALLOCATION *v203; // [rsp+90h] [rbp-70h]
  D3DGPU_VIRTUAL_ADDRESS v204; // [rsp+98h] [rbp-68h] BYREF
  struct DXGHWQUEUE *v205; // [rsp+A0h] [rbp-60h]
  __int64 v206; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER v207; // [rsp+B0h] [rbp-50h] BYREF
  struct COREDEVICEACCESS *v208; // [rsp+B8h] [rbp-48h]
  __int64 v209; // [rsp+C8h] [rbp-38h]
  int v210; // [rsp+D0h] [rbp-30h]
  int v211; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v212; // [rsp+E0h] [rbp-20h]
  char v213; // [rsp+E8h] [rbp-18h]
  __int64 v214; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v215; // [rsp+F8h] [rbp-8h]
  __int64 v216; // [rsp+100h] [rbp+0h]
  _BYTE v217[24]; // [rsp+108h] [rbp+8h] BYREF
  _DXGKARG_SIGNALMONITOREDFENCE v218; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v219; // [rsp+170h] [rbp+70h] BYREF
  char v220[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C8h] [rbp+C8h] BYREF
  int v222; // [rsp+1F8h] [rbp+F8h] BYREF
  int v223; // [rsp+1FCh] [rbp+FCh]
  int v224; // [rsp+200h] [rbp+100h]
  int v225; // [rsp+204h] [rbp+104h]
  int v226; // [rsp+208h] [rbp+108h]
  __int64 v227; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v228; // [rsp+214h] [rbp+114h]
  struct DXGALLOCATION *v229; // [rsp+218h] [rbp+118h]
  struct DXGALLOCATION *v230; // [rsp+220h] [rbp+120h]
  _QWORD v231[12]; // [rsp+230h] [rbp+130h] BYREF

  v9 = a7;
  v10 = 1;
  v11 = a9;
  v13 = a5;
  v14 = 1;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v199 = a4;
  v205 = a3;
  v203 = a5;
  v197 = a7;
  v208 = a9;
  v194 = 0;
  v200 = 0LL;
  v195 = 0;
  v196 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    v126 = WdLogNewEntry5_WdError(a5, a9);
    *(_QWORD *)(v126 + 24) = 8655LL;
LABEL_126:
    WdLogEvent5_WdError(v126);
    v29 = 0;
    LODWORD(v28) = -1073741823;
    goto LABEL_232;
  }
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 && !a3 )
  {
    v126 = WdLogNewEntry5_WdError(a5, a9);
    *(_QWORD *)(v126 + 24) = 8665LL;
    goto LABEL_126;
  }
  v16 = a7;
  while ( 1 )
  {
    if ( !v16 )
    {
      LODWORD(v28) = DXGCONTEXT::AcquireDmaBuffer(this, &v197, v11, 0);
      if ( (int)v28 < 0 )
      {
        v182 = WdLogNewEntry5_WdError(v128, v127);
        *(_QWORD *)(v182 + 24) = this;
        WdLogEvent5_WdError(v182);
LABEL_231:
        v29 = 0;
        v194 = 0;
        goto LABEL_232;
      }
      v9 = v197;
      if ( !v197 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v128, v127);
        *(_QWORD *)(v129 + 24) = 8685LL;
        WdLogEvent5_WdAssertion(v129);
        v9 = v197;
      }
      a4 = v199;
      v13 = v203;
    }
    v223 &= 2u;
    v222 = 0;
    if ( a4 )
      v17 = *((_DWORD *)a4 + 4);
    else
      v17 = 0;
    v225 &= 2u;
    v224 = v17;
    if ( v13 )
      v18 = *((_DWORD *)v13 + 4);
    else
      v18 = 0;
    v226 = v18;
    v228 = 0;
    v229 = a4;
    v227 = v227 & 2 | 1;
    v19 = *((_QWORD *)this + 2);
    v230 = v13;
    v201 = 0;
    v207.QuadPart = 0LL;
    v204 = 0LL;
    v214 = 0LL;
    v20 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL)) == 0;
    v22 = (char *)&v227 + 4;
    if ( v20 )
      v22 = 0LL;
    v23 = &v204;
    if ( !*((_BYTE *)this + 454) )
      v23 = 0LL;
    LODWORD(v193) = 1;
    v24 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, int *, __int64, _QWORD, __int64, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, __int64 *, char *, char *))(v21 + 576))(
            v9,
            &v222,
            3LL,
            v10,
            v193,
            &v201,
            &v207,
            v23,
            &v214,
            (char *)a8 + 192,
            v22);
    v28 = v24;
    if ( v24 < 0 )
    {
      v187 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v187 + 24) = this;
      *(_QWORD *)(v187 + 32) = v28;
      WdLogEvent5_WdWarning(v187);
      goto LABEL_231;
    }
    v29 = 1;
    v194 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 512LL))(
      v197,
      &v200);
    a6->pDmaBuffer = v200;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 536LL))(v197);
    v30 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 568LL))(v197);
    v31 = v201;
    a6->pDmaBufferPrivateData = v30;
    v32 = *((_DWORD *)this + 52);
    a6->DmaBufferSegmentId = v31;
    a6->DmaBufferPhysicalAddress = v207;
    a6->DmaBufferPrivateDataSize = v32;
    if ( v195 )
    {
      v218.DmaBufferPrivateDataSize = v32;
      v218.DmaSize = a6->DmaSize;
      v218.MultipassOffset = a6->MultipassOffset;
      v218.pDmaBuffer = a6->pDmaBuffer;
      v218.DmaBufferGpuVirtualAddress = v204;
      *((_DWORD *)&v218.KernelSubmissionType + 1) = 0;
      *(&v218.DmaSize + 1) = 0;
      v130 = *((_QWORD *)this + 30);
      v218.pDmaBufferPrivateData = v30;
      v131 = (void *)*((_QWORD *)this + 23);
      v218.MonitoredFenceGpuVa = *(_QWORD *)(v130 + 48);
      v218.MonitoredFenceCpuVa = *(void **)(v130 + 64);
      v218.MonitoredFenceValue = *((_QWORD *)this + 31);
      v218.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
      v218.hHwQueue = (HANDLE)*((_QWORD *)v205 + 4);
      v132 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v131, &v218);
      v28 = v132;
      a6->DmaBufferPrivateDataSize = v218.DmaBufferPrivateDataSize;
      a6->DmaSize = v218.DmaSize;
      a6->MultipassOffset = v218.MultipassOffset;
      a6->pDmaBuffer = v218.pDmaBuffer;
      a6->pDmaBufferPrivateData = v218.pDmaBufferPrivateData;
      if ( v132 == -1071775743 )
      {
        v183 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v30);
        v183[3] = 275LL;
        v183[4] = 40LL;
        v183[5] = this;
        v183[6] = 0LL;
        v183[7] = 0LL;
        WdLogEvent5_WdCriticalError(v183);
LABEL_223:
        v184 = WdLogNewEntry5_WdWarning(v133, v30, v134);
        *(_QWORD *)(v184 + 24) = this;
        *(_QWORD *)(v184 + 32) = v28;
        WdLogEvent5_WdWarning(v184);
        goto LABEL_232;
      }
      if ( v132 < 0 )
        goto LABEL_223;
      v195 = 0;
    }
    *(_DWORD *)a8 ^= (*(_DWORD *)a8 ^ (*((unsigned __int8 *)this + 454) << 27)) & 0x8000000;
    if ( v14 )
      break;
LABEL_74:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 616LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 624LL))
      && a6->pDmaBuffer <= v200 )
    {
      v159 = WdLogNewEntry5_WdAssertion(v94, v93);
      *(_QWORD *)(v159 + 24) = 9092LL;
      WdLogEvent5_WdAssertion(v159);
    }
    v95 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 536LL))(v197);
    pDmaBuffer = a6->pDmaBuffer;
    v98 = v95;
    v99 = (int)v200;
    v100 = &v200[v98];
    if ( a6->pDmaBuffer > v100 )
    {
      v160 = WdLogNewEntry5_WdAssertion(v100, v96);
      *(_QWORD *)(v160 + 24) = 9093LL;
      WdLogEvent5_WdAssertion(v160);
      v99 = (int)v200;
      LODWORD(pDmaBuffer) = a6->pDmaBuffer;
    }
    v101 = (_DWORD)pDmaBuffer - v99;
    v102 = LODWORD(a6->pDmaBufferPrivateData)
         - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 640LL)
                                                                             + 8LL)
                                                                 + 568LL))(v197);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 536LL))(v197) < v101 )
    {
      v161 = WdLogNewEntry5_WdAssertion(v104, v103);
      *(_QWORD *)(v161 + 24) = 9100LL;
      WdLogEvent5_WdAssertion(v161);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 640LL)
                                                                   + 8LL)
                                                       + 520LL))(v197);
    v106 = 0LL;
    v200 = 0LL;
    if ( *((_BYTE *)this + 454) )
    {
      LODWORD(v107) = 0;
    }
    else
    {
      if ( a6->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 552LL))(v197) )
      {
        v162 = WdLogNewEntry5_WdAssertion(v121, v120);
        *(_QWORD *)(v162 + 24) = 9115LL;
        WdLogEvent5_WdAssertion(v162);
      }
      v122 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 552LL))(v197);
      v123 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v197);
      if ( a6->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v122 + 24 * v123) )
      {
        v163 = WdLogNewEntry5_WdAssertion(v123, 3 * v123);
        *(_QWORD *)(v163 + 24) = 9116LL;
        WdLogEvent5_WdAssertion(v163);
      }
      v107 = ((__int64)a6->pPatchLocationListOut
            - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 552LL))(v197))
           / 24;
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 544LL))(v197) < (unsigned int)v107 )
      {
        v164 = WdLogNewEntry5_WdAssertion(v125, v124);
        *(_QWORD *)(v164 + 24) = 9126LL;
        WdLogEvent5_WdAssertion(v164);
      }
      if ( (qword_1C00B19B0 & 0x10) != 0 )
      {
        v165 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 640LL)
                                                                                 + 8LL)
                                                                     + 552LL))(v197);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v197, v107, v165);
      }
      v106 = 0LL;
    }
    if ( !v101 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 616LL)
                                                                  + 8LL)
                                                      + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 624LL)) )
      {
        v168 = WdLogNewEntry5_WdAssertion(v167, v166);
        *(_QWORD *)(v168 + 24) = 9141LL;
        WdLogEvent5_WdAssertion(v168);
      }
      v106 = 0LL;
    }
    v108 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 )
    {
      if ( v196 || v195 )
        v109 = 64LL;
      else
        v109 = 0LL;
      v20 = bTracingEnabled == 0;
      *(_DWORD *)a8 = v109 | v108 & 0xFFFFFFBF;
      if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v109, &EventPerformanceWarning, v105, 1);
        v106 = 0LL;
      }
    }
    else
    {
      *(_DWORD *)a8 = v108 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v197;
    *((_DWORD *)a8 + 13) = v101;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 17) = v107;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 19) = v102;
    *((_DWORD *)a8 + 18) = 0;
    if ( *((_BYTE *)this + 454) )
    {
      *((_DWORD *)a8 + 20) = v102;
      *((_DWORD *)a8 + 19) = a6->DmaBufferPrivateDataSize;
    }
    v110 = (char *)*((unsigned __int8 *)a8 + 348);
    v111 = 576LL;
    if ( !(_BYTE)v110 )
      v111 = 480LL;
    v112 = (unsigned int *)((char *)a8 + v111);
    if ( (_BYTE)v110 )
      v113 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 624;
    else
      v113 = (char *)a8 + 488;
    if ( *((_DWORD *)a8 + 30) == 4 )
    {
      v169 = v199;
      if ( !v199 )
      {
        v170 = WdLogNewEntry5_WdAssertion(v110, 0LL);
        *(_QWORD *)(v170 + 24) = 9176LL;
        WdLogEvent5_WdAssertion(v170);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        v171 = WdLogNewEntry5_WdAssertion(v110, v106);
        *(_QWORD *)(v171 + 24) = 9177LL;
        WdLogEvent5_WdAssertion(v171);
      }
      *v112 = *v112 & 0xFFFFFC00 | 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 640LL)
                                                                     + 8LL)
                                                         + 416LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
             *((_QWORD *)v169 + 3),
             v113) < 0 )
      {
        v174 = WdLogNewEntry5_WdAssertion(v173, v172);
        *(_QWORD *)(v174 + 24) = 9196LL;
        WdLogEvent5_WdAssertion(v174);
      }
      v198 = 0;
      if ( *((_BYTE *)a8 + 348) )
        v175 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 616;
      else
        v175 = (char *)a8 + 504;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 224LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
        *(_QWORD *)(*((_QWORD *)v169 + 6) + 8LL),
        &v198,
        v175,
        0LL);
      v176 = (char *)a8 + 576;
      if ( *((_BYTE *)a8 + 348) )
        *(_WORD *)&v176[*((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 32] = v198;
      else
        *((_DWORD *)a8 + 135) ^= (*((_DWORD *)a8 + 135) ^ (v198 << 17)) & 0x3E0000;
      v177 = *((_QWORD *)v169 + 5);
      if ( v177 && (*(_DWORD *)(v177 + 4) & 8) != 0 )
        v178 = *(_QWORD *)(*(_QWORD *)(v177 + 56) + 184LL);
      else
        v178 = 0LL;
      if ( *((_BYTE *)a8 + 348) )
        *(_QWORD *)&v176[*((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 56] = v178;
      else
        *((_QWORD *)a8 + 70) = v178;
      if ( *((_BYTE *)a8 + 348) )
        v179 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 600;
      else
        v179 = (char *)a8 + 496;
      *(_QWORD *)v179 = *(_QWORD *)(*((_QWORD *)v169 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 348) )
        v110 = (char *)a8 + *((_DWORD *)a8 + 145) * ((8 * *((_DWORD *)a8 + 146) + 199) & 0xFFFFFFF8) + 592;
      else
        v110 = (char *)a8 + 552;
      *(_QWORD *)v110 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 348) )
        *((_DWORD *)a8 + 154) = -1;
    }
    else if ( (*v112 & 0x3FF) != 0 )
    {
      v180 = WdLogNewEntry5_WdAssertion(v110, 0LL);
      *(_QWORD *)(v180 + 24) = 9235LL;
      WdLogEvent5_WdAssertion(v180);
    }
    if ( *((struct _KTHREAD **)this + 59) != KeGetCurrentThread() )
    {
      v114 = WdLogNewEntry5_WdAssertion(v110, 0LL);
      *(_QWORD *)(v114 + 24) = 9238LL;
      WdLogEvent5_WdAssertion(v114);
    }
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    {
      *((_QWORD *)a8 + 60) = *((_QWORD *)this + 31);
      *((_DWORD *)a8 + 122) = 0;
      *((_QWORD *)a8 + 63) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v181 = v205;
      *((_QWORD *)a8 + 62) = *(_QWORD *)(*((_QWORD *)this + 30) + 48LL);
      v115 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 432LL))(
               *((_QWORD *)v181 + 5),
               a8);
    }
    else
    {
      v115 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 424LL))(
               *((_QWORD *)this + 34),
               a8);
    }
    v116 = v115;
    if ( v115 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                         + 8LL)
                                             + 440LL))(
        *((_QWORD *)this + 34),
        0LL);
      if ( (*v112 & 0x3FF) != 0 && *(_QWORD *)v113 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 432LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
          *((unsigned int *)a8 + 34),
          *(_QWORD *)v113,
          0LL);
      v29 = 1;
      LODWORD(v28) = v116;
      goto LABEL_232;
    }
    v14 = v196;
    v9 = 0LL;
    v13 = v203;
    v10 = 0;
    a4 = v199;
    v16 = 0LL;
    v11 = v208;
    v197 = 0LL;
    if ( !v195 && !v196 )
      return (unsigned int)v28;
  }
  v33 = *((_QWORD *)this + 2);
  if ( *((_BYTE *)this + 454) )
  {
    memset(v231, 0, sizeof(v231));
    v34 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 640LL)
                                                                            + 8LL)
                                                                + 560LL))(v197);
    v36 = v199;
    v37 = v34;
    v38 = *(_QWORD *)(v34 + 24);
    v231[4] = v38;
    if ( v199 )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              *((_QWORD *)v199 + 3),
              *((unsigned __int8 *)this + 455),
              *((unsigned int *)this + 104));
      v36 = v199;
      v231[5] = v39;
    }
    if ( (a6->Flags.Value & 4) != 0 )
    {
      v135 = *((_QWORD *)this + 2);
      v136 = *((_QWORD *)v36 + 6);
      v202 = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v135 + 16)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 224LL))(
        *(_QWORD *)(*(_QWORD *)(v135 + 16) + 648LL),
        *(_QWORD *)(v136 + 8),
        &v202,
        &v231[6],
        0LL);
      LOWORD(v231[7]) = v202;
    }
    else if ( v203 )
    {
      v40 = *((unsigned __int8 *)this + 455);
      v41 = *((unsigned int *)this + 104);
      v231[8] = *(_QWORD *)(v37 + 48);
      v231[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                        + 8LL)
                                                                            + 256LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                  *((_QWORD *)v203 + 3),
                  v40,
                  v41);
      if ( !v231[9] )
      {
        v185 = (_QWORD *)WdLogNewEntry5_WdError(v38, v42);
        LODWORD(v28) = -1073741811;
        v185[3] = this;
        v185[4] = -1073741811LL;
        v185[5] = 8883LL;
        WdLogEvent5_WdError(v185);
        goto LABEL_232;
      }
    }
    a6->DmaBufferGpuVirtualAddress = v204;
    a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v231;
    v43 = 0;
    a6->pPatchLocationListOut = 0LL;
  }
  else
  {
    a6->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 640LL) + 8LL) + 560LL))(
                                                   v197,
                                                   v30);
    a6->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 552LL))(v197);
    v43 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 640LL)
                                                                            + 8LL)
                                                                + 544LL))(v197);
  }
  a6->PatchLocationListOutSize = v43;
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
  {
    v38 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 216LL) + 64LL) + 40LL) + 28LL) >= 0xA002u )
    {
      v92 = v205;
      LODWORD(v28) = ADAPTER_RENDER::DdiPresentToHwQueue((ADAPTER_RENDER *)v38, *((void **)v205 + 4), a6);
      if ( (_DWORD)v28 == -1073741822 )
        LODWORD(v28) = ADAPTER_RENDER::DdiPresent(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         a6);
      goto LABEL_66;
    }
  }
  v44 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v45 = *((_QWORD *)this + 2);
  v206 = 0LL;
  if ( (*(_BYTE *)&v44 & 1) != 0 || (v38 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL), !*(_BYTE *)(v38 + 2650)) )
    v206 = *((_QWORD *)this + 23);
  v46 = *(_QWORD *)(v45 + 16);
  v215 = v46;
  v211 = -1;
  v212 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v213 = 1;
    v211 = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerEnter, v35, 5031);
  }
  else
  {
    v213 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v211, 5031LL);
  CurrentProcess = PsGetCurrentProcess(v48, v47, v49, v50);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v54 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v55 = *((_QWORD *)Current + 1)) != 0
    || (v55 = v54) != 0 )
  {
    v56 = v55 + 112;
  }
  else
  {
    v56 = 0LL;
  }
  v209 = v56;
  v210 = 0;
  if ( v56 && *(struct _KTHREAD **)(v56 + 8) == KeGetCurrentThread() )
  {
    v138 = WdLogNewEntry5_WdAssertion(v56, v53);
    *(_QWORD *)(v138 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v138);
  }
  if ( v55 )
  {
    v57 = v209;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v57, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v139 = *(_DWORD *)(v57 + 24);
        if ( v139 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v58, &EventBlockThread, v59, v139);
      }
      ExAcquirePushLockExclusiveEx(v57, 0LL);
    }
    *(_QWORD *)(v57 + 8) = KeGetCurrentThread();
    v210 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v46 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v46 + 16) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_159;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v140 = WdLogNewEntry5_WdAssertion(v61, v60);
    *(_QWORD *)(v140 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v140);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v70 = PsGetCurrentProcess(v67, v66, v68, v69);
  v71 = PsGetProcessDxgProcess(v70);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v71
    && (v72 = *(void **)(v71 + 88)) != 0LL
    && v72 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v141 = PsGetCurrentProcess(v74, v73, v75, v76),
         ProcessSessionId = PsGetProcessSessionIdEx(v141),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        goto LABEL_159;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v78 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_52;
  }
LABEL_159:
  v78 = 0;
LABEL_52:
  v79 = v215;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v220,
    *(struct DXGADAPTER **)(v215 + 16));
  LODWORD(v216) = (*(__int64 (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v79 + 16) + 648LL))(
                    v206,
                    a6);
  if ( v220[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v144 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80);
    v144[3] = 275LL;
    v144[4] = 16LL;
    v144[5] = v79;
    v144[6] = CurrentIrql;
    v145 = KeGetCurrentIrql();
    v144[7] = v145;
    WdLogEvent5_WdCriticalError(v144);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v78 )
  {
    v146 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80);
    v146[3] = 275LL;
    v146[4] = 38LL;
    v146[5] = *((int *)ThreadProperty + 8);
    v146[6] = v78;
    v146[7] = 0LL;
    WdLogEvent5_WdCriticalError(v146);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v79 + 16) + 4364LL));
  v82 = (_QWORD *)WdLogNewEntry5_WdTrace(v81, v80);
  LODWORD(v28) = v216;
  v84 = v206;
  v85 = (int)v216;
  v82[3] = (int)v216;
  v82[4] = v84;
  v82[5] = a6->SubRectCnt;
  v82[6] = a6->pDmaBuffer;
  DmaSize = a6->DmaSize;
  v82[7] = DmaSize;
  if ( (_DWORD)v28 )
  {
    if ( (int)v28 > -1073741670 )
    {
      if ( (_DWORD)v28 == -1071775743 || (_DWORD)v28 == -1071775736 || (_DWORD)v28 == -1071775232 )
        goto LABEL_60;
    }
    else if ( (_DWORD)v28 == -1073741670
           || (_DWORD)v28 == -1073741816
           || (_DWORD)v28 == -1073741801
           || (_DWORD)v28 == -1073741795
           || (_DWORD)v28 == -1073741674 )
    {
      goto LABEL_60;
    }
    v147 = WdLogNewEntry5_WdError(DmaSize, v83);
    *(_QWORD *)(v147 + 24) = v85;
    WdLogEvent5_WdError(v147);
  }
LABEL_60:
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v79 + 16));
  if ( v210 == 1 )
  {
    v210 = 0;
    ExReleasePushLockSharedEx(v209, 0LL);
  }
  else
  {
    if ( v210 != 2 )
      goto LABEL_64;
    v88 = v209;
    v210 = 0;
    *(_QWORD *)(v209 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v88, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_64:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v87);
  if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v211);
  v29 = 1;
  v92 = v205;
LABEL_66:
  if ( *((_BYTE *)this + 454) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
  {
    v148 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v90, v89);
    v148[3] = 275LL;
    v148[4] = 9LL;
    v148[5] = a6;
    v148[6] = 0LL;
    v148[7] = 0LL;
    WdLogEvent5_WdCriticalError(v148);
  }
  if ( (_DWORD)v28 != -1071775743 )
  {
    if ( (int)v28 < 0 )
      goto LABEL_177;
LABEL_71:
    if ( *((_BYTE *)this + 454) )
    {
      if ( a6->pAllocationList == (DXGK_ALLOCATIONLIST *)v231 )
      {
LABEL_73:
        v196 = (_DWORD)v28 == -1071775743;
        if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
        {
          if ( !*((_QWORD *)this + 31) )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v217,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v217);
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
            (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                             + 8LL)
                                                                                 + 272LL))(
              *((_QWORD *)v92 + 5),
              VidSchSyncObject,
              0LL);
            if ( v217[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v217, v153);
          }
          v154 = *((_QWORD *)this + 31) + 1LL;
          v20 = *((_BYTE *)this + 312) == 0;
          *((_QWORD *)this + 31) = v154;
          if ( v20 )
          {
            v155 = *((_QWORD *)this + 30);
            v219.DmaBufferPrivateDataSize = a6->DmaBufferPrivateDataSize;
            v219.DmaSize = a6->DmaSize;
            v219.MultipassOffset = a6->MultipassOffset;
            v219.pDmaBuffer = a6->pDmaBuffer;
            v219.pDmaBufferPrivateData = a6->pDmaBufferPrivateData;
            v219.DmaBufferGpuVirtualAddress = v204;
            *((_DWORD *)&v219.KernelSubmissionType + 1) = 0;
            *(&v219.DmaSize + 1) = 0;
            v219.MonitoredFenceGpuVa = *(_QWORD *)(v155 + 48);
            v219.MonitoredFenceCpuVa = *(void **)(v155 + 64);
            v219.hHwQueue = (HANDLE)*((_QWORD *)v92 + 4);
            v156 = *((_QWORD *)this + 2);
            v219.MonitoredFenceValue = v154;
            v157 = (void *)*((_QWORD *)this + 23);
            v219.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
            v158 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v156 + 16), v157, &v219);
            v28 = v158;
            a6->DmaBufferPrivateDataSize = v219.DmaBufferPrivateDataSize;
            a6->DmaSize = v219.DmaSize;
            a6->MultipassOffset = v219.MultipassOffset;
            a6->pDmaBuffer = v219.pDmaBuffer;
            a6->pDmaBufferPrivateData = v219.pDmaBufferPrivateData;
            if ( v158 == -1071775743 )
            {
              v195 = 1;
            }
            else if ( v158 < 0 )
            {
              goto LABEL_223;
            }
          }
        }
        goto LABEL_74;
      }
      v151 = WdLogNewEntry5_WdAssertion(v90, v89);
      *(_QWORD *)(v151 + 24) = 9006LL;
    }
    else
    {
      if ( a6->pAllocationList == (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 560LL))(v197) )
        goto LABEL_73;
      v151 = WdLogNewEntry5_WdAssertion(v119, v118);
      *(_QWORD *)(v151 + 24) = 9010LL;
    }
    WdLogEvent5_WdAssertion(v151);
    goto LABEL_73;
  }
  if ( (a6->Flags.Value & 4) == 0 )
    goto LABEL_71;
  v149 = WdLogNewEntry5_WdError(v90, v89);
  *(_QWORD *)(v149 + 24) = this;
  WdLogEvent5_WdError(v149);
  LODWORD(v28) = -1073741823;
LABEL_177:
  if ( (_DWORD)v28 == -1071775736 )
  {
    v150 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v150 + 24) = this;
    *(_QWORD *)(v150 + 32) = -1071775736LL;
    WdLogEvent5_WdEvent(v150);
  }
  else
  {
    v186 = WdLogNewEntry5_WdError(v90, v89);
    *(_QWORD *)(v186 + 24) = this;
    *(_QWORD *)(v186 + 32) = (int)v28;
    WdLogEvent5_WdError(v186);
  }
LABEL_232:
  if ( v197 )
  {
    if ( v200 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 520LL))();
      if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 34),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v189 = 0LL;
      if ( *((_DWORD *)a8 + 48) )
      {
        do
        {
          v190 = (char *)a8 + 8 * v189;
          v191 = *((_QWORD *)v190 + 25);
          if ( v191 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 640LL)
                                                                                + 8LL)
                                                                    + 432LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              0LL,
              v191,
              0LL);
            *((_QWORD *)v190 + 25) = 0LL;
          }
          v189 = (unsigned int)(v189 + 1);
        }
        while ( (unsigned int)v189 < *((_DWORD *)a8 + 48) );
        v188 = *((_QWORD *)this + 2);
        v29 = v194;
      }
    }
    if ( v29 )
    {
      v192 = *(_QWORD *)(v188 + 16);
      LOBYTE(v188) = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(*(_QWORD *)(v192 + 640) + 8LL) + 584LL))(
        v197,
        v188);
      v188 = *((_QWORD *)this + 2);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v188 + 16) + 640LL)
                                                                           + 8LL)
                                                               + 504LL))(
      v197,
      0LL);
  }
  return (unsigned int)v28;
}
