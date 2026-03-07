__int64 __fastcall DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        struct DXGDEVICE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        struct COREDEVICEACCESS *a6,
        char a7,
        struct _EPROCESS *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v10; // r12d
  D3DDDI_ALLOCATIONINFO *v14; // r15
  __int64 v15; // rcx
  char v16; // bl
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  D3DDDI_ALLOCATIONINFO *v22; // r8
  D3DKMT_HANDLE v23; // eax
  D3DKMT_CREATESTANDARDALLOCATION *v24; // r9
  size_t v25; // rdx
  __int64 v26; // rax
  char *v27; // r15
  _QWORD *v28; // rbx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  const void *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  int v36; // ebx
  D3DKMT_HANDLE hResource; // eax
  __int64 v38; // r10
  _DWORD *v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  const wchar_t *v44; // r9
  bool v45; // zf
  unsigned __int64 v46; // rax
  unsigned int *v47; // r12
  __int64 v48; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v49; // rcx
  int v50; // eax
  unsigned int v51; // edx
  struct DXGPROCESS *v52; // r14
  unsigned int v53; // eax
  __int64 v54; // r9
  int v55; // ecx
  struct DXGRESOURCE *v56; // rdx
  unsigned int v57; // r12d
  unsigned int v58; // eax
  __int64 v59; // r9
  int v60; // ecx
  struct DXGALLOCATION *v61; // rdx
  __int64 v62; // r14
  unsigned int v63; // eax
  __int64 v64; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v66; // [rsp+28h] [rbp-D8h]
  __int64 v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+38h] [rbp-C8h]
  D3DDDI_ALLOCATIONINFO *v69; // [rsp+80h] [rbp-80h]
  char v70[8]; // [rsp+88h] [rbp-78h] BYREF
  char v71; // [rsp+90h] [rbp-70h]
  unsigned int *v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *Current; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  struct _D3DKMT_CREATEALLOCATION v78; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v79[80]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v80; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v81; // [rsp+198h] [rbp+98h]

  v80 = a3;
  v10 = 0;
  v14 = 0LL;
  memset(&v78, 0, sizeof(v78));
  v15 = *((_QWORD *)a1 + 2);
  v80 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v15 + 16)) )
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
  Current = DXGPROCESS::GetCurrent();
  v16 = BYTE1(*((_DWORD *)Current + 106)) & 1;
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v70, (struct DXGGLOBAL *)((char *)Global + 288), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v70);
  if ( a4 )
  {
    v18 = *(_QWORD *)(a4 + 16);
    if ( !v18 )
    {
      v36 = -1073741811;
      WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 136) - 44LL) & 2) != 0 )
    {
      v43 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      if ( v43 )
      {
        if ( !(*(unsigned int (**)(void))(v43 + 208))() )
        {
          v36 = -1073741790;
          WdLogSingleEntry1(4LL, -1073741790LL);
          goto LABEL_38;
        }
      }
    }
    v19 = *(unsigned int *)(v18 + 132);
    if ( (_DWORD)v19 == *(_DWORD *)(a2 + 16) )
    {
      if ( (*(_DWORD *)(v18 + 12) & 4) == 0 )
      {
        if ( !v16 )
        {
          v20 = *(unsigned int *)(v18 + 112);
          if ( *(_DWORD *)(a2 + 32) != (_DWORD)v20 )
          {
            v36 = -1073741811;
            WdLogSingleEntry4(3LL, a1, *(unsigned int *)(a2 + 32), v20, -1073741811LL);
            goto LABEL_38;
          }
          if ( (_DWORD)v20 )
            memmove(*(void **)(a2 + 40), *(const void **)(v18 + 104), (unsigned int)v20);
        }
        v21 = 96LL * *(unsigned int *)(a2 + 16);
        if ( !is_mul_ok(*(unsigned int *)(a2 + 16), 0x60uLL) )
          v21 = -1LL;
        v22 = (D3DDDI_ALLOCATIONINFO *)operator new[](v21, 0x4B677844u, 256LL);
        v69 = v22;
        if ( v22 )
        {
          v23 = *(_DWORD *)a2;
          v24 = *(D3DKMT_CREATESTANDARDALLOCATION **)(a2 + 56);
          v25 = *(unsigned int *)(a2 + 48);
          v78.NumAllocations = *(_DWORD *)(a2 + 16);
          v78.hDevice = v23;
          v78.pStandardAllocation = v24;
          v78.PrivateDriverDataSize = v25;
          v78.hGlobalShare = 0;
          v78.pAllocationInfo = v22;
          v78.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v78.Flags & 0xFFEFFF7F | (32
                                                                                         * (*(_DWORD *)(v18 + 12) & 0x8000 | (4 * (a7 & 1)))) | 0x41);
          if ( v16 || (v26 = *(unsigned int *)(v18 + 128), (_DWORD)v25 == (_DWORD)v26) )
          {
            if ( (_DWORD)v25 )
            {
              memmove(v24, *(const void **)(v18 + 120), v25);
              v22 = v69;
            }
            v27 = *(char **)(a2 + 72);
            v28 = *(_QWORD **)(v18 + 136);
            if ( *(_DWORD *)(a2 + 16) )
            {
              v29 = 0;
              while ( 1 )
              {
                v30 = *((_DWORD *)v28 - 2);
                if ( v30 + v29 < v29 )
                  break;
                if ( v30 + v29 > *(_DWORD *)(a2 + 64) )
                {
                  WdLogSingleEntry2(3LL, a1, -1073741801LL);
                  v36 = -1073741801;
                  goto LABEL_51;
                }
                v31 = (const void *)*(v28 - 2);
                if ( v31 )
                {
                  memmove(v27, v31, v30);
                  v22 = v69;
                }
                v32 = v10++;
                v33 = 96 * v32;
                *(D3DKMT_HANDLE *)((char *)&v22->hAllocation + v33) = 0;
                *(const void **)((char *)&v22->pSystemMem + v33) = 0LL;
                LODWORD(v32) = *((_DWORD *)v28 - 11);
                *(UINT *)((char *)&v22->Flags.Value + v33) = 0;
                *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v22->VidPnSourceId + v33) = ((unsigned int)v32 >> 6) & 0xF;
                LODWORD(v32) = *((_DWORD *)v28 - 11);
                *(void **)((char *)&v22->pPrivateDriverData + v33) = v27;
                *(UINT *)((char *)&v22->Flags.Value + v33) = v32 & 1 | ((((unsigned int)v32 | ((unsigned int)v32 >> 12)) & 2) != 0);
                *(UINT *)((char *)&v22->PrivateDriverDataSize + v33) = *((_DWORD *)v28 - 2);
                v34 = *((unsigned int *)v28 - 2);
                v27 += v34;
                v28 = (_QWORD *)*v28;
                v29 = v34 + v80;
                v80 += v34;
                if ( v10 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_26;
              }
              v36 = -1073741675;
              WdLogSingleEntry2(3LL, a1, -1073741675LL);
LABEL_51:
              v45 = v71 == 0;
LABEL_52:
              if ( !v45 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
              goto LABEL_34;
            }
LABEL_26:
            if ( v71 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
            v35 = DXGDEVICE::CreateAllocation(
                    a1,
                    &v78,
                    0,
                    1u,
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
            v36 = v35;
            if ( v35 < 0 )
            {
              WdLogSingleEntry1(3LL, v35);
              goto LABEL_34;
            }
            hResource = v78.hResource;
            if ( !v78.hResource )
            {
              WdLogSingleEntry1(1LL, 7982LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"KMCreateAlloc.hResource != 0",
                7982LL,
                0LL,
                0LL,
                0LL,
                0LL);
              hResource = v78.hResource;
            }
            v38 = 0LL;
            v39 = *(_DWORD **)(a2 + 24);
            *(_DWORD *)(a2 + 64) = v80;
            v40 = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(a2 + 80) = hResource;
            if ( (_DWORD)v40 )
            {
              do
              {
                v41 = 96 * v38;
                v38 = (unsigned int)(v38 + 1);
                *v39 = *(D3DKMT_HANDLE *)((char *)&v78.pAllocationInfo->hAllocation + v41);
                v39 += 20;
                *((_QWORD *)v39 - 9) = *(_QWORD *)(a2 + 72)
                                     + (unsigned int)(*(_DWORD *)((char *)&v78.pAllocationInfo->pPrivateDriverData + v41)
                                                    - *(_DWORD *)(a2 + 72));
                *(v39 - 16) = *(UINT *)((char *)&v78.pAllocationInfo->PrivateDriverDataSize + v41);
                v40 = *(unsigned int *)(a2 + 16);
              }
              while ( (unsigned int)v38 < (unsigned int)v40 );
            }
            if ( (*((_BYTE *)a1 + 1901) & 1) == 0 )
            {
LABEL_34:
              v14 = v69;
              goto LABEL_35;
            }
            v46 = 4 * v40;
            if ( !is_mul_ok(v40, 4uLL) )
              v46 = -1LL;
            v72 = (unsigned int *)operator new[](v46, 0x4B677844u, 256LL);
            v47 = v72;
            if ( !v72 )
            {
              v36 = -1073741801;
              goto LABEL_34;
            }
            v48 = *((_QWORD *)a1 + 2);
            v80 = 0;
            v49 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v48 + 16) + 4472LL);
            v50 = *(_DWORD *)(v18 + 12) >> 3;
            if ( (*(_DWORD *)(v18 + 12) & 8) != 0 )
              v51 = *(_DWORD *)(a4 + 40);
            else
              v51 = *(_DWORD *)(v18 + 28);
            v52 = Current;
            v36 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
                    v49,
                    Current,
                    a1,
                    v50 & 1,
                    v51,
                    *(_DWORD *)(a2 + 16),
                    *(_DWORD *)(a2 + 64),
                    &v80,
                    v72);
            if ( v36 < 0 )
              goto LABEL_95;
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79, v52);
            v53 = (*(_DWORD *)(a2 + 80) >> 6) & 0xFFFFFF;
            if ( v53 < *((_DWORD *)v52 + 74) )
            {
              v54 = *((_QWORD *)v52 + 35);
              if ( ((*(_DWORD *)(a2 + 80) >> 25) & 0x60) == (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0x60)
                && (*(_DWORD *)(v54 + 16LL * v53 + 8) & 0x2000) == 0 )
              {
                v55 = *(_DWORD *)(v54 + 16LL * v53 + 8) & 0x1F;
                if ( v55 )
                {
                  if ( v55 == 4 )
                  {
                    v56 = *(struct DXGRESOURCE **)(v54 + 16LL * v53);
                    goto LABEL_71;
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
            v56 = 0LL;
LABEL_71:
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76, v56);
            if ( !v76 )
            {
              WdLogSingleEntry1(3LL, 8028LL);
              v36 = -1073741811;
              goto LABEL_94;
            }
            v57 = 0;
            *(_DWORD *)(v76 + 20) = v80;
            if ( !*(_DWORD *)(a2 + 16) )
              goto LABEL_93;
            while ( 1 )
            {
              v58 = (*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v57) >> 6) & 0xFFFFFF;
              if ( v58 >= *((_DWORD *)v52 + 74) )
                goto LABEL_81;
              v59 = *((_QWORD *)v52 + 35);
              if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 24) + 80LL * v57) >> 25) & 0x60) != (*(_BYTE *)(v59 + 16LL * v58 + 8) & 0x60) )
                goto LABEL_81;
              if ( (*(_DWORD *)(v59 + 16LL * v58 + 8) & 0x2000) != 0 )
                goto LABEL_81;
              v60 = *(_DWORD *)(v59 + 16LL * v58 + 8) & 0x1F;
              if ( !v60 )
                goto LABEL_81;
              if ( v60 != 5 )
                break;
              v61 = *(struct DXGALLOCATION **)(v59 + 16LL * v58);
