/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0129E20
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01296D4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D5B0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C029B910 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C024ACAC (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        struct _DXGK_ALLOCATIONINFO *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        UINT a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r13d
  D3DDDI_ALLOCATIONINFO *v14; // r12
  SIZE_T Size; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  char v26; // bl
  unsigned int v27; // eax
  SIZE_T v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  D3DDDI_ALLOCATIONINFO *v31; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v32; // r9
  size_t v33; // rcx
  __int64 v34; // rdx
  char *v35; // r12
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  const void *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v48; // r10d
  __int64 v49; // rcx
  _DWORD *v50; // r9
  __int64 v51; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  bool v63; // zf
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  struct DXGPROCESS *Current; // r13
  SIZE_T v69; // rax
  unsigned int *v70; // r12
  unsigned int v71; // edx
  unsigned int v72; // edx
  unsigned int v73; // r8d
  __int64 v74; // rax
  __int64 v75; // r9
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _EX_RUNDOWN_REF *v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rax
  struct _EX_RUNDOWN_REF *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  _BYTE v96[8]; // [rsp+80h] [rbp-80h] BYREF
  char v97; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v98[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION v99; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v100[80]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_ALLOCATIONINFO *v101; // [rsp+150h] [rbp+50h]
  unsigned int v102; // [rsp+160h] [rbp+60h] BYREF
  struct _EX_RUNDOWN_REF *v103; // [rsp+168h] [rbp+68h] BYREF

  v102 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v99, 0, sizeof(v99));
  Size = this->Size;
  v102 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(Size + 16)) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v53 + 24) = 7575LL;
    WdLogEvent5_WdAssertion(v53);
  }
  v20 = *((_BYTE *)DXGPROCESS::GetCurrent(v17, v16, v18, v19) + 347);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v96, v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
  if ( !a4 )
    goto LABEL_46;
  v25 = *(_QWORD *)(a4 + 16);
  if ( !v25 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    LODWORD(v46) = -1073741811;
    v54[3] = this;
    v54[4] = a4;
    v54[5] = -1073741811LL;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v25 + 136) - 44LL) & 2) == 0
    || (v57 = *(_QWORD *)(*(_QWORD *)&this->SupportedReadSegmentSet + 88LL)) == 0
    || (*(unsigned int (**)(void))(v57 + 208))() )
  {
    v23 = *(unsigned int *)(a2 + 16);
    if ( *(_DWORD *)(v25 + 132) != (_DWORD)v23 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      LODWORD(v46) = -1073741811;
      v56[3] = this;
      v56[4] = *(unsigned int *)(v25 + 132);
      v56[5] = *(unsigned int *)(a2 + 16);
      v56[6] = -1073741811LL;
LABEL_40:
      WdLogEvent5_WdError(v56);
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(v25 + 12) & 4) == 0 )
    {
      v26 = v20 & 0x20;
      if ( v26 )
        goto LABEL_12;
      v27 = *(_DWORD *)(v25 + 112);
      if ( *(_DWORD *)(a2 + 32) == v27 )
      {
        if ( v27 )
        {
          memmove(*(void **)(a2 + 40), *(const void **)(v25 + 104), v27);
          v23 = *(unsigned int *)(a2 + 16);
        }
LABEL_12:
        v28 = 96 * v23;
        if ( !is_mul_ok(v23, 0x60uLL) )
          v28 = -1LL;
        v101 = (D3DDDI_ALLOCATIONINFO *)operator new[](v28, 0x4B677844u, PagedPool);
        v31 = v101;
        if ( v101 )
        {
          v32 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
          v33 = *(unsigned int *)(a2 + 48);
          v34 = *(unsigned int *)(a2 + 16);
          v99.hDevice = *(_DWORD *)a2;
          v99.hGlobalShare = 0;
          v99.pStandardAllocation = v32;
          v99.PrivateDriverDataSize = v33;
          v99.NumAllocations = v34;
          v99.pAllocationInfo = v101;
          v99.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v99.Flags ^ (*(_BYTE *)&v99.Flags ^ (unsigned __int8)(a7 << 7)) & 0x80 | 0x41);
          if ( v26 || (_DWORD)v33 == *(_DWORD *)(v25 + 128) )
          {
            if ( (_DWORD)v33 )
            {
              memmove(v32, *(const void **)(v25 + 120), v33);
              v34 = *(unsigned int *)(a2 + 16);
              v31 = v101;
            }
            v35 = *(char **)(a2 + 72);
            v36 = *(_QWORD **)(v25 + 136);
            if ( (_DWORD)v34 )
            {
              v34 = 0LL;
              while ( 1 )
              {
                v37 = *((unsigned int *)v36 - 2);
                if ( (int)v37 + (int)v34 < (unsigned int)v34 )
                  break;
                if ( (unsigned int)(v37 + v34) > *(_DWORD *)(a2 + 64) )
                {
                  v64 = WdLogNewEntry5_WdWarning(v37, v34, v31);
                  *(_QWORD *)(v64 + 24) = this;
                  *(_QWORD *)(v64 + 32) = -1073741801LL;
                  WdLogEvent5_WdWarning(v64);
                  LODWORD(v46) = -1073741801;
                  goto LABEL_51;
                }
                v38 = (const void *)*(v36 - 2);
                if ( v38 )
                {
                  memmove(v35, v38, (unsigned int)v37);
                  v31 = v101;
                }
                v39 = v10++;
                v40 = 96 * v39;
                *(D3DKMT_HANDLE *)((char *)&v31->hAllocation + v40) = 0;
                *(const void **)((char *)&v31->pSystemMem + v40) = 0LL;
                LODWORD(v39) = *((_DWORD *)v36 - 11);
                *(UINT *)((char *)&v31->Flags.Value + v40) = 0;
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v31->VidPnSourceId + v40) = ((unsigned int)v39 >> 6) & 0xF;
                LODWORD(v39) = *((_DWORD *)v36 - 11);
                *(void **)((char *)&v31->pPrivateDriverData + v40) = v35;
                *(UINT *)((char *)&v31->Flags.Value + v40) = v39 & 1 | ((((unsigned int)v39 | ((unsigned int)v39 >> 12)) & 2) != 0);
                *(UINT *)((char *)&v31->PrivateDriverDataSize + v40) = *((_DWORD *)v36 - 2);
                v41 = *((unsigned int *)v36 - 2);
                v35 += v41;
                v36 = (_QWORD *)*v36;
                v34 = (unsigned int)v41 + v102;
                v102 += v41;
                if ( v10 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_26;
              }
              LODWORD(v46) = -1073741675;
              v65 = WdLogNewEntry5_WdWarning(v37, v34, v31);
              *(_QWORD *)(v65 + 24) = this;
              *(_QWORD *)(v65 + 32) = -1073741675LL;
              WdLogEvent5_WdWarning(v65);
LABEL_51:
              v63 = v97 == 0;
              goto LABEL_52;
            }
LABEL_26:
            if ( v97 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96, v34);
            v42 = DXGDEVICE::CreateAllocation(
                    this,
                    &v99,
                    0LL,
                    1,
                    (struct _DXGSHAREDALLOCOBJECT *)a4,
                    0LL,
                    a6,
                    a5,
                    a8,
                    a9,
                    a10,
                    0LL,
                    0LL,
                    0LL,
                    0);
            v46 = v42;
            if ( v42 < 0 )
            {
              v66 = WdLogNewEntry5_WdWarning(v44, v43, v45);
              *(_QWORD *)(v66 + 24) = v46;
              WdLogEvent5_WdWarning(v66);
LABEL_34:
              v14 = v101;
              goto LABEL_35;
            }
            hResource = v99.hResource;
            if ( !v99.hResource )
            {
              v67 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v67 + 24) = 7782LL;
              WdLogEvent5_WdAssertion(v67);
              hResource = v99.hResource;
            }
            v48 = 0;
            v49 = v102;
            v50 = *(_DWORD **)(a2 + 24);
            *(_DWORD *)(a2 + 64) = v102;
            for ( *(_DWORD *)(a2 + 80) = hResource; v48 < *(_DWORD *)(a2 + 16); *(v50 - 16) = v49 )
            {
              v51 = v48++;
              v45 = 96 * v51;
              *v50 = *(&v99.pAllocationInfo->hAllocation + 24 * v51);
              v50 += 20;
              *((_QWORD *)v50 - 9) = *(_QWORD *)(a2 + 72)
                                   + (unsigned int)(*((_DWORD *)&v99.pAllocationInfo->pPrivateDriverData + 24 * v51)
                                                  - *(_DWORD *)(a2 + 72));
              v49 = *(&v99.pAllocationInfo->PrivateDriverDataSize + 24 * v51);
            }
            if ( (this[21].Size & 0x10000000000LL) == 0 )
              goto LABEL_34;
            Current = DXGPROCESS::GetCurrent(v49, v43, v45, (__int64)v50);
            v69 = 4LL * *(unsigned int *)(a2 + 16);
            if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 4uLL) )
              v69 = -1LL;
            v70 = (unsigned int *)operator new[](v69, 0x4B677844u, PagedPool);
            if ( !v70 )
            {
              LODWORD(v46) = -1073741801;
              goto LABEL_34;
            }
            v71 = *(_DWORD *)(v25 + 12);
            v102 = 0;
            v72 = v71 >> 3;
            if ( (v72 & 1) != 0 )
              v73 = *(_DWORD *)(a4 + 40);
            else
              v73 = *(_DWORD *)(v25 + 28);
            LODWORD(v46) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(this->Size + 16) + 4240LL),
                             Current,
                             (struct DXGDEVICE *)this,
                             v72 & 1,
                             v73,
                             *(_DWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 64),
                             &v102,
                             v70);
            if ( (int)v46 < 0 )
              goto LABEL_88;
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v100,
              (struct _KTHREAD **)Current);
            v74 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v74 < *((_DWORD *)Current + 64) )
            {
              v75 = *((_QWORD *)Current + 30);
              v76 = *(_DWORD *)(v75 + 16 * v74 + 8);
              if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v75 + 16 * v74 + 8) & 0x60)
                && (v76 & 0x2000) == 0
                && (v76 & 0x1F) != 0 )
              {
                v77 = v76 & 0x1F;
                if ( (_BYTE)v77 == 4 )
                {
                  v79 = *(struct _EX_RUNDOWN_REF **)(v75 + 16LL * (unsigned int)v74);
                  goto LABEL_71;
                }
                v78 = WdLogNewEntry5_WdError(v77, (*(_DWORD *)(a2 + 80) >> 25) & 0x60);
                *(_QWORD *)(v78 + 24) = 316LL;
                WdLogEvent5_WdError(v78);
              }
            }
            v79 = 0LL;
