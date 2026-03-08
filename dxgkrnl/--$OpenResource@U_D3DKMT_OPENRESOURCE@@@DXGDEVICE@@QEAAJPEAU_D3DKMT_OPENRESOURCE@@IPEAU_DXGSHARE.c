/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01CA6CC
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0165EA0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01B08FC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C033A3A4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C033AADC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C000E1E0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C0046E74 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C038763C (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        DXGDEVICE *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        unsigned int a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v11; // r12
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rsi
  char v17; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  D3DDDI_ALLOCATIONINFO *v23; // rax
  __int64 v24; // rcx
  D3DDDI_ALLOCATIONINFO *v25; // r8
  D3DKMT_HANDLE v26; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v27; // r9
  size_t v28; // rdx
  char *v29; // r15
  __int64 v30; // r12
  _QWORD *v31; // rbx
  unsigned int v32; // ecx
  const void *v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // r12d
  int v39; // eax
  int v40; // ebx
  D3DKMT_HANDLE hResource; // eax
  unsigned __int64 v42; // rcx
  unsigned int v43; // r10d
  _DWORD *v44; // r9
  __int64 v45; // rax
  int v47; // eax
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 v50; // r8
  int v51; // edx
  bool v52; // zf
  __int64 v53; // rax
  const wchar_t *v54; // r9
  size_t v55; // r8
  unsigned __int64 v56; // rax
  unsigned int *v57; // r13
  __int64 v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // r9d
  DXG_GUEST_VIRTUALGPU_VMBUS *v61; // rcx
  int v62; // eax
  unsigned int v63; // edx
  struct DXGPROCESS *v64; // rsi
  unsigned int v65; // eax
  __int64 v66; // r9
  int v67; // ecx
  struct _EX_RUNDOWN_REF *v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // r9
  int v71; // ecx
  struct _EX_RUNDOWN_REF *v72; // rdx
  struct _EX_RUNDOWN_REF *v73; // rsi
  unsigned int v74; // eax
  ULONG_PTR Count; // r15
  HANDLE CurrentProcessId; // rax
  _BYTE v77[8]; // [rsp+80h] [rbp-80h] BYREF
  char v78; // [rsp+88h] [rbp-78h]
  void *v79; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h]
  __int64 v82; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *Current; // [rsp+B0h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v84; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_CREATEALLOCATION v86; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v87[80]; // [rsp+120h] [rbp+20h] BYREF

  v79 = 0LL;
  v11 = a3;
  memset(&v86, 0, sizeof(v86));
  v13 = *((_QWORD *)this + 2);
  v14 = 0;
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v13 + 16)) )
  {
    WdLogSingleEntry1(1LL, 7765LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7765LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v15);
  v16 = Current;
  v17 = BYTE1(*((_DWORD *)Current + 106)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v77);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
  if ( !(_DWORD)v11 )
  {
    v40 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v54 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    goto LABEL_106;
  }
  if ( !v17 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v11, 2);
    goto LABEL_6;
  }
  v47 = *((_DWORD *)v16 + 106);
  if ( (v47 & 0x100) != 0 )
    v48 = *((_QWORD *)v16 + 76);
  else
    v48 = (unsigned __int64)v16 & -(__int64)((v47 & 0x80u) != 0);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v48 + 248));
  v49 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v49 < *(_DWORD *)(v48 + 296) )
  {
    v50 = *(_QWORD *)(v48 + 280);
    if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v50 + 16LL * v49 + 8) & 0x60)
      && (*(_DWORD *)(v50 + 16LL * v49 + 8) & 0x2000) == 0 )
    {
      v51 = *(_DWORD *)(v50 + 16LL * v49 + 8) & 0x1F;
      if ( v51 )
      {
        if ( v51 == 2 )
        {
          ObjectA = *(_QWORD *)(v50 + 16LL * v49);
          goto LABEL_46;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  ObjectA = 0LL;
LABEL_46:
  _InterlockedAdd((volatile signed __int32 *)(v48 + 264), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v48 + 248, 0LL);
  KeLeaveCriticalRegion();
  v14 = a7;
LABEL_6:
  if ( !ObjectA )
  {
    v40 = -1073741811;
    WdLogSingleEntry3(3LL, this, v11, -1073741811LL);
LABEL_50:
    v52 = v78 == 0;
    goto LABEL_107;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 136) - 44LL) & 2) != 0 )
  {
    v53 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( v53 )
    {
      if ( !(*(unsigned int (**)(void))(v53 + 208))() )
      {
        v40 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        goto LABEL_50;
      }
    }
  }
  v20 = *(unsigned int *)(ObjectA + 132);
  if ( (_DWORD)v20 != *(_DWORD *)(a2 + 8) )
  {
    v40 = -1073741811;
    WdLogSingleEntry4(2LL, this, v20, *(unsigned int *)(a2 + 8), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64"
                "x, returning 0x%I64x",
      (__int64)this,
      *(unsigned int *)(ObjectA + 132),
      *(unsigned int *)(a2 + 8),
      -1073741811LL,
      0LL);
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(ObjectA + 12) & 4) != 0 )
  {
    v40 = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    v54 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
LABEL_106:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, (__int64)this, -1073741811LL, 0LL, 0LL, 0LL);
    v52 = v78 == 0;
