/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000CA44 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage @ 0x1C0026F20 (Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage.c)
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

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3)
{
  CEndpointResourceStateManager *v3; // rdi
  CEndpointResourceStateManager *v4; // r13
  signed int v5; // ebx
  int v6; // esi
  char v7; // r15
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r9
  char v12; // al
  signed int v13; // eax
  char *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // eax
  _QWORD **v17; // r14
  _QWORD *v18; // r12
  int v19; // eax
  char v20; // r9
  char v21; // r10
  char v22; // r11
  __int64 v23; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v25; // r9
  int v26; // eax
  CEndpointResourceStateManager *v27; // r14
  struct CCompositionSwapchainBuffer *v28; // rdi
  unsigned int v29; // esi
  __int64 v30; // rax
  _QWORD *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  struct CBufferRealization *v35; // rsi
  struct DXGGLOBAL *v36; // rax
  unsigned int v37; // esi
  struct DXGGLOBAL *v38; // rax
  int v39; // eax
  CEndpointResourceStateManager *v40; // r8
  _DWORD *v41; // r11
  _DWORD *v42; // rdi
  CEndpointResourceStateManager *v43; // rsi
  __int64 v44; // r9
  __int64 v45; // r10
  char v46; // al
  _DWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rdx
  _QWORD *v51; // rdi
  _DWORD *v52; // r12
  _DWORD *v53; // rbx
  _QWORD *v54; // r8
  __int64 v55; // rsi
  __int64 v56; // r14
  _DWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r15
  _QWORD *v61; // r13
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  _DWORD *v69; // rdx
  struct CBufferRealization *v71; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v72; // [rsp+48h] [rbp-79h]
  _QWORD **v73; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  int v75; // [rsp+60h] [rbp-61h]
  __int128 v76; // [rsp+68h] [rbp-59h]
  __int128 v77; // [rsp+78h] [rbp-49h]
  _DWORD *v78; // [rsp+88h] [rbp-39h]
  __int64 v79; // [rsp+90h] [rbp-31h]
  __int64 v80; // [rsp+98h] [rbp-29h]
  int v81; // [rsp+A0h] [rbp-21h]
  _DWORD v82[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-11h]
  __int64 v84; // [rsp+B8h] [rbp-9h]
  __int64 v85; // [rsp+C0h] [rbp-1h]
  __int64 v86; // [rsp+C8h] [rbp+7h]
  int v88; // [rsp+128h] [rbp+67h]
  bool v91; // [rsp+140h] [rbp+7Fh]
  _QWORD *v92; // [rsp+140h] [rbp+7Fh]

  v3 = *this;
  P = 0LL;
  v75 = 0;
  v4 = (CEndpointResourceStateManager *)this;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v5 = 0;
  v79 = 0LL;
  v6 = 0;
  v80 = 0LL;
  v81 = 0;
  v7 = 1;
  v91 = 0;
  while ( v3 != v4 )
  {
    v8 = (__int64)v3 + 16;
    v9 = 0;
    if ( !v3 )
      v8 = 24LL;
    v10 = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
    if ( !v10 )
      goto LABEL_17;
    v71 = 0LL;
    CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(v10, &v71);
    if ( !v71 )
      goto LABEL_17;
    v9 = *((_BYTE *)v71 + 4);
    if ( *(_DWORD *)v71 == 10 || *(_DWORD *)v71 == 24 || *(_DWORD *)v71 == 28 || *(_DWORD *)v71 == 87 )
      goto LABEL_17;
    if ( *(_DWORD *)v71 != 103 )
    {
      if ( *(_DWORD *)v71 == 104 )
      {
        if ( !(unsigned int)Feature_P010DisplayableSupport__private_IsEnabledDeviceUsage() )
        {
LABEL_16:
          v5 = -1073741811;
          goto LABEL_17;
        }
      }
      else if ( (unsigned int)(*(_DWORD *)v71 - 106) > 1 )
      {
        goto LABEL_16;
      }
    }
    v91 = 1;
LABEL_17:
    v11 = (__int64)v3 + 24;
    v7 = v9 != 0 ? v7 : 0;
    if ( !v3 )
      v11 = 32LL;
    v12 = *(_BYTE *)v11;
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
      v13 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      v6 = HIDWORD(v79);
      v5 = v13;
      v12 = *v14;
    }
    if ( v5 >= 0 && (v12 & 2) != 0 )
    {
      v15 = v6;
      v16 = v6 + 16;
      v6 = -1;
      if ( v16 >= v15 )
        v6 = v16;
      v5 = v16 < v15 ? 0xC0000095 : 0;
      HIDWORD(v79) = v6;
    }
    v3 = *(CEndpointResourceStateManager **)v3;
    if ( v5 < 0 )
      break;
  }
  v17 = (_QWORD **)((char *)v4 + 16);
  v18 = (_QWORD *)*((_QWORD *)v4 + 2);
  v73 = (_QWORD **)((char *)v4 + 16);
  if ( v5 >= 0 )
  {
    while ( v18 != v17 )
    {
      if ( (*(_BYTE *)(((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)) + 0x20) & 1) != 0 )
        v5 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      if ( v5 >= 0 )
      {
        if ( (*(_BYTE *)(((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)) + 0x40) & 1) == 0 )
          goto LABEL_58;
        v19 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize((CResourceStateUpdateSerializer *)&P, 0x28u, 0);
        v23 = *(_QWORD *)(((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)) + 0x18);
        v5 = v19;
        if ( v19 >= 0 )
        {
          if ( !*(_QWORD *)(v23 + 48) || !v22 && *(_BYTE *)(v23 + 65) == v20 && *(_BYTE *)(v23 + 64) == v21 )
            goto LABEL_58;
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(__int64))(*((_QWORD *)Global + 38069) + 256LL))(v23);
          v25 = *(_QWORD *)(v23 + 40);
          v71 = 0LL;
          v26 = CCompositionSwapchainBuffer::Create(v7, v91, a3, v25, &v71);
          v27 = *(CEndpointResourceStateManager **)v4;
          v28 = v71;
          v5 = v26;
          v72 = 0;
          v29 = 0;
          if ( v26 >= 0 )
          {
            while ( v27 != v4 )
            {
              v30 = (__int64)v27 + 16;
              if ( !v27 )
                v30 = 24LL;
              v31 = *(_QWORD **)v30;
              v32 = (__int64)v27 + 24;
              if ( !v27 )
                v32 = 32LL;
              if ( (*(_BYTE *)v32 & 2) == 0 )
              {
                v86 = 0LL;
                v71 = 0LL;
                v83 = v31[8];
                v84 = v31[10];
                v33 = v31[6];
                v82[0] = v91 ? 4 : 2;
                v82[1] = v29;
                v85 = v33;
                v34 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v82, 1, &v71);
                v35 = v71;
                v5 = v34;
                if ( v34 >= 0 )
                {
                  v5 = (*(__int64 (__fastcall **)(struct CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)v28 + 216LL))(
                         v28,
                         v71);
                  if ( v5 >= 0 )
                    v35 = 0LL;
                }
                if ( v35 )
                  (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v35)(v35, 1LL);
                v36 = DXGGLOBAL::GetGlobal();
                v37 = v72;
                (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v36 + 38069) + 264LL))(v31, v72);
                v29 = v37 + 1;
                v72 = v29;
              }
              v27 = *(CEndpointResourceStateManager **)v27;
              v4 = (CEndpointResourceStateManager *)this;
              if ( v5 < 0 )
                goto LABEL_55;
            }
            v5 = CContentResourceState::RebindCompositionSurfaceBuffer(
                   (CContentResourceState *)((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)),
                   v28);
            if ( v5 >= 0 )
              v28 = 0LL;
          }
