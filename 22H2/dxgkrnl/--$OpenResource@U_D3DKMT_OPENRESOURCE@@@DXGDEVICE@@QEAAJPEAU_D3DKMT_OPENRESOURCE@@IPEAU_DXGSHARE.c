/*
 * XREFs of ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0175EB4
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C016B460 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019E2B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C033EDE4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C033F51C (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C00029AC (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C0047ED4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C038BEAC (-VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2.c)
 */

__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
        struct DXGDEVICE *a1,
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
  struct DXGPROCESS *v15; // rsi
  char v16; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  D3DDDI_ALLOCATIONINFO *v22; // rax
  __int64 v23; // rcx
  D3DDDI_ALLOCATIONINFO *v24; // r8
  D3DKMT_HANDLE v25; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v26; // r9
  size_t v27; // rdx
  char *v28; // r15
  __int64 v29; // r12
  _QWORD *v30; // rbx
  unsigned int v31; // ecx
  const void *v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r12d
  int v38; // eax
  int v39; // ebx
  D3DKMT_HANDLE hResource; // eax
  unsigned __int64 v41; // rcx
  unsigned int v42; // r10d
  _DWORD *v43; // r9
  __int64 v44; // rax
  int v46; // eax
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // r8
  int v50; // edx
  bool v51; // zf
  __int64 v52; // rax
  const wchar_t *v53; // r9
  size_t v54; // r8
  unsigned __int64 v55; // rax
  unsigned int *v56; // r13
  __int64 v57; // rax
  unsigned int v58; // r8d
  unsigned int v59; // r9d
  DXG_GUEST_VIRTUALGPU_VMBUS *v60; // rcx
  int v61; // eax
  unsigned int v62; // edx
  struct DXGPROCESS *v63; // rsi
  unsigned int v64; // eax
  __int64 v65; // r9
  int v66; // ecx
  struct DXGRESOURCE *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // r9
  int v70; // ecx
  struct DXGALLOCATION *v71; // rdx
  __int64 v72; // rsi
  unsigned int v73; // eax
  __int64 v74; // r15
  HANDLE CurrentProcessId; // rax
  _BYTE v76[8]; // [rsp+80h] [rbp-80h] BYREF
  char v77; // [rsp+88h] [rbp-78h]
  void *v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *Current; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_CREATEALLOCATION v85; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v86[80]; // [rsp+120h] [rbp+20h] BYREF

  v78 = 0LL;
  v11 = a3;
  memset(&v85, 0, sizeof(v85));
  v13 = *((_QWORD *)a1 + 2);
  v14 = 0;
  a7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v13 + 16)) )
  {
    WdLogSingleEntry1(1LL, 7781LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7781LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v15 = Current;
  v16 = BYTE1(*((_DWORD *)Current + 106)) & 1;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v76);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
  if ( !(_DWORD)v11 )
  {
    v39 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v53 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    goto LABEL_106;
  }
  if ( !v16 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v11, 2);
    goto LABEL_6;
  }
  v46 = *((_DWORD *)v15 + 106);
  if ( (v46 & 0x100) != 0 )
    v47 = *((_QWORD *)v15 + 76);
  else
    v47 = (unsigned __int64)v15 & -(__int64)((v46 & 0x80u) != 0);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v47 + 248));
  v48 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v48 < *(_DWORD *)(v47 + 296) )
  {
    v49 = *(_QWORD *)(v47 + 280);
    if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x60)
      && (*(_DWORD *)(v49 + 16LL * v48 + 8) & 0x2000) == 0 )
    {
      v50 = *(_DWORD *)(v49 + 16LL * v48 + 8) & 0x1F;
      if ( v50 )
      {
        if ( v50 == 2 )
        {
          ObjectA = *(_QWORD *)(v49 + 16LL * v48);
          goto LABEL_46;
        }
        WdLogSingleEntry1(2LL, 316LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  ObjectA = 0LL;
LABEL_46:
  _InterlockedAdd((volatile signed __int32 *)(v47 + 264), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v47 + 248, 0LL);
  KeLeaveCriticalRegion();
  v14 = a7;
LABEL_6:
  if ( !ObjectA )
  {
    v39 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v11, -1073741811LL);
LABEL_50:
    v51 = v77 == 0;
    goto LABEL_107;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(ObjectA + 136) - 44LL) & 2) != 0 )
  {
    v52 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( v52 )
    {
      if ( !(*(unsigned int (**)(void))(v52 + 208))() )
      {
        v39 = -1073741790;
        WdLogSingleEntry1(4LL, -1073741790LL);
        goto LABEL_50;
      }
    }
  }
  v19 = *(unsigned int *)(ObjectA + 132);
  if ( (_DWORD)v19 != *(_DWORD *)(a2 + 8) )
  {
    v39 = -1073741811;
    WdLogSingleEntry4(2LL, a1, v19, *(unsigned int *)(a2 + 8), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64"
                "x, returning 0x%I64x",
      (__int64)a1,
      *(unsigned int *)(ObjectA + 132),
      *(unsigned int *)(a2 + 8),
      -1073741811LL,
      0LL);
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(ObjectA + 12) & 4) != 0 )
  {
    v39 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v53 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
LABEL_106:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v53, (__int64)a1, -1073741811LL, 0LL, 0LL, 0LL);
    v51 = v77 == 0;
