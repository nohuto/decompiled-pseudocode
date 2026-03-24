/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0121F7C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D1F0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0280F24 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C02814E8 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
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

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        struct _DXGK_ALLOCATIONINFO *this,
        __int64 a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        UINT a5,
        struct COREDEVICEACCESS *a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v11; // r15
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // r8
  struct _KTHREAD *CurrentThread; // rcx
  struct DXGGLOBAL *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  char v34; // r12
  unsigned int v35; // eax
  SIZE_T v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  D3DDDI_ALLOCATIONINFO *v39; // r8
  D3DKMT_CREATESTANDARDALLOCATION *v40; // r9
  size_t v41; // rcx
  __int64 v42; // rdx
  char *v43; // r15
  __int64 v44; // r12
  _QWORD *v45; // rbx
  __int64 v46; // rcx
  const void *v47; // rdx
  __int64 v48; // rdx
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  D3DKMT_HANDLE hResource; // eax
  unsigned int v58; // r10d
  _DWORD *v59; // r9
  __int64 v60; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  struct DXGPROCESS *Current; // r13
  SIZE_T v78; // rax
  __int64 v79; // rcx
  unsigned int *v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned int v83; // edx
  unsigned int v84; // r8d
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
  unsigned int v95; // r14d
  __int64 v96; // rax
  __int64 v97; // r9
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rax
  struct _EX_RUNDOWN_REF *v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rdx
  _BYTE v107[8]; // [rsp+80h] [rbp-80h] BYREF
  char v108; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v109[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION v110; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v111[80]; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_ALLOCATIONINFO *v112; // [rsp+150h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v113; // [rsp+168h] [rbp+68h] BYREF

  v113 = a4;
  v112 = 0LL;
  v11 = a3;
  memset(&v110, 0, sizeof(v110));
  v13 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(this->Size + 16)) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v65 + 24) = 7575LL;
    WdLogEvent5_WdAssertion(v65);
  }
  v18 = *((_BYTE *)DXGPROCESS::GetCurrent(v15, v14, v16, v17) + 347);
  Global = DXGGLOBAL::GetGlobal(v20, v19);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v107, (struct DXGGLOBAL *)((char *)Global + 248), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
  if ( !(_DWORD)v11 )
    goto LABEL_95;
  v24 = DXGGLOBAL::GetGlobal(v23, v22);
  CurrentThread = KeGetCurrentThread();
  v27 = v24;
  if ( *((struct _KTHREAD **)v24 + 33) != CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, v22);
    *(_QWORD *)(v28 + 24) = 1114LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v29 >= *((_DWORD *)v27 + 76) )
    goto LABEL_41;
  v25 = *((_QWORD *)v27 + 36);
  v30 = 2LL * (unsigned int)v29;
  v31 = (unsigned int)v29;
  v29 = ((unsigned int)v11 >> 25) & 0x60;
  v22 = *(unsigned int *)(v25 + 8 * v30 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v25 + 8 * v30 + 8) & 0x60)
    || (v22 & 0x2000) != 0
    || (v22 & 0x1F) == 0 )
  {
    goto LABEL_41;
  }
  v32 = 2 * v31;
  v22 &= 0x1Fu;
  if ( (_BYTE)v22 != 2 )
  {
    v66 = WdLogNewEntry5_WdError(v29, v22);
    *(_QWORD *)(v66 + 24) = 316LL;
    WdLogEvent5_WdError(v66);
    goto LABEL_41;
  }
  v33 = *(_QWORD *)(v25 + 8 * v32);
  if ( !v33 )
  {
LABEL_41:
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v22, v25);
    v62[3] = this;
    v62[4] = v11;
    v62[5] = -1073741811LL;
LABEL_42:
    WdLogEvent5_WdWarning(v62);
LABEL_43:
    LODWORD(v56) = -1073741811;
LABEL_44:
    v64 = v108 == 0;
