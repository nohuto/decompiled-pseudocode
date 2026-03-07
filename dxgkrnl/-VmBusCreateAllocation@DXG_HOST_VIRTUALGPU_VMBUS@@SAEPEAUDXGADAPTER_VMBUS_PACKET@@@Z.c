char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _DWORD *v21; // r12
  unsigned int v22; // r13d
  UINT v23; // ecx
  unsigned int v24; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v25; // ecx
  char *pAllocationInfo; // r8
  void *v27; // rax
  UINT v28; // r9d
  unsigned int v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  UINT v32; // ecx
  int v33; // eax
  char Flags; // al
  unsigned int v35; // r13d
  DXGPUSHLOCK *v36; // rdx
  unsigned int v37; // ebx
  unsigned int v38; // eax
  __int64 v39; // r8
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  volatile signed __int32 *v42; // rax
  struct _EX_RUNDOWN_REF *v43; // r8
  __int64 v44; // rdi
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  int v48; // ecx
  int v49; // edx
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // edx
  int v54; // ecx
  int v55; // edx
  int v56; // ecx
  D3DDDI_ALLOCATIONINFO *v57; // rdx
  __int64 v58; // rcx
  char *v59; // rbx
  __int64 v60; // r8
  char v61; // cl
  struct DXGDEVICE *Count; // rbx
  __int64 v63; // r9
  __int64 v64; // rdi
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rbx
  struct _EX_RUNDOWN_REF *v69; // [rsp+58h] [rbp-B0h] BYREF
  void *v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+68h] [rbp-A0h]
  __int64 v72; // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h]
  void *v74; // [rsp+80h] [rbp-88h]
  struct DXGPROCESS *v75; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h] BYREF
  __int64 v77; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v78; // [rsp+A0h] [rbp-68h]
  void *v79; // [rsp+A8h] [rbp-60h]
  struct _D3DKMT_CREATEALLOCATION v80; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v81; // [rsp+108h] [rbp+0h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  __int64 v83; // [rsp+118h] [rbp+10h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v84; // [rsp+120h] [rbp+18h]
  _BYTE v85[16]; // [rsp+128h] [rbp+20h] BYREF
  char v86[8]; // [rsp+138h] [rbp+30h] BYREF
  char v87[64]; // [rsp+140h] [rbp+38h] BYREF
  char v88[88]; // [rsp+180h] [rbp+78h] BYREF

  v84 = a1;
  v2 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  if ( v4 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    v6 = *(unsigned int *)(v4 + 40);
    v75 = Current;
    v82 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
    LODWORD(v71) = *((_DWORD *)a1 + 38);
    if ( !(_DWORD)v6 )
    {
      v7 = 1289LL;
      WdLogSingleEntry1(2LL, 1289LL);
      goto LABEL_82;
    }
    if ( (*(_DWORD *)(v4 + 44) & 0x1000) != 0 )
    {
      v7 = 1295LL;
      WdLogSingleEntry1(2LL, 1295LL);
      v8 = L"OpenCrossAdapter is not supported";
      goto LABEL_83;
    }
    v9 = 12 * v6;
    if ( 12 * v6 > 0xFFFFFFFF )
    {
      v7 = 1302LL;
      WdLogSingleEntry1(2LL, 1302LL);
    }
    else
    {
      v10 = *((unsigned int *)a1 + 36);
      if ( v10 - 64 < (unsigned __int64)v9 )
      {
        v7 = 1308LL;
        WdLogSingleEntry1(2LL, 1308LL);
        goto LABEL_82;
      }
      v11 = v9 + 64;
      v12 = *(_DWORD *)(v4 + 32);
      LODWORD(v72) = v11;
      if ( (unsigned int)v10 - v11 < v12 )
      {
        v7 = 1314LL;
        WdLogSingleEntry1(2LL, 1314LL);
        goto LABEL_82;
      }
      v13 = v12 + v11;
      v14 = *(_DWORD *)(v4 + 36);
      LODWORD(v70) = v13;
      if ( (unsigned int)v10 - v13 < v14 )
      {
        v7 = 1320LL;
        WdLogSingleEntry1(2LL, 1320LL);
        goto LABEL_82;
      }
      v15 = v14 + v13;
      v16 = 0;
      v17 = v15;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v4 + 12LL * v16 + 68);
        if ( (unsigned int)v10 - v17 < v18 )
          break;
        v17 += v18;
        if ( ++v16 >= (unsigned int)v6 )
        {
          v19 = 96 * v6;
          if ( !is_mul_ok(v6, 0x60uLL) )
            v19 = -1LL;
          v79 = (void *)operator new[](v19, 0x4B677844u, 256LL);
          if ( !v79 )
          {
            v7 = 1342LL;
            WdLogSingleEntry1(2LL, 1342LL);
            v8 = L"Failed to allocate pAllocationInfo";
            goto LABEL_83;
          }
          v20 = 8LL * *(unsigned int *)(v4 + 40);
          v21 = 0LL;
          if ( !is_mul_ok(*(unsigned int *)(v4 + 40), 8uLL) )
            v20 = -1LL;
          v74 = (void *)operator new[](v20, 0x4B677844u, 256LL);
          if ( !v74 )
          {
            WdLogSingleEntry1(6LL, 1350LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate pAllocationSizes",
              1350LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_80;
          }
          LODWORD(v69) = 72 * *(_DWORD *)(v4 + 40) + 16;
          v22 = v17 + (_DWORD)v69 - v15;
          LODWORD(v73) = v22;
          v21 = (_DWORD *)operator new[](v22, 0x4B677844u, 64LL);
          if ( !v21 )
          {
            WdLogSingleEntry1(2LL, 1360LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to allocate pOutput",
              1360LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_80;
          }
          memset(&v80, 0, sizeof(v80));
          v23 = *(_DWORD *)(v4 + 32);
          v80.hDevice = *(_DWORD *)(v4 + 24);
          v80.hResource = *(_DWORD *)(v4 + 28);
          if ( v23 )
          {
            v80.PrivateRuntimeDataSize = v23;
            v80.pPrivateRuntimeData = (const void *)(v4 + (unsigned int)v72);
          }
          v24 = *(_DWORD *)(v4 + 36);
          if ( v24 )
          {
            v80.PrivateDriverDataSize = *(_DWORD *)(v4 + 36);
            v80.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v4 + (unsigned int)v70);
          }
          v25 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v4 + 44);
          pAllocationInfo = (char *)v79;
          v27 = *(void **)(v4 + 48);
          v28 = *(_DWORD *)(v4 + 40);
          v80.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v79;
          v80.hPrivateRuntimeResourceHandle = v27;
          v80.NumAllocations = v28;
          v80.Flags = v25;
          if ( (*(_DWORD *)&v25 & 0x10000) != 0 )
          {
            if ( v24 < 0x18 )
            {
              WdLogSingleEntry1(2LL, 1387LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Standard allocation does not have valid data",
                1387LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_80;
            }
            v80.PrivateDriverDataSize = 0;
          }
          v29 = 0;
          if ( v28 )
          {
            while ( 1 )
            {
              v30 = 96LL * v29;
              v31 = *(_DWORD *)(v4 + 44);
              v32 = *(_DWORD *)(v4 + 12LL * v29 + 68);
              LODWORD(v70) = v32;
              if ( (v31 & 0x20) != 0 )
              {
                *(_QWORD *)&pAllocationInfo[v30 + 8] = 4096LL;
                pAllocationInfo = (char *)v80.pAllocationInfo;
              }
              *(_DWORD *)&pAllocationInfo[v30 + 32] = *(_DWORD *)(v4 + 12LL * v29 + 64);
              *(UINT *)((char *)&v80.pAllocationInfo->PrivateDriverDataSize + v30) = v32;
              if ( v32 )
                *(void **)((char *)&v80.pAllocationInfo->pPrivateDriverData + v30) = (void *)(v4 + v15);
              if ( (unsigned int)v71 >= 0x1E && (*(_BYTE *)(v4 + 56) & 2) != 0 )
              {
                if ( (*(UINT *)((_BYTE *)&v80.pAllocationInfo->Flags.Value + v30) & 1) == 0 || *(_DWORD *)(v4 + 40) != 1 )
                {
                  WdLogSingleEntry1(2LL, 1413LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"bVidPnSourceIsActuallyHostVidPnTarget must be used only with swapchain buffer",
                    1413LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_80;
                }
                if ( (int)DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
                            *(unsigned int *)(v4 + 24),
                            *(_DWORD *)(v4 + 12LL * v29 + 72),
                            (unsigned int *)((char *)&v80.pAllocationInfo->VidPnSourceId + v30)) < 0 )
                {
                  WdLogSingleEntry1(2LL, 1422LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Fail to locate VidPnSourceId",
                    1422LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_80;
                }
              }
              else
              {
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v80.pAllocationInfo->VidPnSourceId + v30) = *(_DWORD *)(v4 + 12LL * v29 + 72);
              }
              v15 += (unsigned int)v70;
              if ( ++v29 >= *(_DWORD *)(v4 + 40) )
                break;
              pAllocationInfo = (char *)v80.pAllocationInfo;
            }
          }
          v33 = DxgkCreateAllocationInternal(&v80, (struct DXGALLOCATION **)v74, (__int64)pAllocationInfo);
          if ( v33 < 0 )
          {
            v67 = v33;
            WdLogSingleEntry2(2LL, v33, 1540LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create allocation: 0x%I64x",
              v67,
              1540LL,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            Flags = (char)v80.Flags;
            *v21 = v80.Flags;
            if ( (Flags & 0x40) != 0 )
            {
              if ( v80.hGlobalShare )
              {
                WdLogSingleEntry1(1LL, 1440LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL == Args.hGlobalShare",
                  1440LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v21[2] = v80.hGlobalShare;
            }
            v21[1] = v80.hResource;
            v70 = (char *)v21 + (unsigned int)v69;
            if ( *(_DWORD *)(v4 + 40) )
            {
              v35 = 0;
              v36 = (struct DXGPROCESS *)((char *)v75 + 248);
              v78 = (volatile signed __int32 *)((char *)v75 + 248);
              while ( 1 )
              {
                v81 = 96LL * v35;
                v37 = *(D3DKMT_HANDLE *)((char *)&v80.pAllocationInfo->hAllocation + v81);
                DXGPUSHLOCK::AcquireShared(v36);
                v38 = (v37 >> 6) & 0xFFFFFF;
                if ( v38 < *((_DWORD *)v75 + 74) )
                {
                  v39 = *((_QWORD *)v75 + 35);
                  if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x60)
                    && (*(_DWORD *)(v39 + 16LL * v38 + 8) & 0x2000) == 0 )
                  {
                    v40 = *(_DWORD *)(v39 + 16LL * v38 + 8) & 0x1F;
                    if ( v40 )
                    {
                      if ( v40 == 5 )
                      {
                        v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v38);
                        goto LABEL_64;
                      }
                      WdLogSingleEntry1(2LL, 267LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Handle type mismatch",
                        267LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                }
                v41 = 0LL;
LABEL_64:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v41);
                v42 = v78;
                _InterlockedAdd(v78 + 4, 0xFFFFFFFF);
                ExReleasePushLockSharedEx(v42, 0LL);
                KeLeaveCriticalRegion();
                v43 = v69;
                v44 = 9LL * v35;
                v45 = v21[18 * v35 + 6] ^ ((unsigned __int8)v21[18 * v35 + 6] ^ (unsigned __int8)*(_DWORD *)(v69[6].Count + 4)) & 1;
                v21[2 * v44 + 6] = v45;
                v46 = v45 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v45) & 2;
                v21[2 * v44 + 6] = v46;
                v47 = v46 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v46) & 4;
                v21[2 * v44 + 6] = v47;
                v48 = v47 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v47) & 8;
                v21[2 * v44 + 6] = v48;
                v49 = v48 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v48) & 0x20;
                v21[2 * v44 + 6] = v49;
                v50 = v49 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v49) & 0x800;
                v21[2 * v44 + 6] = v50;
                v51 = v50 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v50) & 0x1000;
                v21[2 * v44 + 6] = v51;
                v52 = v51 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v51) & 0x2000;
                v21[2 * v44 + 6] = v52;
                v53 = v52 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v52) & 0x4000;
                v21[2 * v44 + 6] = v53;
                v54 = v53 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v53) & 0x40000;
                v21[2 * v44 + 6] = v54;
                v55 = v54 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v54) & 0x80000;
                v21[2 * v44 + 6] = v55;
                v56 = v55 ^ (*(_DWORD *)(v43[6].Count + 4) ^ v55) & 0x100000;
                v57 = v80.pAllocationInfo;
                v21[2 * v44 + 6] = v56;
                v58 = v81;
                v21[2 * v44 + 4] = *(D3DKMT_HANDLE *)((char *)&v57->hAllocation + v81);
                v21[2 * v44 + 5] = *(_DWORD *)(v4 + 12LL * v35 + 68);
                *(_QWORD *)&v21[2 * v44 + 8] = *((_QWORD *)v74 + v35);
                memmove(
                  v70,
                  *(const void **)((char *)&v57->pPrivateDriverData + v58),
                  *(unsigned int *)(v4 + 12LL * v35 + 68));
                v59 = (char *)&v21[18 * v35];
                v70 = (char *)v70 + *(unsigned int *)(v4 + 12LL * v35 + 68);
                *((_QWORD *)v59 + 5) = *(_QWORD *)(v69[6].Count + 16);
                ADAPTER_RENDER::DdiDescribeAllocation(
                  *(ADAPTER_RENDER **)(v82 + 2928),
                  (struct _DXGKARG_DESCRIBEALLOCATION *)(v59 + 40),
                  v60);
                *((_QWORD *)v59 + 5) = 0LL;
                v61 = *(_BYTE *)(v4 + 56) & 1;
                if ( (unsigned int)v71 < 0x1E )
                  v61 = *(_BYTE *)(v4 + 56);
                if ( v61 )
                {
                  Count = (struct DXGDEVICE *)v69[1].Count;
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85,
                    Count);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)Count, 0, v63, 0);
                  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v86, 0LL) >= 0
                    && DXGDEVICE::UmdManagesResidency(Count) )
                  {
                    v64 = *((_QWORD *)Count + 2);
                    v72 = 0LL;
                    v77 = 0LL;
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v64 + 760)
                                                                                             + 8LL)
                                                                                 + 976LL))(
                      *((_QWORD *)Count + 99),
                      0LL,
                      &v72,
                      &v77);
                    v76 = 0LL;
                    v83 = 0LL;
                    v65 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v64 + 760) + 8LL) + 768LL))(
                            *(_QWORD *)(v64 + 768),
                            v72,
                            v69 + 3,
                            1LL,
                            3,
                            &v76,
                            &v83);
                    if ( v65 >= 0 )
                    {
                      if ( v65 == 259 )
                        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v64 + 760)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
                          *(_QWORD *)(v64 + 768),
                          &v77,
                          &v76,
                          1LL);
                    }
                    else
                    {
                      v66 = v65;
                      WdLogSingleEntry1(2LL, v65);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                        v66,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  COREACCESS::~COREACCESS((COREACCESS *)v88);
                  COREACCESS::~COREACCESS((COREACCESS *)v87);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v85);
                }
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v69);
                v36 = (DXGPUSHLOCK *)v78;
                if ( ++v35 >= *(_DWORD *)(v4 + 40) )
                {
                  v22 = v73;
                  break;
                }
              }
            }
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v84 + 16), v21, v22);
            v2 = 1;
          }
LABEL_80:
          operator delete(v79);
          operator delete(v74);
          operator delete(v21);
          return v2;
        }
      }
      v7 = 1331LL;
      WdLogSingleEntry1(2LL, 1331LL);
    }
LABEL_82:
    v8 = L"Invalid packet size";
LABEL_83:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
