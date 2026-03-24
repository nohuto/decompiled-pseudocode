/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0068BD0
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0001520 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00016E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015D30 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023D78 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2_EtwWriteTransfer @ 0x1C0024450 (McTemplateK0ppqPR2TR2_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0063258 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0066500 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0087DFC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00AC770 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned int v12; // r15d
  unsigned __int64 *p_QuadPart; // r13
  struct DXGPROCESS *Current; // r11
  __int64 v17; // r8
  unsigned int v18; // eax
  union _LARGE_INTEGER v19; // rax
  struct VIDMM_ALLOC *v20; // rdx
  unsigned int v21; // edi
  int v22; // r10d
  struct _D3DDDI_ALLOCATIONLIST *v23; // r14
  struct VIDMM_ALLOC **v24; // r12
  VIDMM_SEGMENT *v25; // r9
  struct DXGALLOCATION *v26; // rax
  struct VIDMM_ALLOC *v27; // r13
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  VIDMM_GLOBAL *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  int v45; // eax
  struct VIDMM_ALLOC *v46; // r15
  UINT v47; // edi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ebx
  unsigned int v51; // r15d
  __int64 v52; // rax
  int v53; // r9d
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  _DWORD *v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // edi
  __int64 v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  LONGLONG v80; // rdx
  union _LARGE_INTEGER *v81; // rcx
  union _LARGE_INTEGER v82; // r14
  signed int v83; // r15d
  unsigned int v84; // edi
  __int64 v86; // rdi
  _QWORD *v87; // rax
  __int64 v88; // rax
  union _LARGE_INTEGER v89; // r12
  union _LARGE_INTEGER v90; // r14
  __int64 v91; // r15
  __int64 j; // rsi
  __int64 v93; // rdx
  __int64 v94; // r8
  int *v95; // r9
  signed __int32 v96[8]; // [rsp+0h] [rbp-388h] BYREF
  __int64 v97; // [rsp+28h] [rbp-360h]
  unsigned int v98; // [rsp+40h] [rbp-348h]
  int v99; // [rsp+44h] [rbp-344h]
  VIDMM_SEGMENT *v100; // [rsp+48h] [rbp-340h]
  unsigned __int64 *v101; // [rsp+50h] [rbp-338h]
  struct VIDMM_ALLOC *v102; // [rsp+58h] [rbp-330h]
  VIDMM_SEGMENT *v103; // [rsp+60h] [rbp-328h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-320h]
  struct DXGPROCESS *v105; // [rsp+70h] [rbp-318h]
  unsigned int v106; // [rsp+78h] [rbp-310h]
  __int64 v107; // [rsp+80h] [rbp-308h]
  struct VIDMM_ALLOC *v108; // [rsp+88h] [rbp-300h]
  unsigned int *v109; // [rsp+90h] [rbp-2F8h]
  __int64 v110; // [rsp+98h] [rbp-2F0h]
  struct _VIDMM_PRIMARIES_REFERENCES *v111; // [rsp+A0h] [rbp-2E8h]
  __int64 v112; // [rsp+A8h] [rbp-2E0h]
  union _LARGE_INTEGER *v113; // [rsp+B0h] [rbp-2D8h]
  unsigned int v114; // [rsp+B8h] [rbp-2D0h]
  struct DXGALLOCATION **v115; // [rsp+C0h] [rbp-2C8h]
  __int64 v116; // [rsp+C8h] [rbp-2C0h]
  struct VIDMM_ALLOC **v117; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 *v118; // [rsp+D8h] [rbp-2B0h]
  __int64 v119; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v120; // [rsp+E8h] [rbp-2A0h]
  unsigned __int64 v121; // [rsp+F0h] [rbp-298h]
  __int64 v122; // [rsp+F8h] [rbp-290h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-288h]
  struct _KTHREAD *v124; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v126[512]; // [rsp+140h] [rbp-248h] BYREF

  v12 = a4;
  v106 = a4;
  v113 = a8;
  v109 = a7;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v101 = (unsigned __int64 *)&a9->QuadPart;
  v118 = (unsigned __int64 *)&a9->QuadPart;
  v117 = a10;
  v111 = a11;
  v115 = a12;
  v98 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v103 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  Current = DXGPROCESS::GetCurrent();
  v105 = Current;
  v17 = *(_QWORD *)(a2[17].QuadPart + 16);
  v112 = v17;
  if ( a9 )
    *a9 = a2[12];
  *a10 = 0LL;
  ++*((_DWORD *)this + 1796);
  *((_DWORD *)this + 1797) += v12;
  v18 = *((_DWORD *)this + 1798);
  if ( v12 > v18 )
    v18 = v12;
  *((_DWORD *)this + 1798) = v18;
  a2[3].HighPart |= 4u;
  v19 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v96, 0);
  a2[19] = v19;
  *(_DWORD *)a11 = 0;
  v110 = 0LL;
  v20 = 0LL;
  v108 = 0LL;
  v21 = 0;
  v98 = 0;
  v22 = a6;
  v23 = a3;
  v24 = QuadPart;
  v25 = v103;
  while ( 1 )
  {
    v100 = v25;
    if ( v21 >= v12 )
      break;
    if ( !v23->hAllocation )
    {
      ++*((_DWORD *)this + 1799);
      *v24 = 0LL;
      *(_OWORD *)v25 = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      goto LABEL_60;
    }
    v26 = v115[v21];
    if ( !v26 )
    {
      v78 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v78 + 24) = v23->hAllocation;
      *(_QWORD *)(v78 + 32) = v21;
      WdLogEvent5_WdError(v78);
      v50 = -1071775468;
      v99 = -1071775468;
      v51 = a6;
LABEL_152:
      if ( !p_QuadPart && v21 )
      {
        do
        {
          if ( *--v24 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v24, v51);
          --v21;
        }
        while ( v21 );
      }
      return v50;
    }
    v27 = (struct VIDMM_ALLOC *)*((_QWORD *)v26 + 3);
    v102 = v27;
    v28 = **(_QWORD **)v27;
    v29 = *(_DWORD **)(v28 + 496);
    v30 = *v29 >> 14;
    if ( (*v29 & 0x4000) != 0 )
    {
      if ( v20 || (v23->Value & 1) == 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v20, v17);
        v54[3] = v27;
        v54[4] = v108;
        v54[5] = v23->Value & 1;
        WdLogEvent5_WdAssertion(v54);
        v50 = -1071775482;
        v99 = -1071775482;
        v51 = a6;
        p_QuadPart = v101;
        goto LABEL_152;
      }
      v108 = v27;
    }
    if ( *(_BYTE *)(v28 + 88) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v30);
        v56 = WdLogNewEntry5_WdTrace(v55);
        *(_QWORD *)(v56 + 24) = a2;
        *(_QWORD *)(v56 + 32) = v27;
      }
      v50 = -1071775482;
      v99 = -1071775482;
      v51 = a6;
      p_QuadPart = v101;
      goto LABEL_152;
    }
    if ( *((_QWORD *)v27 + 1) != v17 && (*((_BYTE *)Current + 347) & 0x20) == 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError();
      v57[3] = v112;
      v57[4] = v27;
      v57[5] = v21;
      v57[6] = *((_QWORD *)v27 + 1);
      WdLogEvent5_WdError(v57);
      v50 = -1071775467;
      v99 = -1071775467;
      v51 = a6;
      p_QuadPart = v101;
      goto LABEL_152;
    }
    if ( *(_WORD *)(*((_QWORD *)v27 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v61 = WdLogNewEntry5_WdAssertion(v59, v58, v60);
        *(_QWORD *)(v61 + 24) = a2;
        *(_QWORD *)(v61 + 32) = v27;
        WdLogEvent5_WdAssertion(v61);
        v50 = -1071775466;
        v99 = -1071775466;
        v51 = a6;
        p_QuadPart = v101;
        goto LABEL_152;
      }
      v62 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v62 + 24) = a2;
      *(_QWORD *)(v62 + 32) = v27;
      WdLogEvent5_WdError(v62);
      v25 = v100;
      v22 = a6;
      Current = v105;
    }
    *v24 = v27;
    v31 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 32LL);
    *(_QWORD *)v25 = v31;
    v32 = v23->Value & 1;
    if ( (v23->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v27 + 24) )
      {
        v119 = *((_QWORD *)this + 3);
        if ( *(int *)(v119 + 2328) >= 4608 )
        {
          v63 = WdLogNewEntry5_WdWarning(v31, v20);
          WdLogEvent5_WdWarning(v63);
          v66 = WdLogNewEntry5_WdWarning(v65, v64);
          *(_QWORD *)(v66 + 24) = a2;
          *(_QWORD *)(v66 + 32) = v27;
          WdLogEvent5_WdWarning(v66);
          v50 = -1073741790;
          v99 = -1073741790;
          v51 = a6;
          p_QuadPart = v101;
          goto LABEL_152;
        }
      }
    }
    v33 = (_DWORD *)((char *)v25 + 8);
    i = (unsigned int)v32 | *((_DWORD *)v25 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v25 + 2) = i;
    if ( (v23->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1800);
      i = (unsigned int)*v33;
    }
    if ( (i & 1) != 0 )
    {
      if ( (**(_DWORD **)(v28 + 496) & 0x200000) != 0 )
      {
        *((_DWORD *)v111 + 34) |= 1u;
        i = (unsigned int)*v33;
      }
      if ( (i & 1) != 0 )
      {
        i = (**(_DWORD **)(v28 + 496) >> 23) | ((unsigned __int16)**(_DWORD **)(v28 + 496) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v28 + 496) | (**(_DWORD **)(v28 + 496) >> 11)) >> 11)) & 0x100u;
        if ( (unsigned int)i >= 0x100 )
        {
          i = (unsigned __int64)v111;
          if ( *(_DWORD *)v111 >= 0x10u )
          {
            ++*((_DWORD *)this + 1806);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)v27 + 26);
            v27 = v102;
            *(_QWORD *)(i + 8LL * *(unsigned int *)i + 8) = v102;
            v25 = v103;
          }
          ++*(_DWORD *)i;
        }
      }
    }
    v100 = *(VIDMM_SEGMENT **)(v28 + 128);
    v35 = v101;
    if ( v101 )
      goto LABEL_23;
    if ( !v100 || (*((_DWORD *)this + 1762) & 0x40) != 0 )
    {
      v27 = v102;
      v25 = v103;
LABEL_23:
      ++*((_DWORD *)this + 1804);
      *v33 &= 0xFFFFFFC1;
      if ( v35 )
      {
        i = a2[17].QuadPart;
        v120 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v36 = *((_QWORD *)v27 + 18);
        }
        else
        {
          v121 = i;
          v32 = *(unsigned int *)(i + 8);
          v114 = *(_DWORD *)(i + 8);
          v33 = (_DWORD *)((char *)v27 + 128);
          for ( i = *((_QWORD *)v27 + 16); (_DWORD *)i != v33; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == (_DWORD)v32 )
            {
              v36 = *(_QWORD *)(i + 72);
              goto LABEL_29;
            }
          }
          v36 = 0LL;
LABEL_29:
          v116 = v36;
        }
        *((_QWORD *)v25 + 2) = v36;
      }
      else
      {
        *((_QWORD *)v25 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_54;
      v122 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v122 + 348) & 4) != 0 || !*(_BYTE *)(v28 + 89) && (*(_DWORD *)(v28 + 76) & 0x400) == 0 )
        goto LABEL_54;
      v37 = *(_QWORD *)(v28 + 312);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v37 + 16) == CurrentThread )
      {
        v69 = *(_DWORD *)(v37 + 24);
        if ( v69 <= 0 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v70 + 24) = 661LL;
          WdLogEvent5_WdAssertion(v70);
          v69 = *(_DWORD *)(v37 + 24);
        }
        *(_DWORD *)(v37 + 24) = v69 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v53 = *(_DWORD *)(v37 + 28);
            if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v39, (const EVENT_DESCRIPTOR *)"g", v40, v53);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v37 + 8));
          ExAcquirePushLockExclusiveEx(v37, 0LL);
        }
        if ( *(_QWORD *)(v37 + 16) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v71 + 24) = 685LL;
          WdLogEvent5_WdAssertion(v71);
        }
        if ( *(_DWORD *)(v37 + 24) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v72 + 24) = 686LL;
          WdLogEvent5_WdAssertion(v72);
        }
        *(_QWORD *)(v37 + 16) = KeGetCurrentThread();
        *(_DWORD *)(v37 + 24) = 1;
      }
      v110 = v28;
      v41 = *(_QWORD *)(v28 + 104);
      if ( v41 )
      {
        v48 = *(_QWORD *)(v41 + 8);
      }
      else if ( (*(_DWORD *)(v28 + 80) & 0xA000) != 0 )
      {
        v48 = *(_QWORD *)(v28 + 512);
      }
      else
      {
        v42 = *(_QWORD **)(v28 + 96);
        v38 = v42[3];
        if ( v38 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v42[1] + 24LL) + 88LL))(*(_QWORD *)(v42[1] + 24LL));
        }
        else
        {
          v39 = (VIDMM_GLOBAL *)v42[10];
          if ( !v39 )
            goto LABEL_45;
          v48 = *((_QWORD *)v39 + 1);
        }
      }
      v107 = v48;
      if ( !v48 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v28 + 128)
          && (**(_DWORD **)(v28 + 496) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v28 + 8)) >= 0 )
        {
          v73 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v74 = *(_QWORD *)(v28 + 96);
          if ( v74 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v74 + 8), &ApcState);
            v73 = 1;
            v74 = *(_QWORD *)(v28 + 96);
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      v39,
                      (struct _VIDMM_LOCAL_ALLOC *)v74,
                      (struct _VIDMM_GLOBAL_ALLOC *)v28,
                      0LL,
                      *(_QWORD *)(v28 + 8),
                      (enum _LOCK_OPERATION)v97,
                      0LL,
                      0) < 0 )
          {
            v75 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v75 + 24) = v28;
            WdLogEvent5_WdError(v75);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v28 + 8));
          }
          else
          {
            ++*(_DWORD *)(v28 + 340);
            *(_DWORD *)(v28 + 84) |= 2u;
          }
          if ( v73 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v110 = 0LL;
      v43 = *(_QWORD *)(v28 + 312);
      v124 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v43 + 16) != v124 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
        v76[3] = 275LL;
        v76[4] = 4LL;
        v76[5] = v43;
        v76[6] = 0LL;
        v76[7] = 0LL;
        WdLogEvent5_WdCriticalError(v76);
      }
      v44 = *(_DWORD *)(v43 + 24);
      if ( v44 <= 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
        *(_QWORD *)(v77 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v77);
        v44 = *(_DWORD *)(v43 + 24);
      }
      v45 = v44 - 1;
      *(_DWORD *)(v43 + 24) = v45;
      if ( !v45 )
      {
        *(_QWORD *)(v43 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v43, 0LL);
      }
      KeLeaveCriticalRegion();
      v22 = a6;
      Current = v105;
      goto LABEL_53;
    }
    ++*((_DWORD *)this + 1803);
    v67 = VIDMM_SEGMENT::DriverId(v100);
    *v68 ^= (*v68 ^ (2 * v67)) & 0x3E;
    v33 = (_DWORD *)(*(_QWORD *)(v28 + 136) + *((_QWORD *)v100 + 3));
    *((_QWORD *)v103 + 2) = v33;