LABEL_57:
    if ( !v64 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107, v63);
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v33 + 136) - 44LL) & 2) != 0 )
  {
    v67 = *(_QWORD *)(*(_QWORD *)&this->SupportedReadSegmentSet + 88LL);
    if ( v67 )
    {
      if ( !(*(unsigned int (**)(void))(v67 + 208))() )
      {
        v69 = WdLogNewEntry5_WdEvent(v68, v22);
        LODWORD(v56) = -1073741790;
        *(_QWORD *)(v69 + 24) = -1073741790LL;
        WdLogEvent5_WdEvent(v69);
        goto LABEL_44;
      }
    }
  }
  v23 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(v33 + 132) != (_DWORD)v23 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v70[3] = this;
    v70[4] = *(unsigned int *)(v33 + 132);
    v70[5] = *(unsigned int *)(a2 + 8);
    v70[6] = -1073741811LL;
LABEL_96:
    WdLogEvent5_WdError(v70);
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v33 + 12) & 4) != 0 )
  {
LABEL_95:
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v70[4] = -1073741811LL;
    v70[3] = this;
    goto LABEL_96;
  }
  v34 = v18 & 0x20;
  if ( !v34 )
  {
    v35 = *(_DWORD *)(v33 + 112);
    if ( *(_DWORD *)(a2 + 32) != v35 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v25);
      v62[3] = this;
      v62[4] = *(unsigned int *)(a2 + 32);
      v71 = *(unsigned int *)(v33 + 112);
LABEL_52:
      v62[5] = v71;
      v62[6] = -1073741811LL;
      goto LABEL_42;
    }
    if ( v35 )
    {
      memmove(*(void **)(a2 + 24), *(const void **)(v33 + 104), v35);
      v23 = *(unsigned int *)(a2 + 8);
    }
  }
  v36 = 96 * v23;
  if ( !is_mul_ok(v23, 0x60uLL) )
    v36 = -1LL;
  v112 = (D3DDDI_ALLOCATIONINFO *)operator new[](v36, 0x4B677844u, PagedPool);
  v39 = v112;
  if ( !v112 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, 0LL);
    v72[3] = this;
    v72[4] = *(unsigned int *)(a2 + 8);
    v72[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v72);
    LODWORD(v56) = -1073741801;
    goto LABEL_44;
  }
  v40 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v41 = *(unsigned int *)(a2 + 48);
  v42 = *(unsigned int *)(a2 + 8);
  v110.hDevice = *(_DWORD *)a2;
  v110.hGlobalShare = v11;
  v110.pStandardAllocation = v40;
  v110.PrivateDriverDataSize = v41;
  v110.NumAllocations = v42;
  v110.pAllocationInfo = v112;
  v110.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v110.Flags & 0xFFFFFF3E | 1);
  if ( !v34 && (_DWORD)v41 != *(_DWORD *)(v33 + 128) )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v42, v112);
    v62[3] = this;
    v62[4] = *(unsigned int *)(a2 + 48);
    v71 = *(unsigned int *)(v33 + 128);
    goto LABEL_52;
  }
  if ( (_DWORD)v41 )
  {
    memmove(v40, *(const void **)(v33 + 120), v41);
    v42 = *(unsigned int *)(a2 + 8);
    v39 = v112;
  }
  v43 = *(char **)(a2 + 56);
  v44 = 0LL;
  v45 = *(_QWORD **)(v33 + 136);
  if ( (_DWORD)v42 )
  {
    while ( 1 )
    {
      v46 = *((unsigned int *)v45 - 2);
      if ( (unsigned int)v46 + v13 < v13 )
        break;
      if ( (unsigned int)v46 + v13 > *(_DWORD *)(a2 + 64) )
      {
        v73 = WdLogNewEntry5_WdWarning(v46, v42, v39);
        *(_QWORD *)(v73 + 24) = this;
        *(_QWORD *)(v73 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v73);
        LODWORD(v56) = -1073741801;
        goto LABEL_56;
      }
      v47 = (const void *)*(v45 - 2);
      if ( v47 )
      {
        memmove(v43, v47, (unsigned int)v46);
        v39 = v112;
      }
      v48 = 3 * v44;
      v44 = (unsigned int)(v44 + 1);
      v42 = 32 * v48;
      *(D3DKMT_HANDLE *)((char *)&v39->hAllocation + v42) = 0;
      *(const void **)((char *)&v39->pSystemMem + v42) = 0LL;
      v49 = *((_DWORD *)v45 - 11);
      *(UINT *)((char *)&v39->Flags.Value + v42) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v39->VidPnSourceId + v42) = (v49 >> 6) & 0xF;
      v50 = *((_DWORD *)v45 - 11);
      *(void **)((char *)&v39->pPrivateDriverData + v42) = v43;
      *(UINT *)((char *)&v39->Flags.Value + v42) = v50 & 1 | (((v50 | (v50 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v39->PrivateDriverDataSize + v42) = *((_DWORD *)v45 - 2);
      v51 = *((unsigned int *)v45 - 2);
      v45 = (_QWORD *)*v45;
      v13 += v51;
      v43 += v51;
      if ( (unsigned int)v44 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_32;
    }
    LODWORD(v56) = -1073741675;
    v74 = WdLogNewEntry5_WdWarning(v46, v42, v39);
    *(_QWORD *)(v74 + 24) = this;
    *(_QWORD *)(v74 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v74);
LABEL_56:
    v64 = v108 == 0;
    goto LABEL_57;
  }
LABEL_32:
  if ( v108 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107, v42);
  v52 = DXGDEVICE::CreateAllocation(this, &v110, 0LL, 1, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v56 = v52;
  if ( v52 < 0 )
  {
    v75 = WdLogNewEntry5_WdWarning(v54, v53, v55);
    *(_QWORD *)(v75 + 24) = v56;
    WdLogEvent5_WdWarning(v75);
    goto LABEL_40;
  }
  hResource = v110.hResource;
  if ( !v110.hResource )
  {
    v76 = WdLogNewEntry5_WdAssertion(v54, v53);
    *(_QWORD *)(v76 + 24) = 7782LL;
    WdLogEvent5_WdAssertion(v76);
    hResource = v110.hResource;
  }
  v58 = 0;
  v59 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v13;
  for ( *(_DWORD *)(a2 + 68) = hResource; v58 < *(_DWORD *)(a2 + 8); *(v59 - 16) = v54 )
  {
    v60 = v58++;
    v55 = 96 * v60;
    *v59 = *(&v110.pAllocationInfo->hAllocation + 24 * v60);
    v59 += 20;
    *((_QWORD *)v59 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v110.pAllocationInfo->pPrivateDriverData + 24 * v60)
                                        - *(_DWORD *)(a2 + 56));
    v54 = *(&v110.pAllocationInfo->PrivateDriverDataSize + 24 * v60);
  }
  if ( (this[21].Size & 0x10000000000LL) != 0 )
  {
    Current = DXGPROCESS::GetCurrent(v54, v53, v55, (__int64)v59);
    v78 = 4LL * *(unsigned int *)(a2 + 8);
    if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 4uLL) )
      v78 = -1LL;
    v80 = (unsigned int *)operator new[](v78, 0x4B677844u, PagedPool);
    if ( !v80 )
    {
      LODWORD(v56) = -1073741801;
      goto LABEL_40;
    }
    v81 = *(unsigned int *)(v33 + 12);
    if ( (v81 & 8) != 0 )
    {
      v82 = WdLogNewEntry5_WdAssertion(v79, v81);
      *(_QWORD *)(v82 + 24) = 7812LL;
      WdLogEvent5_WdAssertion(v82);
      LODWORD(v81) = *(_DWORD *)(v33 + 12);
    }
    v83 = (unsigned int)v81 >> 3;
    a7 = 0;
    if ( (v83 & 1) != 0 )
      v84 = MEMORY[0x28];
    else
      v84 = *(_DWORD *)(v33 + 28);
    LODWORD(v56) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(this->Size + 16) + 4240LL),
                     Current,
                     (struct DXGDEVICE *)this,
                     v83 & 1,
                     v84,
                     *(_DWORD *)(a2 + 8),
                     *(_DWORD *)(a2 + 64),
                     &a7,
                     v80);
    if ( (int)v56 < 0 )
      goto LABEL_94;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v111, (struct _KTHREAD **)Current);
    v85 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v85 < *((_DWORD *)Current + 64) )
    {
      v86 = *((_QWORD *)Current + 30);
      v87 = *(_DWORD *)(v86 + 16 * v85 + 8);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v86 + 16 * v85 + 8) & 0x60)
        && (v87 & 0x2000) == 0
        && (v87 & 0x1F) != 0 )
      {
        v88 = v87 & 0x1F;
        if ( (_BYTE)v88 == 4 )
        {
          v90 = *(struct _EX_RUNDOWN_REF **)(v86 + 16LL * (unsigned int)v85);
          goto LABEL_77;
        }
        v89 = WdLogNewEntry5_WdError(v88, (*(_DWORD *)(a2 + 68) >> 25) & 0x60);
        *(_QWORD *)(v89 + 24) = 316LL;
        WdLogEvent5_WdError(v89);
      }
    }
    v90 = 0LL;
