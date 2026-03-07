bool __fastcall CManipulationContext::IsInteractionDescendantOfVisual(
        const struct CInteraction *a1,
        const struct CVisual *a2)
{
  __int64 v2; // r8
  const struct CVisual *VisualEffectiveParentImpl; // rax
  bool v5; // bl

  v2 = *((_QWORD *)a1 + 14);
  VisualEffectiveParentImpl = 0LL;
  if ( v2 )
    VisualEffectiveParentImpl = *(const struct CVisual **)(v2 + 16);
  v5 = 0;
  while ( VisualEffectiveParentImpl && !v5 )
  {
    v5 = VisualEffectiveParentImpl == a2;
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(
                                  VisualEffectiveParentImpl,
                                  (bool *)a2);
  }
  return v5;
}