LABEL_71:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v98, v79);
            if ( !v98[0] )
            {
              v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
              *(_QWORD *)(v83 + 24) = 7829LL;
              WdLogEvent5_WdWarning(v83);
              LODWORD(v46) = -1073741811;
              goto LABEL_87;
            }
            v84 = 0LL;
            HIDWORD(v98[0][2].Ptr) = v102;
            if ( *(_DWORD *)(a2 + 16) )
            {
              while ( 1 )
              {
                v85 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v85 >= *((_DWORD *)Current + 64) )
                  goto LABEL_81;
                v86 = *((_QWORD *)Current + 30);
                v87 = *(_DWORD *)(v86 + 16 * v85 + 8);
                if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 25) & 0x60) != (*(_BYTE *)(v86 + 16 * v85 + 8) & 0x60)
                  || (v87 & 0x2000) != 0
                  || (v87 & 0x1F) == 0 )
                {
                  goto LABEL_81;
                }
                v88 = v87 & 0x1F;
                if ( (_BYTE)v88 != 5 )
                  break;
                v90 = *(struct _EX_RUNDOWN_REF **)(v86 + 16LL * (unsigned int)v85);
LABEL_82:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v103, v90);
                if ( !v103 )
                {
                  v94 = WdLogNewEntry5_WdWarning(v92, v91, v93);
                  *(_QWORD *)(v94 + 24) = 7840LL;
                  WdLogEvent5_WdWarning(v94);
                  LODWORD(v46) = -1073741811;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v103, v95);
                  goto LABEL_87;
                }
                LODWORD(v103[12].Count) = v70[v84];
                HIDWORD(v103[12].Ptr) = v70[v84];
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v103, v91);
                v84 = (unsigned int)(v84 + 1);
                if ( (unsigned int)v84 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_87;
              }
              v89 = WdLogNewEntry5_WdError(v88, (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80 * v84) >> 25) & 0x60);
              *(_QWORD *)(v89 + 24) = 316LL;
              WdLogEvent5_WdError(v89);