LABEL_53:
    v27 = v102;
LABEL_54:
    if ( !v35 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v27, v22);
      v22 = a6;
      Current = v105;
    }
    v46 = v102;
    if ( !*((_DWORD *)v27 + 38) && (*((_BYTE *)v102 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40936) & 4) == 0
        || (i = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL), (i & 0x10) == 0) )
      {
        v49 = WdLogNewEntry5_WdAssertion(i, v33, v32);
        *(_QWORD *)(v49 + 24) = v46;
        WdLogEvent5_WdAssertion(v49);
        v50 = -1073741823;
        v99 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v46 + 1) + 32LL));
        p_QuadPart = v35;
        if ( !v35 )
          VIDMM_GLOBAL::RemoveDMAReferences(v46, a6);
        v21 = v98;
        v24 = QuadPart;
        v51 = a6;
        goto LABEL_152;
      }
    }
    v23 = a3;
    v47 = (a3->Value >> 2) & 7;
    if ( v47 )
    {
      v52 = WdLogNewEntry5_WdAssertion(i, v33, v32);
      *(_QWORD *)(v52 + 24) = v46;
      *(_QWORD *)(v52 + 32) = v47;
      WdLogEvent5_WdAssertion(v52);
      v22 = a6;
      Current = v105;
    }
    v21 = v98;
    v24 = QuadPart;
    v25 = v103;
    p_QuadPart = v101;
    v12 = v106;
    v20 = v108;
    v17 = v112;