LABEL_82:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, v61);
              v62 = v73;
              if ( !v73 )
              {
                WdLogSingleEntry1(3LL, 8039LL);
                v36 = -1073741811;
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
LABEL_93:
                v47 = v72;
LABEL_94:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
LABEL_95:
                operator delete(v47);
                goto LABEL_34;
              }
              v63 = v72[v57];
              *(_BYTE *)(v73 + 128) |= 4u;
              v45 = bTracingEnabled == 0;
              v81 = v63;
              *(_DWORD *)(v62 + 20) = v63;
              if ( !v45 )
              {
                v64 = *(_QWORD *)(v62 + 40);
                if ( v64 )
                {
                  v74 = *(_QWORD *)(v64 + 48);
                  v80 = *(_DWORD *)(v64 + 16);
                }
                else
                {
                  v74 = 0LL;
                  v80 = 0;
                }
                v77 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
                CurrentProcessId = PsGetCurrentProcessId();
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                  McTemplateK0ppppppppppppq_EtwWriteTransfer(
                    v77,
                    &EventCreateDeviceAllocation,
                    v74,
                    CurrentProcessId,
                    a1,
                    v77,
                    v62);
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73);
              v52 = Current;
              if ( ++v57 >= *(_DWORD *)(a2 + 16) )
                goto LABEL_93;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_81:
            v61 = 0LL;
            goto LABEL_82;
          }
          v36 = -1073741811;
          WdLogSingleEntry4(3LL, a1, v25, v26, -1073741811LL);
        }
        else
        {
          WdLogSingleEntry3(3LL, a1, *(unsigned int *)(a2 + 16), -1073741801LL);
          v36 = -1073741801;
        }
        v45 = v71 == 0;
        goto LABEL_52;
      }
      v36 = -1073741811;
      WdLogSingleEntry2(2LL, a1, -1073741811LL);
      v44 = L"Device 0x%I64x: PrivateRuntimeData has been marked as invalid, returning 0x%I64x";
      v68 = 0LL;
      v67 = 0LL;
      v66 = -1073741811LL;
    }
    else
    {
      v36 = -1073741811;
      WdLogSingleEntry4(2LL, a1, v19, *(unsigned int *)(a2 + 16), -1073741811LL);
      v44 = L"Device 0x%I64x: Caller specified incorrect number of allocations, should have been 0x%I64x but was 0x%I64x, "
             "returning 0x%I64x";
      v68 = -1073741811LL;
      v67 = *(unsigned int *)(a2 + 16);
      v66 = *(unsigned int *)(v18 + 132);
    }
  }
  else
  {
    v36 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    v44 = L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x";
    v68 = 0LL;
    v67 = 0LL;
    v66 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v44, (__int64)a1, v66, v67, v68, 0LL);
LABEL_38:
  if ( v71 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
LABEL_35:
  operator delete(v14);
  return (unsigned int)v36;
}
