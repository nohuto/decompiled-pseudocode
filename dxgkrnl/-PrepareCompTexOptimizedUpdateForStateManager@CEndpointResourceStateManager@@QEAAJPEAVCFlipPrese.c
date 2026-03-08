/*
 * XREFs of ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0085918
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000CA44 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084B2C (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x1C0084F48 (--$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBuff.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00856C0 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0085750 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0085784 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00857B8 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C0086E90 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C0087E8C (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_N0PEAUFlipManagerObject@@_KPEAPEAV1@@Z @ 0x1C0089440 (-Create@CCompositionSwapchainBuffer@@SAJ_N0PEAUFlipManagerObject@@_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3)
{
  CEndpointResourceStateManager *v3; // r9
  struct CCompositionSwapchainBuffer *v4; // r15
  signed int v6; // ebx
  int v7; // r8d
  __int64 v8; // r10
  char v9; // al
  signed int v10; // eax
  char *v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // eax
  char *v14; // r14
  char *v15; // r13
  __int64 v16; // rdi
  struct DXGGLOBAL *Global; // rax
  bool v18; // si
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  int v21; // eax
  struct CCompositionSwapchainBuffer *v22; // rdi
  int v23; // eax
  struct CBufferRealization *v24; // rsi
  struct DXGGLOBAL *v25; // rax
  struct DXGGLOBAL *v26; // rax
  int v27; // eax
  CEndpointResourceStateManager **v28; // r8
  _DWORD *v29; // r11
  _DWORD *v30; // rsi
  CEndpointResourceStateManager *v31; // rdi
  __int64 v32; // r9
  __int64 v33; // r10
  char v34; // al
  _DWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rdx
  char **v39; // rdi
  _DWORD *v40; // r12
  _DWORD *v41; // rbx
  char *v42; // r8
  __int64 v43; // rsi
  __int64 v44; // r14
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  _QWORD *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  _DWORD *v57; // rdx
  PVOID P; // [rsp+30h] [rbp-69h] BYREF
  int v60; // [rsp+38h] [rbp-61h]
  __int128 v61; // [rsp+40h] [rbp-59h]
  __int128 v62; // [rsp+50h] [rbp-49h]
  _DWORD *v63; // [rsp+60h] [rbp-39h]
  __int64 v64; // [rsp+68h] [rbp-31h]
  __int64 v65; // [rsp+70h] [rbp-29h]
  int v66; // [rsp+78h] [rbp-21h]
  char *v67; // [rsp+80h] [rbp-19h]
  _DWORD v68[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v69; // [rsp+90h] [rbp-9h]
  __int64 v70; // [rsp+98h] [rbp-1h]
  __int64 v71; // [rsp+A0h] [rbp+7h]
  __int64 v72; // [rsp+A8h] [rbp+Fh]
  struct CBufferRealization *v73; // [rsp+100h] [rbp+67h] BYREF
  struct CFlipPresentUpdate *v74; // [rsp+108h] [rbp+6Fh]
  struct FlipManagerObject *v75; // [rsp+110h] [rbp+77h]
  char *v76; // [rsp+118h] [rbp+7Fh]

  v75 = a3;
  v74 = a2;
  v3 = *(CEndpointResourceStateManager **)this;
  v4 = 0LL;
  P = 0LL;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v6 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v7 = 0;
  v65 = 0LL;
  v66 = 0;
  do
  {
    if ( v3 == this )
      break;
    v8 = (__int64)v3 + 24;
    if ( !v3 )
      v8 = 32LL;
    v9 = *(_BYTE *)v8;
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      v10 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      v7 = HIDWORD(v64);
      v6 = v10;
      v9 = *v11;
    }
    if ( v6 >= 0 && (v9 & 2) != 0 )
    {
      v12 = v7;
      v13 = v7 + 16;
      v7 = -1;
      if ( v13 >= v12 )
        v7 = v13;
      v6 = v13 < v12 ? 0xC0000095 : 0;
      HIDWORD(v64) = v7;
    }
    v3 = *(CEndpointResourceStateManager **)v3;
  }
  while ( v6 >= 0 );
  v14 = (char *)this + 16;
  v15 = (char *)*((_QWORD *)this + 2);
  v76 = (char *)this + 16;
  while ( v6 >= 0 )
  {
    if ( v15 == v14 )
    {
      LODWORD(v73) = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
      v6 = (int)v73;
      if ( (int)v73 >= 0 )
      {
        v28 = *(CEndpointResourceStateManager ***)this;
        if ( *(CEndpointResourceStateManager **)this != this )
        {
          v29 = (_DWORD *)*((_QWORD *)&v61 + 1);
          v30 = (_DWORD *)v61;
          do
          {
            v31 = *v28;
            v32 = (__int64)(v28 + 3);
            v33 = (__int64)(v28 + 2);
            if ( !v28 )
              v32 = 32LL;
            v34 = *(_BYTE *)v32;
            if ( (*(_BYTE *)v32 & 1) != 0 )
            {
              *v30 = 2;
              v35 = v30;
              v30 += 4;
              v36 = (__int64)(v28 + 2);
              if ( !v28 )
                v36 = 24LL;
              v37 = *(_QWORD *)v36;
              *((_QWORD *)v35 + 1) = *(_QWORD *)v36;
              ++*(_DWORD *)(v37 + 24);
              *(_BYTE *)v32 |= 4u;
              v34 = *(_BYTE *)v32;
            }
            if ( (v34 & 2) != 0 )
            {
              *v29 = (_DWORD)v4;
              v38 = v29;
              v29 += 4;
              if ( !v28 )
                v33 = 24LL;
              *((_QWORD *)v38 + 1) = *(_QWORD *)(*(_QWORD *)v33 + 40LL);
              *(_BYTE *)v32 |= 8u;
            }
            v28 = (CEndpointResourceStateManager **)v31;
          }
          while ( v31 != this );
          v14 = v76;
          *((_QWORD *)&v61 + 1) = v29;
          *(_QWORD *)&v61 = v30;
        }
        v39 = *(char ***)v14;
        if ( *(char **)v14 != v14 )
        {
          v40 = (_DWORD *)*((_QWORD *)&v62 + 1);
          v41 = (_DWORD *)v62;
          do
          {
            v42 = *v39;
            v43 = (__int64)(v39 + 3);
            v67 = *v39;
            v44 = (__int64)(v39 + 2);
            if ( !v39 )
              v43 = 32LL;
            if ( (*(_BYTE *)v43 & 1) != 0 )
            {
              *v41 = 3;
              v45 = v41;
              v41 += 4;
              v46 = (__int64)(v39 + 2);
              if ( !v39 )
                v46 = 24LL;
              v47 = *(_QWORD *)v46;
              *((_QWORD *)v45 + 1) = *(_QWORD *)v46;
              ++*(_DWORD *)(v47 + 24);
              *(_BYTE *)v43 |= 4u;
            }
            v48 = (__int64)(v39 + 7);
            if ( !v39 )
              v48 = 64LL;
            if ( (*(_BYTE *)v48 & 1) != 0 )
            {
              v49 = v63;
              *v63 = 4;
              v63 = v49 + 5;
              v50 = (__int64)(v39 + 5);
              if ( !v39 )
                v50 = 48LL;
              v51 = *(_QWORD *)v50;
              v52 = (__int64)(v39 + 2);
              if ( !v39 )
                v52 = 24LL;
              v53 = *(_QWORD *)(*(_QWORD *)v52 + 40LL);
              v54 = (__int64)(v39 + 4);
              v49[1] = v53;
              if ( !v39 )
                v54 = 40LL;
              v55 = *(_QWORD *)v54;
              v49[3] = *(_QWORD *)v54;
              if ( v55 )
                ++*(_DWORD *)(v55 + 8);
              v49[2] = v51;
              if ( v51 )
              {
                ++*(_DWORD *)(v51 + 24);
                CPoolBufferResource::AddUsageReference((PRKEVENT *)v51);
                v42 = v67;
              }
              v56 = (__int64)(v39 + 6);
              if ( !v39 )
                v56 = 56LL;
              v49[4] = *(_QWORD *)v56;
              *(_BYTE *)v48 |= 2u;
            }
            if ( (*(_BYTE *)v43 & 2) != 0 )
            {
              *v40 = 1;
              v57 = v40;
              v40 += 4;
              if ( !v39 )
                v44 = 24LL;
              *((_QWORD *)v57 + 1) = *(_QWORD *)(*(_QWORD *)v44 + 40LL);
              *(_BYTE *)v43 |= 8u;
            }
            v39 = (char **)v42;
          }
          while ( v42 != v76 );
          *(_QWORD *)&v62 = v41;
          v6 = (int)v73;
          *((_QWORD *)&v62 + 1) = v40;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v74);
      }
      break;
    }
    if ( (*(_BYTE *)(((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)) + 0x20) & 1) != 0 )
      v6 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
    if ( v6 < 0 )
      goto LABEL_51;
    if ( (*(_BYTE *)(((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)) + 0x40) & 1) == 0 )
      goto LABEL_47;
    v6 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize((CResourceStateUpdateSerializer *)&P, 0x28u, 0);
    if ( v6 < 0 )
      goto LABEL_51;
    v16 = *(_QWORD *)(((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)) + 0x18);
    if ( *(struct CCompositionSwapchainBuffer **)(v16 + 48) == v4 )
      goto LABEL_47;
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(__int64))(*((_QWORD *)Global + 38069) + 256LL))(v16);
    v18 = (char)v4;
    v4 = *(struct CCompositionSwapchainBuffer **)(((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)) + 0x30);
    if ( v4 )
    {
      v19 = *((_QWORD *)v4 + 4);
      if ( v19 )
      {
        v73 = 0LL;
        CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v19, &v73);
        if ( v73 )
        {
          if ( *(_DWORD *)v73 != 10 && *(_DWORD *)v73 != 24 && *(_DWORD *)v73 != 28 && *(_DWORD *)v73 != 87 )
          {
            if ( *(_DWORD *)v73 != 103 && (unsigned int)(*(_DWORD *)v73 - 106) >= 2 )
            {
              v4 = 0LL;
              v6 = -1073741811;
              v73 = 0LL;
              goto LABEL_46;
            }
            v18 = 1;
          }
        }
      }
    }
    v20 = *(_QWORD *)(v16 + 40);
    v73 = 0LL;
    v21 = CCompositionSwapchainBuffer::Create(0, v18, v75, v20, &v73);
    v22 = v73;
    v6 = v21;
    if ( v21 < 0 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( !v4 )
        goto LABEL_40;
      v73 = 0LL;
      v72 = 0LL;
      v68[1] = 0;
      v68[0] = v18 ? 4 : 2;
      v69 = *((_QWORD *)v4 + 8);
      v70 = *((_QWORD *)v4 + 10);
      v71 = *((_QWORD *)v4 + 5);
      v23 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v68, 1, &v73);
      v24 = v73;
      v6 = v23;
      if ( v23 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)v22 + 216LL))(
               v22,
               v73);
        if ( v6 >= 0 )
          v24 = 0LL;
      }
      if ( v24 )
        (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v24)(v24, 1LL);
      v25 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(struct CCompositionSwapchainBuffer *, _QWORD))(*((_QWORD *)v25 + 38069) + 264LL))(v4, 0LL);
      v4 = 0LL;
      if ( v6 >= 0 )
      {
LABEL_40:
        v6 = CContentResourceState::RebindCompositionSurfaceBuffer(
               (CContentResourceState *)((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)),
               v22);
        if ( v6 >= 0 )
          v22 = v4;
      }
    }
    if ( v22 )
      (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v22)(v22, 1LL);
LABEL_46:
    v26 = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v26 + 38069) + 272LL))();
    if ( v6 >= 0 )
    {
LABEL_47:
      if ( (*(_BYTE *)(((unsigned __int64)(v15 - 8) & -(__int64)(v15 != 0LL)) + 0x20) & 2) != 0 )
      {
        v27 = -1;
        if ( (unsigned int)(HIDWORD(v65) + 16) >= HIDWORD(v65) )
          v27 = HIDWORD(v65) + 16;
        v6 = (unsigned int)(HIDWORD(v65) + 16) < HIDWORD(v65) ? 0xC0000095 : 0;
        HIDWORD(v65) = v27;
      }
    }
LABEL_51:
    v15 = *(char **)v15;
    v14 = (char *)this + 16;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v6;
}