LABEL_60:
    QuadPart = ++v24;
    a3 = ++v23;
    v25 = (VIDMM_SEGMENT *)((char *)v25 + 24);
    v103 = v25;
    v98 = ++v21;
  }
  *v117 = v20;
  if ( a2[8].QuadPart )
  {
    v100 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 128);
    if ( !v100 || (*((_DWORD *)this + 1762) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1804);
      a2[3].HighPart &= ~4u;
      *v109 = 0;
      v80 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1803);
      if ( (*((_DWORD *)v100 + 20) & 0x1000) != 0 )
        v79 = 0;
      else
        v79 = *((_DWORD *)v100 + 4) + 1;
      *v109 = v79;
      v80 = *((_QWORD *)v100 + 3) + *(_QWORD *)(a2[7].QuadPart + 136);
    }
    v81 = v113;
    v113->QuadPart = v80;
    v82 = a2[8];
    v83 = a6;
    if ( a6 + *(_DWORD *)(v82.QuadPart + 156) == 0x7FFFFFFF )
    {
      v86 = *(int *)(v82.QuadPart + 156);
      v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80);
      v87[3] = 270LL;
      v87[4] = 41LL;
      v87[5] = v82.QuadPart;
      v87[6] = v86;
      v87[7] = 0LL;
      WdLogEvent5_WdCriticalError(v87);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v82.QuadPart + 156), a6);
  }
  else
  {
    *v109 = 0;
    *v113 = a2[11];
    v83 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v83);
  if ( v83 > 1 )
    a2[3].HighPart |= 2u;
  v84 = v98;
  if ( !p_QuadPart )
    a2[18].LowPart = v98;
  a2[2].LowPart = v83;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v88 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v96, 0);
    v84 = v98;
    if ( a2[19].QuadPart == v88 )
      ++*((_DWORD *)this + 1805);
  }
  if ( (qword_1C0050010 & 4) != 0 )
  {
    v89 = a2[14];
    v90 = a2[13];
    v91 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v84; j = (unsigned int)(j + 128) )
    {
      v93 = 128LL;
      if ( v84 - (unsigned int)j < 0x80 )
        v93 = v84 - (unsigned int)j;
      v94 = 0LL;
      if ( (_DWORD)v93 )
      {
        v95 = (int *)v126;
        do
        {
          *v95 = *(_DWORD *)(v89.QuadPart + 24LL * (unsigned int)(v94 + j) + 8) & 1;
          v94 = (unsigned int)(v94 + 1);
          ++v95;
        }
        while ( (unsigned int)v94 < (unsigned int)v93 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v97) = v93;
        McTemplateK0ppqPR2TR2_EtwWriteTransfer(v90.QuadPart + 8 * j, v93, v94, v91, a2, v97, v90.QuadPart + 8 * j, v126);
      }
    }
  }
  return 0LL;
}