LABEL_107:
    if ( !v52 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
    goto LABEL_35;
  }
  if ( !v17 )
  {
    v21 = *(unsigned int *)(ObjectA + 112);
    if ( *(_DWORD *)(a2 + 32) != (_DWORD)v21 )
    {
      v55 = *(unsigned int *)(a2 + 32);
LABEL_58:
      v40 = -1073741811;
      WdLogSingleEntry4(3LL, this, v55, v21, -1073741811LL);
      goto LABEL_50;
    }
    if ( (_DWORD)v21 )
      memmove(*(void **)(a2 + 24), *(const void **)(ObjectA + 104), (unsigned int)v21);
  }
  v22 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v22 = -1LL;
  v23 = (D3DDDI_ALLOCATIONINFO *)operator new[](v22, 0x4B677844u, 256LL);
  v24 = *(unsigned int *)(a2 + 8);
  v25 = v23;
  v79 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry3(3LL, this, v24, -1073741801LL);
LABEL_61:
    v40 = -1073741801;
    goto LABEL_50;
  }
  v26 = *(_DWORD *)a2;
  v27 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v28 = *(unsigned int *)(a2 + 48);
  v86.NumAllocations = v24;
  v86.hDevice = v26;
  v86.pStandardAllocation = v27;
  v86.PrivateDriverDataSize = v28;
  v86.hGlobalShare = v11;
  v86.pAllocationInfo = v25;
  v86.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v86.Flags & 0xFFEFFF3F | (32
                                                                                 * (*(_DWORD *)(ObjectA + 12) & 0x8000)) | 1);
  if ( !v17 )
  {
    v21 = *(unsigned int *)(ObjectA + 128);
    if ( (_DWORD)v28 != (_DWORD)v21 )
    {
      v55 = v28;
      goto LABEL_58;
    }
  }
  if ( (_DWORD)v28 )
  {
    memmove(v27, *(const void **)(ObjectA + 120), v28);
    v25 = (D3DDDI_ALLOCATIONINFO *)v79;
  }
  v29 = *(char **)(a2 + 56);
  v30 = 0LL;
  v31 = *(_QWORD **)(ObjectA + 136);
  if ( *(_DWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v32 = *((_DWORD *)v31 - 2);
      if ( v32 + v14 < v14 )
      {
        v40 = -1073741675;
        WdLogSingleEntry2(3LL, this, -1073741675LL);
        goto LABEL_50;
      }
      if ( v32 + v14 > *(_DWORD *)(a2 + 64) )
        break;
      v33 = (const void *)*(v31 - 2);
      if ( v33 )
      {
        memmove(v29, v33, v32);
        v25 = (D3DDDI_ALLOCATIONINFO *)v79;
      }
      v34 = 3 * v30;
      v30 = (unsigned int)(v30 + 1);
      v34 *= 32LL;
      *(D3DKMT_HANDLE *)((char *)&v25->hAllocation + v34) = 0;
      *(const void **)((char *)&v25->pSystemMem + v34) = 0LL;
      v35 = *((_DWORD *)v31 - 11);
      *(UINT *)((char *)&v25->Flags.Value + v34) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v25->VidPnSourceId + v34) = (v35 >> 6) & 0xF;
      v36 = *((_DWORD *)v31 - 11);
      *(void **)((char *)&v25->pPrivateDriverData + v34) = v29;
      *(UINT *)((char *)&v25->Flags.Value + v34) = v36 & 1 | (((v36 | (v36 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v25->PrivateDriverDataSize + v34) = *((_DWORD *)v31 - 2);
      v37 = *((unsigned int *)v31 - 2);
      v31 = (_QWORD *)*v31;
      v14 += v37;
      v29 += v37;
      if ( (unsigned int)v30 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_27;
    }
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    goto LABEL_61;
  }
LABEL_27:
  v38 = 0;
  if ( v78 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
  v39 = DXGDEVICE::CreateAllocation(
          (struct _KTHREAD **)this,
          &v86,
          0,
          1,
          0LL,
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
  v40 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry1(3LL, v39);
    goto LABEL_35;
  }
  hResource = v86.hResource;
  if ( !v86.hResource )
  {
    WdLogSingleEntry1(1LL, 7982LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateAlloc.hResource != 0", 7982LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v86.hResource;
    v38 = 0;
  }
  v42 = *(unsigned int *)(a2 + 8);
  v43 = 0;
  v44 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v14;
  for ( *(_DWORD *)(a2 + 68) = hResource; v43 < (unsigned int)v42; v42 = *(unsigned int *)(a2 + 8) )
  {
    v45 = v43++;
    *v44 = *(&v86.pAllocationInfo->hAllocation + 24 * v45);
    v44 += 20;
    *((_QWORD *)v44 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v86.pAllocationInfo->pPrivateDriverData + 24 * v45)
                                        - *(_DWORD *)(a2 + 56));
    *(v44 - 16) = *(&v86.pAllocationInfo->PrivateDriverDataSize + 24 * v45);
  }
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v56 = 4 * v42;
    if ( !is_mul_ok(v42, 4uLL) )
      v56 = -1LL;
    v82 = operator new[](v56, 0x4B677844u, 256LL);
    v57 = (unsigned int *)v82;
    if ( !v82 )
    {
      v40 = -1073741801;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 8011LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pSharedResource->m_NtSecuritySharing || pSharedAllocObject",
        8011LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v58 = *((_QWORD *)this + 2);
    v59 = *(_DWORD *)(a2 + 64);
    v60 = *(_DWORD *)(a2 + 8);
    a7 = 0;
    v61 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v58 + 16) + 4472LL);
    v62 = *(_DWORD *)(ObjectA + 12) >> 3;
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
      v63 = MEMORY[0x28];
    else
      v63 = *(_DWORD *)(ObjectA + 28);
    v64 = Current;
    v40 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(v61, Current, this, v62 & 1, v63, v60, v59, &a7, v57);
    if ( v40 < 0 )
    {
LABEL_104:
      operator delete(v57);
      goto LABEL_35;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v87, v64);
    v65 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( v65 < *((_DWORD *)v64 + 74) )
    {
      v66 = *((_QWORD *)v64 + 35);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v66 + 16LL * v65 + 8) & 0x60)
        && (*(_DWORD *)(v66 + 16LL * v65 + 8) & 0x2000) == 0 )
      {
        v67 = *(_DWORD *)(v66 + 16LL * v65 + 8) & 0x1F;
        if ( v67 )
        {
          if ( v67 == 4 )
          {
            v68 = *(struct _EX_RUNDOWN_REF **)(v66 + 16LL * v65);
            goto LABEL_80;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v68 = 0LL;
LABEL_80:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v84, v68);
    if ( v84 )
    {
      HIDWORD(v84[2].Ptr) = a7;
      if ( *(_DWORD *)(a2 + 8) )
      {
        while ( 1 )
        {
          v69 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v38) >> 6) & 0xFFFFFF;
          if ( v69 < *((_DWORD *)v64 + 74)
            && (v70 = *((_QWORD *)v64 + 35),
                ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v38) >> 25) & 0x60) == (*(_BYTE *)(v70 + 16LL * v69 + 8) & 0x60))
            && (*(_DWORD *)(v70 + 16LL * v69 + 8) & 0x2000) == 0
            && (v71 = *(_DWORD *)(v70 + 16LL * v69 + 8) & 0x1F) != 0 )
          {
            if ( v71 == 5 )
            {
              v72 = *(struct _EX_RUNDOWN_REF **)(v70 + 16LL * v69);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              v72 = 0LL;
            }
          }
          else
          {
            v72 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, v72);
          v73 = v80;
          if ( !v80 )
            break;
          v74 = v57[v38];
          LOBYTE(v80[16].Count) |= 4u;
          v52 = bTracingEnabled == 0;
          HIDWORD(v73[2].Ptr) = v74;
          if ( !v52 )
          {
            Count = v73[5].Count;
            if ( Count )
            {
              v81 = *(_QWORD *)(Count + 48);
              a7 = *(_DWORD *)(Count + 16);
            }
            else
            {
              v81 = 0LL;
              a7 = 0;
            }
            v85 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            CurrentProcessId = PsGetCurrentProcessId();
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
              McTemplateK0ppppppppppppq_EtwWriteTransfer(
                v85,
                &EventCreateDeviceAllocation,
                v81,
                CurrentProcessId,
                this,
                v85,
                v73);
            v57 = (unsigned int *)v82;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
          v64 = Current;
          if ( ++v38 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_103;
        }
        WdLogSingleEntry1(3LL, 8039LL);
        v40 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 8028LL);
      v40 = -1073741811;
    }
LABEL_103:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v84);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
    goto LABEL_104;
  }
LABEL_35:
  operator delete(v79);
  return (unsigned int)v40;
}