LABEL_77:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v109, v90);
    if ( !v109[0] )
    {
      v94 = WdLogNewEntry5_WdWarning(v92, v91, v93);
      *(_QWORD *)(v94 + 24) = 7829LL;
      WdLogEvent5_WdWarning(v94);
      LODWORD(v56) = -1073741811;
      goto LABEL_93;
    }
    v95 = 0;
    HIDWORD(v109[0][2].Ptr) = a7;
    if ( *(_DWORD *)(a2 + 8) )
    {
      while ( 1 )
      {
        v96 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v95) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v96 >= *((_DWORD *)Current + 64) )
          goto LABEL_87;
        v97 = *((_QWORD *)Current + 30);
        v98 = *(_DWORD *)(v97 + 16 * v96 + 8);
        if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v95) >> 25) & 0x60) != (*(_BYTE *)(v97 + 16 * v96 + 8) & 0x60)
          || (v98 & 0x2000) != 0
          || (v98 & 0x1F) == 0 )
        {
          goto LABEL_87;
        }
        v99 = v98 & 0x1F;
        if ( (_BYTE)v99 != 5 )
          break;
        v101 = *(struct _EX_RUNDOWN_REF **)(v97 + 16LL * (unsigned int)v96);
LABEL_88:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v113, v101);
        if ( !v113 )
        {
          v105 = WdLogNewEntry5_WdWarning(v103, v102, v104);
          *(_QWORD *)(v105 + 24) = 7840LL;
          WdLogEvent5_WdWarning(v105);
          LODWORD(v56) = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v113, v106);
          goto LABEL_93;
        }
        LODWORD(v113[12].Count) = v80[v95];
        HIDWORD(v113[12].Ptr) = v80[v95];
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v113, v102);
        if ( ++v95 >= *(_DWORD *)(a2 + 8) )
          goto LABEL_93;
      }
      v100 = WdLogNewEntry5_WdError(v99, (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v95) >> 25) & 0x60);
      *(_QWORD *)(v100 + 24) = 316LL;
      WdLogEvent5_WdError(v100);
LABEL_87:
      v101 = 0LL;
      goto LABEL_88;
    }
LABEL_93:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(v109, v91);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v111);
LABEL_94:
    operator delete[](v80);
  }
LABEL_40:
  operator delete[](v112);
  return (unsigned int)v56;
}
