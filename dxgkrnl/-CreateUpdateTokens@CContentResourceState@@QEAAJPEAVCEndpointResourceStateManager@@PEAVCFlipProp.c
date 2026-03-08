/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0087A84
 * Callers:
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0086D5C (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0026E2C (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C008562C (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C0087924 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00891B4 (-CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        CEndpointResourceStateManager **a2,
        struct CFlipPropertySet *a3,
        char a4,
        struct _LIST_ENTRY *a5)
{
  int v9; // ebp
  struct CompositionSurfaceObject *v10; // rbx
  __int64 v11; // rdx
  unsigned int PoolBufferIndex; // edi
  unsigned __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  struct CFlipContentToken *v15; // rbx
  struct CFlipContentToken *v16; // r8
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  struct CFlipContentToken *v21; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  v10 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( v10 && (*((_BYTE *)this + 64) & 1) != 0 )
  {
    v11 = *((_QWORD *)this + 6);
    if ( v11 )
      PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex(a2, *(_QWORD *)(v11 + 40));
    else
      PoolBufferIndex = -1;
    if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() && a4 )
      PoolBufferIndex = 0;
    v13 = *((_QWORD *)this + 7);
    v21 = 0LL;
    v9 = CFlipContentToken::CreateCompleted(v13, v10, &v21);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 288LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)v10 + 3),
      *((_QWORD *)this + 7),
      PoolBufferIndex);
    if ( v9 >= 0 )
    {
      v15 = v21;
      v16 = v21;
      *((_DWORD *)v21 + 24) = PoolBufferIndex;
      CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(this, a3, v16);
      v17 = a5;
      v18 = (struct _LIST_ENTRY *)((char *)v15 + 8);
      Blink = a5->Blink;
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v18->Flink = a5;
      v18->Blink = Blink;
      Blink->Flink = v18;
      v17->Blink = v18;
    }
  }
  return (unsigned int)v9;
}
