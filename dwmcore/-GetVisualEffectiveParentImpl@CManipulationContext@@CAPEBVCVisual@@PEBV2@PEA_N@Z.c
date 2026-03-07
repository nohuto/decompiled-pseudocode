const struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParentImpl(const struct CVisual *a1, bool *a2)
{
  const struct CVisual *v2; // rdi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v5; // rax
  char v6; // bl
  bool IsStrictlyHoverPointerSource; // al

  v2 = a1;
  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( !InteractionInternal || (*((_BYTE *)InteractionInternal + 192) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v2 = (const struct CVisual *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        break;
      v5 = CVisual::GetInteractionInternal(v2);
      if ( v5 )
      {
        v6 = *((_BYTE *)v5 + 192);
        IsStrictlyHoverPointerSource = CInteraction::IsStrictlyHoverPointerSource(v5);
        if ( (v6 & 0x20) != 0 || IsStrictlyHoverPointerSource )
          continue;
      }
      return v2;
    }
  }
  return 0LL;
}