LABEL_55:
          if ( v28 )
            (**(void (__fastcall ***)(struct CCompositionSwapchainBuffer *, __int64))v28)(v28, 1LL);
          v38 = DXGGLOBAL::GetGlobal();
          (*(void (**)(void))(*((_QWORD *)v38 + 38069) + 272LL))();
          v17 = (_QWORD **)((char *)v4 + 16);
          if ( v5 >= 0 )
          {
LABEL_58:
            if ( (*(_BYTE *)(((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)) + 0x20) & 2) != 0 )
            {
              v39 = -1;
              if ( (unsigned int)(HIDWORD(v80) + 16) >= HIDWORD(v80) )
                v39 = HIDWORD(v80) + 16;
              v5 = (unsigned int)(HIDWORD(v80) + 16) < HIDWORD(v80) ? 0xC0000095 : 0;
              HIDWORD(v80) = v39;
            }
          }
        }
      }
      v18 = (_QWORD *)*v18;
      if ( v5 < 0 )
        goto LABEL_110;
    }
    v88 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
    v5 = v88;
    if ( v88 >= 0 )
    {
      v40 = *(CEndpointResourceStateManager **)v4;
      if ( *(CEndpointResourceStateManager **)v4 != v4 )
      {
        v41 = (_DWORD *)*((_QWORD *)&v76 + 1);
        v42 = (_DWORD *)v76;
        do
        {
          v43 = *(CEndpointResourceStateManager **)v40;
          v44 = (__int64)v40 + 24;
          v45 = (__int64)v40 + 16;
          if ( !v40 )
            v44 = 32LL;
          v46 = *(_BYTE *)v44;
          if ( (*(_BYTE *)v44 & 1) != 0 )
          {
            *v42 = 2;
            v47 = v42;
            v42 += 4;
            v48 = (__int64)v40 + 16;
            if ( !v40 )
              v48 = 24LL;
            v49 = *(_QWORD *)v48;
            *((_QWORD *)v47 + 1) = *(_QWORD *)v48;
            ++*(_DWORD *)(v49 + 24);
            *(_BYTE *)v44 |= 4u;
            v46 = *(_BYTE *)v44;
          }
          if ( (v46 & 2) != 0 )
          {
            *v41 = 0;
            v50 = v41;
            v41 += 4;
            if ( !v40 )
              v45 = 24LL;
            *((_QWORD *)v50 + 1) = *(_QWORD *)(*(_QWORD *)v45 + 40LL);
            *(_BYTE *)v44 |= 8u;
          }
          v40 = v43;
        }
        while ( v43 != v4 );
        v5 = v88;
        v17 = v73;
        *((_QWORD *)&v76 + 1) = v41;
        *(_QWORD *)&v76 = v42;
      }
      v51 = *v17;
      if ( *v17 != v17 )
      {
        v52 = (_DWORD *)*((_QWORD *)&v77 + 1);
        v53 = (_DWORD *)v77;
        do
        {
          v54 = (_QWORD *)*v51;
          v55 = (__int64)(v51 + 3);
          v92 = (_QWORD *)*v51;
          v56 = (__int64)(v51 + 2);
          if ( !v51 )
            v55 = 32LL;
          if ( (*(_BYTE *)v55 & 1) != 0 )
          {
            *v53 = 3;
            v57 = v53;
            v53 += 4;
            v58 = (__int64)(v51 + 2);
            if ( !v51 )
              v58 = 24LL;
            v59 = *(_QWORD *)v58;
            *((_QWORD *)v57 + 1) = *(_QWORD *)v58;
            ++*(_DWORD *)(v59 + 24);
            *(_BYTE *)v55 |= 4u;
          }
          v60 = (__int64)(v51 + 7);
          if ( !v51 )
            v60 = 64LL;
          if ( (*(_BYTE *)v60 & 1) != 0 )
          {
            v61 = v78;
            *v78 = 4;
            v78 = v61 + 5;
            v62 = (__int64)(v51 + 5);
            if ( !v51 )
              v62 = 48LL;
            v63 = *(_QWORD *)v62;
            v64 = (__int64)(v51 + 2);
            if ( !v51 )
              v64 = 24LL;
            v65 = *(_QWORD *)(*(_QWORD *)v64 + 40LL);
            v66 = (__int64)(v51 + 4);
            v61[1] = v65;
            if ( !v51 )
              v66 = 40LL;
            v67 = *(_QWORD *)v66;
            v61[3] = *(_QWORD *)v66;
            if ( v67 )
              ++*(_DWORD *)(v67 + 8);
            v61[2] = v63;
            if ( v63 )
            {
              ++*(_DWORD *)(v63 + 24);
              CPoolBufferResource::AddUsageReference((PRKEVENT *)v63);
              v54 = v92;
            }
            v68 = (__int64)(v51 + 6);
            if ( !v51 )
              v68 = 56LL;
            v61[4] = *(_QWORD *)v68;
            *(_BYTE *)v60 |= 2u;
          }
          if ( (*(_BYTE *)v55 & 2) != 0 )
          {
            *v52 = 1;
            v69 = v52;
            v52 += 4;
            if ( !v51 )
              v56 = 24LL;
            *((_QWORD *)v69 + 1) = *(_QWORD *)(*(_QWORD *)v56 + 40LL);
            *(_BYTE *)v55 |= 8u;
          }
          v51 = v54;
        }
        while ( v54 != v73 );
        *(_QWORD *)&v77 = v53;
        v5 = v88;
        *((_QWORD *)&v77 + 1) = v52;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
    }
  }
LABEL_110:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
