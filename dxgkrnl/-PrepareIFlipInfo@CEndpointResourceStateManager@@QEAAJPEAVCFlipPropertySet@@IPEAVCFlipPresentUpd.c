/*
 * XREFs of ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0085E84
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0075634 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0078CD4 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x1C0084FAC (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 *     ??$FindProperty@UPresentedContentUpdateHDR10Info@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateHDR10Info@@@Z @ 0x1C0085010 (--$FindProperty@UPresentedContentUpdateHDR10Info@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedCo.c)
 *     ??$FindProperty@UPresentedContentUpdateHDR10PlusInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateHDR10PlusInfo@@@Z @ 0x1C0085074 (--$FindProperty@UPresentedContentUpdateHDR10PlusInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresent.c)
 *     ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x1C00850D8 (--$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContent.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C008562C (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1C00857EC (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIFlipInfo(
        struct _LIST_ENTRY *this,
        struct CFlipPropertySet *a2,
        int a3,
        struct CFlipPresentUpdate *a4,
        struct FlipManagerTokenIFlipInfo **a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r15
  char *Pool2; // rax
  char *v10; // rdi
  CEndpointResourceStateManager *v11; // rcx
  struct CFlipResourceState *ResourceState; // rax
  __int64 v13; // r11
  __int64 v14; // r14
  struct CFlipResourceState *v15; // r13
  __int64 v16; // rsi
  CompositionSurfaceObject *v17; // r13
  __int64 v18; // r14
  __int64 v20; // rdx
  struct CFlipResourceState *v21; // rax
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rdx
  struct CFlipResourceState *v25; // rax
  struct CFlipResourceState *v26; // rsi
  struct _LIST_ENTRY *v27; // r11
  __int64 v28; // rdx
  bool v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h] BYREF
  struct CFlipResourceState *v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]

  v5 = 0;
  v30 = 0LL;
  v8 = 0LL;
  Pool2 = (char *)ExAllocatePool2(257LL, 104LL, 1768506182LL);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(Pool2, 0, 0x68uLL);
  *(_QWORD *)(v10 + 28) = this[2].Flink;
  *((_QWORD *)v10 + 5) = this[2].Blink;
  if ( !CEndpointResourceStateManager::IsSimpleUpdatePresent(a4)
    || (ResourceState = CEndpointResourceStateManager::FindResourceState(
                          v11,
                          *(_QWORD *)(*((_QWORD *)a4 + 6) + 8LL),
                          this + 1),
        v14 = *(_QWORD *)(v13 + 24),
        v15 = ResourceState,
        v31 = ResourceState,
        !v14)
    || (CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(v14, &v30), (v16 = v30) == 0)
    || (*(_BYTE *)(v30 + 1) & 4) != 0 )
  {
LABEL_25:
    *a5 = (struct FlipManagerTokenIFlipInfo *)v10;
    return v5;
  }
  if ( *(_DWORD *)(v30 + 56) == 1 )
  {
    v30 = 0LL;
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10Info>(v14, &v30);
  }
  else
  {
    if ( *(_DWORD *)(v30 + 56) != 2 )
    {
LABEL_11:
      *(_DWORD *)(v16 + 56) = 0;
      goto LABEL_12;
    }
    v30 = 0LL;
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10PlusInfo>(v14, &v30);
  }
  v8 = v30;
  if ( !v30 )
    goto LABEL_11;
LABEL_12:
  v30 = *((_QWORD *)v15 + 6);
  if ( !v30 )
    goto LABEL_25;
  v17 = *(CompositionSurfaceObject **)(*((_QWORD *)v15 + 3) + 48LL);
  if ( !v17 )
    goto LABEL_25;
  v18 = ExAllocatePool2(65LL, 56LL, 1767981894LL);
  if ( v18 )
  {
    v20 = v30;
    v32 = 0LL;
    v21 = v31;
    *(_OWORD *)v18 = 0LL;
    *(_OWORD *)(v18 + 16) = 0LL;
    v22 = *((_QWORD *)v21 + 7);
    *(_OWORD *)(v18 + 32) = 0LL;
    *((_QWORD *)v10 + 5) = v22;
    v23 = v32;
    v10[84] = 1;
    *(_QWORD *)(v10 + 28) = *((_QWORD *)v17 + 3);
    v24 = *(_QWORD *)(v20 + 40);
    *(_QWORD *)(v18 + 48) = v23;
    *(_QWORD *)v18 = 56LL;
    *((_DWORD *)v10 + 9) = CEndpointResourceStateManager::FindPoolBufferIndex(
                             (CEndpointResourceStateManager **)this,
                             v24);
    v25 = v31;
    *(_QWORD *)v10 = v16;
    v26 = 0LL;
    *((_QWORD *)v10 + 2) = v8;
    v31 = 0LL;
    *((_QWORD *)v10 + 11) = *(_QWORD *)(*((_QWORD *)v25 + 3) + 40LL);
    *((_QWORD *)v10 + 12) = v18;
    *(_DWORD *)(v18 + 8) = a3;
    this[2].Flink = v27;
    this[2].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v10 + 5);
    if ( a2 )
    {
      CFlipPropertySetBase::FindProperty<PresentParametersInfo>((__int64)a2, &v31);
      v26 = v31;
      if ( v31 )
      {
        *(_DWORD *)(v18 + 12) = *((_DWORD *)v31 + 2);
        if ( *((_BYTE *)v26 + 12) )
        {
          v28 = *((_QWORD *)v10 + 5);
          v29 = 0;
          if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v17, v28, &v29) >= 0 && v29 )
            *((_BYTE *)v26 + 12) = 0;
        }
      }
    }
    *((_QWORD *)v10 + 1) = v26;
    goto LABEL_25;
  }
  FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v10);
  return (unsigned int)-1073741801;
}
