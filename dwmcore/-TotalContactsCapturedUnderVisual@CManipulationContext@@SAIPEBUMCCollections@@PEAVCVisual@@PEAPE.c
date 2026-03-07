__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v4; // esi
  bool *v7; // rdx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v9; // rax
  unsigned int TotalNumContacts; // eax
  struct CInteraction *v11; // rbx
  struct CInteraction *ClosestInteractionAncestor; // rax
  CInteraction *i; // rdi
  int v14; // edi
  __int64 v15; // r14
  __int64 v16; // r13
  struct CInteraction *v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0LL;
  if ( CVisual::GetInteractionInternal(a2) )
  {
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v18, *((_QWORD *)InteractionInternal + 27));
    v9 = CVisual::GetInteractionInternal(a2);
    TotalNumContacts = CInteraction::GetTotalNumContacts(v9);
    v11 = v18;
    v4 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2, v7);
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v18, (__int64)ClosestInteractionAncestor);
    v11 = v18;
    if ( v18 )
    {
      for ( i = (CInteraction *)*((_QWORD *)v18 + 30); i; i = (CInteraction *)*((_QWORD *)i + 28) )
      {
        if ( CManipulationContext::IsInteractionDescendantOfVisual(i, a2) )
          v4 += CInteraction::GetTotalNumContacts(i);
      }
    }
    else
    {
      v14 = 0;
      if ( *((int *)a1 + 8) > 0 )
      {
        v15 = 0LL;
        do
        {
          v16 = *(_QWORD *)(v15 + *((_QWORD *)a1 + 3));
          if ( CManipulationContext::IsInteractionDescendantOfVisual(*(const struct CInteraction **)(v16 + 48), a2) )
            v4 += CInteraction::GetTotalNumContacts(*(CInteraction **)(v16 + 48));
          ++v14;
          v15 += 8LL;
        }
        while ( v14 < *((_DWORD *)a1 + 8) );
      }
    }
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v18);
  *a3 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v11 + 16LL))(v11);
  return v4;
}
