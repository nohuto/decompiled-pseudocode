__int64 __fastcall DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4,
        struct DXGSYNCOBJECTLOCK *a5,
        struct DXGSYNCOBJECTMUTEX *a6,
        struct DXGSYNCOBJECTMUTEX *a7)
{
  __int64 v10; // rdi
  char v11; // dl
  __int64 v12; // rsi
  char *v13; // r13
  D3DKMT_MULTIPLANE_OVERLAY3 *v14; // r14
  UINT LayerIndex; // r8d
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r10
  __int64 v21; // rcx
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // ecx
  __int64 v23; // rcx
  __int64 v25; // rdx
  struct DXGPROCESS *Current; // rax
  volatile signed __int32 *v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v33; // rdx
  struct DXGPROCESS *v34; // rax
  volatile signed __int32 *v35; // rdi
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rax
  struct _VIDSCH_SYNC_OBJECT *v40; // rax
  __int64 v41; // rbx
  UINT v42; // [rsp+50h] [rbp-B8h]
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E v43; // [rsp+50h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  UINT v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-B0h]
  struct DXGPROCESS *v47; // [rsp+60h] [rbp-A8h]
  struct DXGPROCESS *v48; // [rsp+60h] [rbp-A8h]
  char *v50; // [rsp+70h] [rbp-98h]
  _DWORD v51[16]; // [rsp+88h] [rbp-80h]

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2866LL) )
  {
    if ( *((_BYTE *)a5 + 8) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
    v10 = *(_QWORD *)a5;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 600), 1u);
    v11 = 0;
    *((_BYTE *)a5 + 8) = 1;
    v12 = 0LL;
    if ( a2->PresentPlaneCount )
    {
      v13 = (char *)a4 + 600;
      do
      {
        v14 = a2->ppPresentPlanes[v12];
        LayerIndex = v14->LayerIndex;
        v16 = 1 << v14->LayerIndex;
        v42 = v14->LayerIndex;
        if ( (a3 & v16) != 0 )
        {
          v17 = (a3 & (v16 - 1) & 0x55555555) + (((a3 & (unsigned int)(v16 - 1)) >> 1) & 0x55555555);
          v18 = (((v17 & 0x33333333) + ((v17 >> 2) & 0x33333333)) & 0xF0F0F0F)
              + ((((v17 & 0x33333333) + ((v17 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
          v19 = (unsigned __int16)((unsigned __int8)v18 + BYTE1(v18))
              + (((v18 & 0xFF00FF) + ((v18 >> 8) & 0xFF00FF)) >> 16);
        }
        else
        {
          v19 = -1;
        }
        v20 = v19 * ((8 * *((_DWORD *)v13 + 2) + 231) & 0xFFFFFFF8);
        v21 = v14[1].LayerIndex;
        v50 = &v13[v20];
        if ( (_DWORD)v21 )
        {
          v25 = 0LL;
          if ( (_DWORD)v12 )
          {
            while ( (_DWORD)v21 != v51[v25] )
            {
              v25 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v25 >= (unsigned int)v12 )
                goto LABEL_20;
            }
            WdLogSingleEntry2(2LL, v21, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Duplicate hFlipToFence (0x%I64x). FlipToFence must be different for every plane, returning 0x%I64x",
              v14[1].LayerIndex,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
LABEL_20:
          v51[v12] = v21;
          Current = DXGPROCESS::GetCurrent();
          v45 = v14[1].LayerIndex;
          v47 = Current;
          v27 = (volatile signed __int32 *)((char *)Current + 248);
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
          v28 = (v45 >> 6) & 0xFFFFFF;
          if ( v28 >= *((_DWORD *)v47 + 74) )
            goto LABEL_44;
          v29 = *((_QWORD *)v47 + 35) + 16LL * v28;
          if ( ((v45 >> 25) & 0x60) != (*(_BYTE *)(v29 + 8) & 0x60) )
            goto LABEL_44;
          if ( (*(_DWORD *)(v29 + 8) & 0x2000) != 0 )
            goto LABEL_44;
          v30 = *(_DWORD *)(v29 + 8) & 0x1F;
          if ( !v30 )
            goto LABEL_44;
          if ( v30 != 11 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_44:
            _InterlockedDecrement(v27 + 4);
            ExReleasePushLockSharedEx(v27, 0LL);
            KeLeaveCriticalRegion();
LABEL_45:
            WdLogSingleEntry2(2LL, v14[1].LayerIndex, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"hFlipToFence (0x%I64x) not found, returning 0x%I64x",
              v14[1].LayerIndex,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
          v31 = *(_QWORD *)v29;
          _InterlockedDecrement(v27 + 4);
          v46 = v31;
          ExReleasePushLockSharedEx(v27, 0LL);
          KeLeaveCriticalRegion();
          if ( !v46 )
            goto LABEL_45;
          DXGAUTOMUTEX::Initialize(
            (struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * (unsigned int)v12),
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(v46 + 32) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * (unsigned int)v12));
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *(DXGSYNCOBJECT **)(v46 + 32),
                               *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          LayerIndex = v42;
          *((_QWORD *)v50 + 26) = VidSchSyncObject;
          *((_QWORD *)v50 + 27) = *(_QWORD *)&v14[1].FlipInterval;
        }
        Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v14[1].InputFlags.Value;
        if ( Value )
        {
          if ( (v14->InputFlags.Value & 1) == 0 )
          {
            v41 = LayerIndex;
            WdLogSingleEntry2(2LL, LayerIndex, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"hFlipAwayFence is not supported for disabling plane (0x%I64x), returning 0x%I64x",
              v41,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
          v33 = 0LL;
          if ( (_DWORD)v12 )
          {
            while ( Value != v51[v33 + 8] )
            {
              v33 = (unsigned int)(v33 + 1);
              if ( (unsigned int)v33 >= (unsigned int)v12 )
                goto LABEL_31;
            }
            WdLogSingleEntry2(2LL, v14[1].InputFlags.Value, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Duplicate hFlipAwayFence (0x%I64x). FlipAwayFence must be different for every plane, returning 0x%I64x",
              v14[1].InputFlags.Value,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
LABEL_31:
          v51[v12 + 8] = Value;
          v34 = DXGPROCESS::GetCurrent();
          v43 = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v14[1].InputFlags.Value;
          v48 = v34;
          v35 = (volatile signed __int32 *)((char *)v34 + 248);
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v34 + 248));
          v36 = (*(unsigned int *)&v43 >> 6) & 0xFFFFFF;
          if ( v36 >= *((_DWORD *)v48 + 74) )
            goto LABEL_40;
          v37 = *((_QWORD *)v48 + 35) + 16LL * v36;
          if ( ((*(unsigned int *)&v43 >> 25) & 0x60) != (*(_BYTE *)(v37 + 8) & 0x60) )
            goto LABEL_40;
          if ( (*(_DWORD *)(v37 + 8) & 0x2000) != 0 )
            goto LABEL_40;
          v38 = *(_DWORD *)(v37 + 8) & 0x1F;
          if ( !v38 )
            goto LABEL_40;
          if ( v38 != 11 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
            _InterlockedDecrement(v35 + 4);
            ExReleasePushLockSharedEx(v35, 0LL);
            KeLeaveCriticalRegion();
LABEL_41:
            WdLogSingleEntry2(2LL, v14[1].InputFlags.Value, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"hFlipFromFence (0x%I64x) not found, returning 0x%I64x",
              v14[1].InputFlags.Value,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
          v39 = *(_QWORD *)v37;
          _InterlockedDecrement(v35 + 4);
          v44 = v39;
          ExReleasePushLockSharedEx(v35, 0LL);
          KeLeaveCriticalRegion();
          if ( !v44 )
            goto LABEL_41;
          DXGAUTOMUTEX::Initialize(
            (struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * (unsigned int)v12),
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(v44 + 32) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * (unsigned int)v12));
          v40 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(v44 + 32),
                  *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          *((_QWORD *)v50 + 28) = v40;
          *((_QWORD *)v50 + 29) = *(_QWORD *)&v14[1].AllocationCount;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < a2->PresentPlaneCount );
      if ( v11 )
        return 0LL;
    }
    if ( !*((_BYTE *)a5 + 8) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
    v23 = *(_QWORD *)a5;
    *((_BYTE *)a5 + 8) = 0;
    ExReleaseResourceLite(*(PERESOURCE *)(v23 + 600));
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
