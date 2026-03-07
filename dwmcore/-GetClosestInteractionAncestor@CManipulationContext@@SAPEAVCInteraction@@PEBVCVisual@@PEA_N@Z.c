struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1, bool *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *VisualEffectiveParentImpl; // rax
  const struct CVisual *v4; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  while ( 1 )
  {
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(a1, a2);
    v4 = VisualEffectiveParentImpl;
    if ( !VisualEffectiveParentImpl )
      break;
    InteractionInternal = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
    if ( *Microsoft::WRL::ComPtr<CInteraction>::operator=(&v7, (__int64)InteractionInternal) )
      break;
    a1 = v4;
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (struct CInteraction *)v5;
}