LABEL_81:
              v90 = 0LL;
              goto LABEL_82;
            }
LABEL_87:
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v98, v80);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
LABEL_88:
            operator delete[](v70);
            goto LABEL_34;
          }
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v34, v101);
          LODWORD(v46) = -1073741811;
          v62[3] = this;
          v62[4] = *(unsigned int *)(a2 + 48);
          v62[5] = *(unsigned int *)(v25 + 128);
          v62[6] = -1073741811LL;
          WdLogEvent5_WdWarning(v62);
        }
        else
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, 0LL);
          v60[3] = this;
          v60[4] = *(unsigned int *)(a2 + 16);
          v60[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v60);
          LODWORD(v46) = -1073741801;
        }
        v63 = v97 == 0;
LABEL_52:
        if ( !v63 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96, v61);
        goto LABEL_34;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      LODWORD(v46) = -1073741811;
      v54[3] = this;
      v54[4] = *(unsigned int *)(a2 + 32);
      v54[5] = *(unsigned int *)(v25 + 112);
      v54[6] = -1073741811LL;
LABEL_38:
      WdLogEvent5_WdWarning(v54);
      goto LABEL_41;
    }
LABEL_46:
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    LODWORD(v46) = -1073741811;
    v56[3] = this;
    v56[4] = -1073741811LL;
    goto LABEL_40;
  }
  v59 = WdLogNewEntry5_WdEvent(v58, v22);
  LODWORD(v46) = -1073741790;
  *(_QWORD *)(v59 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v59);
LABEL_41:
  if ( v97 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96, v55);
LABEL_35:
  operator delete[](v14);
  return (unsigned int)v46;
}