LABEL_107:
    if ( !v51 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76);
    goto LABEL_35;
  }
  if ( !v16 )
  {
    v20 = *(unsigned int *)(ObjectA + 112);
    if ( *(_DWORD *)(a2 + 32) != (_DWORD)v20 )
    {
      v54 = *(unsigned int *)(a2 + 32);
LABEL_58:
      v39 = -1073741811;
      WdLogSingleEntry4(3LL, a1, v54, v20, -1073741811LL);
      goto LABEL_50;
    }
    if ( (_DWORD)v20 )
      memmove(*(void **)(a2 + 24), *(const void **)(ObjectA + 104), (unsigned int)v20);
  }
  v21 = 96LL * *(unsigned int *)(a2 + 8);
  if ( !is_mul_ok(*(unsigned int *)(a2 + 8), 0x60uLL) )
    v21 = -1LL;
  v22 = (D3DDDI_ALLOCATIONINFO *)operator new[](v21, 0x4B677844u, 256LL);
  v23 = *(unsigned int *)(a2 + 8);
  v24 = v22;
  v78 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry3(3LL, a1, v23, -1073741801LL);
LABEL_61:
    v39 = -1073741801;
    goto LABEL_50;
  }
  v25 = *(_DWORD *)a2;
  v26 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 40);
  v27 = *(unsigned int *)(a2 + 48);
  v85.NumAllocations = v23;
  v85.hDevice = v25;
  v85.pStandardAllocation = v26;
  v85.PrivateDriverDataSize = v27;
  v85.hGlobalShare = v11;
  v85.pAllocationInfo = v24;
  v85.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v85.Flags & 0xFFEFFF3F | (32
                                                                                 * (*(_DWORD *)(ObjectA + 12) & 0x8000)) | 1);
  if ( !v16 )
  {
    v20 = *(unsigned int *)(ObjectA + 128);
    if ( (_DWORD)v27 != (_DWORD)v20 )
    {
      v54 = v27;
      goto LABEL_58;
    }
  }
  if ( (_DWORD)v27 )
  {
    memmove(v26, *(const void **)(ObjectA + 120), v27);
    v24 = (D3DDDI_ALLOCATIONINFO *)v78;
  }
  v28 = *(char **)(a2 + 56);
  v29 = 0LL;
  v30 = *(_QWORD **)(ObjectA + 136);
  if ( *(_DWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v31 = *((_DWORD *)v30 - 2);
      if ( v31 + v14 < v14 )
      {
        v39 = -1073741675;
        WdLogSingleEntry2(3LL, a1, -1073741675LL);
        goto LABEL_50;
      }
      if ( v31 + v14 > *(_DWORD *)(a2 + 64) )
        break;
      v32 = (const void *)*(v30 - 2);
      if ( v32 )
      {
        memmove(v28, v32, v31);
        v24 = (D3DDDI_ALLOCATIONINFO *)v78;
      }
      v33 = 3 * v29;
      v29 = (unsigned int)(v29 + 1);
      v33 *= 32LL;
      *(D3DKMT_HANDLE *)((char *)&v24->hAllocation + v33) = 0;
      *(const void **)((char *)&v24->pSystemMem + v33) = 0LL;
      v34 = *((_DWORD *)v30 - 11);
      *(UINT *)((char *)&v24->Flags.Value + v33) = 0;
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v24->VidPnSourceId + v33) = (v34 >> 6) & 0xF;
      v35 = *((_DWORD *)v30 - 11);
      *(void **)((char *)&v24->pPrivateDriverData + v33) = v28;
      *(UINT *)((char *)&v24->Flags.Value + v33) = v35 & 1 | (((v35 | (v35 >> 12)) & 2) != 0);
      *(UINT *)((char *)&v24->PrivateDriverDataSize + v33) = *((_DWORD *)v30 - 2);
      v36 = *((unsigned int *)v30 - 2);
      v30 = (_QWORD *)*v30;
      v14 += v36;
      v28 += v36;
      if ( (unsigned int)v29 >= *(_DWORD *)(a2 + 8) )
        goto LABEL_27;
    }
    WdLogSingleEntry2(3LL, a1, -1073741801LL);
    goto LABEL_61;
  }
