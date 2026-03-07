__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  CInteraction *v12; // r8
  int TotalNumContacts; // eax
  __int64 v14; // r8
  bool *v15; // rdx
  __int64 v16; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  void *v18; // rdx
  struct CInteraction *InteractionInternal; // rax
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct CInteraction *v29; // [rsp+98h] [rbp+48h] BYREF

  v4 = a3;
  v6 = 0LL;
  v7 = 0;
  if ( a2 > 0xA || !a3 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x1DFu, 0LL);
    return v7;
  }
  switch ( a2 )
  {
    case 0u:
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
      v6 = (__int64 *)InteractionInternal;
      if ( InteractionInternal )
      {
        v20 = *((_QWORD *)InteractionInternal + 25);
        if ( v20 )
        {
          *((_QWORD *)InteractionInternal + 25) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v4);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_35;
      v18 = &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION;
LABEL_34:
      McTemplateU0pp_EventWriteTransfer(v16, v18, v6, v4);
      goto LABEL_35;
    case 1u:
      v6 = (__int64 *)CVisual::GetInteractionInternal((CVisual *)a3);
      v11 = 0;
      v12 = (CInteraction *)v6[30];
      while ( v12 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v12);
        v12 = *(CInteraction **)(v14 + 224);
        v11 += TotalNumContacts;
      }
      if ( v11 < (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v6) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(
                                       (const struct CVisual *)v4,
                                       v15);
        Microsoft::WRL::ComPtr<CInteraction>::operator=(v6 + 25, (__int64)ClosestInteractionAncestor);
      }
      if ( !v11 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v4) )
      {
        *(_BYTE *)(v4 + 101) &= ~0x40u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v4 + 88));
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_35;
      v18 = &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL;
      goto LABEL_34;
    case 2u:
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 88));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        a3 = v4;
        v9 = &MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
        goto LABEL_10;
      }
LABEL_35:
      v21 = DefaultHeap::Alloc(0x48uLL);
      v23 = (__int64)v21;
      if ( v21 )
      {
        memset_0(v21, 0, 0x48uLL);
        *(_DWORD *)v23 = a2;
        Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)(v23 + 8), v4);
        Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v23 + 16), (__int64)v6);
        *(_DWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 0LL;
        v26 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v25, v24, v23);
        v7 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x253u, 0LL);
          CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v23);
        }
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x23Fu, 0LL);
      }
      return v7;
  }
  v8 = a2 - 3;
  if ( a2 != 3 )
  {
    if ( a2 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      v9 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_10:
      McTemplateU0p_EventWriteTransfer(v8, v9, a3);
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  *(_BYTE *)(a3 + 101) &= ~0x40u;
  v29 = 0LL;
  CManipulationContext::TotalContactsCapturedUnderVisual(
    (const struct MCCollections *)(a1 + 160),
    (struct CVisual *)a3,
    &v29);
  v6 = (__int64 *)v29;
  CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v4 + 88));
  if ( v6 )
    (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  *(_BYTE *)(v4 + 101) |= 0x40u;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0p_EventWriteTransfer(v10, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v4);
  if ( v6 )
    goto LABEL_35;
  return v7;
}