LABEL_27:
  v37 = 0;
  if ( v77 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76);
  v38 = DXGDEVICE::CreateAllocation(a1, &v85, 0, 1u, 0LL, 0LL, a6, a5, a8, a9, a10, 0LL, 0LL, 0LL, 0);
  v39 = v38;
  if ( v38 < 0 )
  {
    WdLogSingleEntry1(3LL, v38);
    goto LABEL_35;
  }
  hResource = v85.hResource;
  if ( !v85.hResource )
  {
    WdLogSingleEntry1(1LL, 7998LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateAlloc.hResource != 0", 7998LL, 0LL, 0LL, 0LL, 0LL);
    hResource = v85.hResource;
    v37 = 0;
  }
  v41 = *(unsigned int *)(a2 + 8);
  v42 = 0;
  v43 = *(_DWORD **)(a2 + 16);
  *(_DWORD *)(a2 + 64) = v14;
  for ( *(_DWORD *)(a2 + 68) = hResource; v42 < (unsigned int)v41; v41 = *(unsigned int *)(a2 + 8) )
  {
    v44 = v42++;
    *v43 = *(&v85.pAllocationInfo->hAllocation + 24 * v44);
    v43 += 20;
    *((_QWORD *)v43 - 9) = *(_QWORD *)(a2 + 56)
                         + (unsigned int)(*((_DWORD *)&v85.pAllocationInfo->pPrivateDriverData + 24 * v44)
                                        - *(_DWORD *)(a2 + 56));
    *(v43 - 16) = *(&v85.pAllocationInfo->PrivateDriverDataSize + 24 * v44);
  }
  if ( (*((_BYTE *)a1 + 1901) & 1) != 0 )
  {
    v55 = 4 * v41;
    if ( !is_mul_ok(v41, 4uLL) )
      v55 = -1LL;
    v81 = operator new[](v55, 0x4B677844u, 256LL);
    v56 = (unsigned int *)v81;
    if ( !v81 )
    {
      v39 = -1073741801;
      goto LABEL_35;
    }
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, 8027LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pSharedResource->m_NtSecuritySharing || pSharedAllocObject",
        8027LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v57 = *((_QWORD *)a1 + 2);
    v58 = *(_DWORD *)(a2 + 64);
    v59 = *(_DWORD *)(a2 + 8);
    a7 = 0;
    v60 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v57 + 16) + 4472LL);
    v61 = *(_DWORD *)(ObjectA + 12) >> 3;
    if ( (*(_DWORD *)(ObjectA + 12) & 8) != 0 )
      v62 = MEMORY[0x28];
    else
      v62 = *(_DWORD *)(ObjectA + 28);
    v63 = Current;
    v39 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(v60, Current, a1, v61 & 1, v62, v59, v58, &a7, v56);
    if ( v39 < 0 )
    {
LABEL_104:
      operator delete(v56);
      goto LABEL_35;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v86, v63);
    v64 = (*(_DWORD *)(a2 + 68) >> 6) & 0xFFFFFF;
    if ( v64 < *((_DWORD *)v63 + 74) )
    {
      v65 = *((_QWORD *)v63 + 35);
      if ( ((*(_DWORD *)(a2 + 68) >> 25) & 0x60) == (*(_BYTE *)(v65 + 16LL * v64 + 8) & 0x60)
        && (*(_DWORD *)(v65 + 16LL * v64 + 8) & 0x2000) == 0 )
      {
        v66 = *(_DWORD *)(v65 + 16LL * v64 + 8) & 0x1F;
        if ( v66 )
        {
          if ( v66 == 4 )
          {
            v67 = *(struct DXGRESOURCE **)(v65 + 16LL * v64);
            goto LABEL_80;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v67 = 0LL;
LABEL_80:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v83, v67);
    if ( v83 )
    {
      *(_DWORD *)(v83 + 20) = a7;
      if ( *(_DWORD *)(a2 + 8) )
      {
        while ( 1 )
        {
          v68 = (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v37) >> 6) & 0xFFFFFF;
          if ( v68 < *((_DWORD *)v63 + 74)
            && (v69 = *((_QWORD *)v63 + 35),
                ((*(_DWORD *)(*(_QWORD *)(a2 + 16) + 80LL * v37) >> 25) & 0x60) == (*(_BYTE *)(v69 + 16LL * v68 + 8) & 0x60))
            && (*(_DWORD *)(v69 + 16LL * v68 + 8) & 0x2000) == 0
            && (v70 = *(_DWORD *)(v69 + 16LL * v68 + 8) & 0x1F) != 0 )
          {
            if ( v70 == 5 )
            {
              v71 = *(struct DXGALLOCATION **)(v69 + 16LL * v68);
            }
            else
            {
              WdLogSingleEntry1(2LL, 316LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
              v71 = 0LL;
            }
          }
          else
          {
            v71 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v71);
          v72 = v79;
          if ( !v79 )
            break;
          v73 = v56[v37];
          *(_BYTE *)(v79 + 128) |= 4u;
          v51 = bTracingEnabled == 0;
          *(_DWORD *)(v72 + 20) = v73;
          if ( !v51 )
          {
            v74 = *(_QWORD *)(v72 + 40);
            if ( v74 )
            {
              v80 = *(_QWORD *)(v74 + 48);
              a7 = *(_DWORD *)(v74 + 16);
            }
            else
            {
              v80 = 0LL;
              a7 = 0;
            }
            v84 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
            CurrentProcessId = PsGetCurrentProcessId();
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
              McTemplateK0ppppppppppppq_EtwWriteTransfer(
                v84,
                &EventCreateDeviceAllocation,
                v80,
                CurrentProcessId,
                a1,
                v84,
                v72);
            v56 = (unsigned int *)v81;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
          v63 = Current;
          if ( ++v37 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_103;
        }
        WdLogSingleEntry1(3LL, 8055LL);
        v39 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 8044LL);
      v39 = -1073741811;
    }
LABEL_103:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v83);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
    goto LABEL_104;
  }
LABEL_35:
  operator delete(v78);
  return (unsigned int)v39;
}
